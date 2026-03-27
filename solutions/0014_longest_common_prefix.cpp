// Problem: 14. Longest Common Prefix
// Link: https://leetcode.com/problems/longest-common-prefix/
// Difficulty: Easy
// Time Complexity: O(S) where S is the sum of all characters in all strings
// Space Complexity: O(1)

#include <vector>
#include <string>

class Solution {
public:
    std::string longestCommonPrefix(std::vector<std::string>& strs) {
        if (strs.empty()) return "";

        std::string prefix = strs[0];
        for (int i = 1; i < strs.size(); ++i) {
            while (strs[i].find(prefix) != 0) {
                prefix = prefix.substr(0, prefix.length() - 1);
                if (prefix.empty()) return "";
            }
        }
        return prefix;
    }
};
