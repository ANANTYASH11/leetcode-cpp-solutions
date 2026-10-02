// Problem: 567. Permutation in String
// Link: https://leetcode.com/problems/permutation-in-string/
// Difficulty: Medium
// Time Complexity: O(l1 + l2)
// Space Complexity: O(1)

#include <string>
#include <vector>

class Solution {
public:
    bool checkInclusion(std::string s1, std::string s2) {
        if (s1.length() > s2.length()) return false;

        std::vector<int> s1Count(26, 0), s2Count(26, 0);
        for (char c : s1) ++s1Count[c - 'a'];

        int windowSize = s1.length();
        for (int i = 0; i < windowSize; ++i) {
            ++s2Count[s2[i] - 'a'];
        }

        if (s1Count == s2Count) return true;

        for (int i = windowSize; i < s2.length(); ++i) {
            ++s2Count[s2[i] - 'a'];
            --s2Count[s2[i - windowSize] - 'a'];

            if (s1Count == s2Count) return true;
        }
        return false;
    }
};
