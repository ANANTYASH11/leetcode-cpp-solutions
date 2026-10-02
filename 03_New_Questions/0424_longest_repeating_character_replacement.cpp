// Problem: 424. Longest Repeating Character Replacement
// Link: https://leetcode.com/problems/longest-repeating-character-replacement/
// Difficulty: Medium
// Time Complexity: O(n)
// Space Complexity: O(1) - 26 uppercase alphabet

#include <string>
#include <vector>
#include <algorithm>

class Solution {
public:
    int characterReplacement(std::string s, int k) {
        std::vector<int> count(26, 0);
        int maxFreq = 0;
        int maxLength = 0;
        int left = 0;

        for (int right = 0; right < s.length(); ++right) {
            maxFreq = std::max(maxFreq, ++count[s[right] - 'A']);

            // If characters to replace exceed k, shrink window
            while ((right - left + 1) - maxFreq > k) {
                --count[s[left] - 'A'];
                ++left;
            }
            maxLength = std::max(maxLength, right - left + 1);
        }
        return maxLength;
    }
};
