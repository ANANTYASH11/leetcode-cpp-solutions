// Problem: 583. Delete Operation for Two Strings
// Link: https://leetcode.com/problems/delete-operation-for-two-strings/
// Difficulty: Medium
// Time Complexity: O(m * n)
// Space Complexity: O(n) auxiliary space

#include <string>
#include <vector>
#include <algorithm>

class Solution {
public:
    int minDistance(std::string word1, std::string word2) {
        int m = word1.length();
        int n = word2.length();
        std::vector<int> dp(n + 1, 0);

        for (int i = 1; i <= m; ++i) {
            int prev = 0;
            for (int j = 1; j <= n; ++j) {
                int temp = dp[j];
                if (word1[i - 1] == word2[j - 1]) {
                    dp[j] = prev + 1;
                } else {
                    dp[j] = std::max(dp[j], dp[j - 1]);
                }
                prev = temp;
            }
        }

        int lcs = dp[n];
        return (m - lcs) + (n - lcs);
    }
};
