// Problem: 28. Find the Index of the First Occurrence in a String
// Link: https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/
// Difficulty: Easy
// Time Complexity: O(n * m)
// Space Complexity: O(1)

#include <string>

class Solution {
public:
    int strStr(std::string haystack, std::string needle) {
        if (needle.empty()) return 0;
        int hLen = haystack.length();
        int nLen = needle.length();

        if (nLen > hLen) return -1;

        for (int i = 0; i <= hLen - nLen; ++i) {
            if (haystack.substr(i, nLen) == needle) {
                return i;
            }
        }
        return -1;
    }
};
