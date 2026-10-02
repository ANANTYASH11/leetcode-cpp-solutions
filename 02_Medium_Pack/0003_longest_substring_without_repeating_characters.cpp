// Problem: 3. Longest Substring Without Repeating Characters
// Link: https://leetcode.com/problems/longest-substring-without-repeating-characters/
// Difficulty: Medium
// Time Complexity: O(n)
// Space Complexity: O(min(m, n)) where m is size of alphabet

#include <string>
#include <vector>
#include <algorithm>

class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        std::vector<int> lastIndex(128, -1);
        int maxLength = 0;
        int left = 0;

        for (int right = 0; right < s.length(); ++right) {
            char c = s[right];
            if (lastIndex[c] >= left) {
                left = lastIndex[c] + 1;
            }
            lastIndex[c] = right;
            maxLength = std::max(maxLength, right - left + 1);
        }
        return maxLength;
    }
};\n