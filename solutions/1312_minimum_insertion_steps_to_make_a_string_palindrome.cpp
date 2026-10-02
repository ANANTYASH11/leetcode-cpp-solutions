// Problem: 1312. Minimum Insertion Steps to Make a String Palindrome
// Link: https://leetcode.com/problems/minimum-insertion-steps-to-make-a-string-palindrome/
// Difficulty: Hard
// Time Complexity: O(n^2)
// Space Complexity: O(n) auxiliary space

#include <string>
#include <vector>
#include <algorithm>

class Solution {
public:
    int minInsertions(std::string s) {
        int n = s.length();
        std::string rev = s;
        std::reverse(rev.begin(), rev.end());

        // Find Longest Common Subsequence of s and reverse(s)
        std::vector<int> dp(n + 1, 0);

        for (int i = 1; i <= n; ++i) {
            int prev = 0;
            for (int j = 1; j <= n; ++j) {
                int temp = dp[j];
                if (s[i - 1] == rev[j - 1]) {
                    dp[j] = prev + 1;
                } else {
                    dp[j] = std::max(dp[j], dp[j - 1]);
                }
                prev = temp;
            }
        }

        return n - dp[n];
    }
};
