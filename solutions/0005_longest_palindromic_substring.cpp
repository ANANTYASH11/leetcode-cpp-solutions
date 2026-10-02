// Problem: 5. Longest Palindromic Substring
// Link: https://leetcode.com/problems/longest-palindromic-substring/
// Difficulty: Medium
// Time Complexity: O(n^2)
// Space Complexity: O(1)

#include <string>
#include <algorithm>

class Solution {
public:
    std::string longestPalindrome(std::string s) {
        if (s.empty()) return "";
        int start = 0, maxLen = 1;

        for (int i = 0; i < s.length(); ++i) {
            expand(s, i, i, start, maxLen);     // Odd length
            expand(s, i, i + 1, start, maxLen); // Even length
        }
        return s.substr(start, maxLen);
    }

private:
    void expand(const std::string& s, int left, int right, int& start, int& maxLen) {
        while (left >= 0 && right < s.length() && s[left] == s[right]) {
            int currentLen = right - left + 1;
            if (currentLen > maxLen) {
                start = left;
                maxLen = currentLen;
            }
            --left;
            ++right;
        }
    }
};
