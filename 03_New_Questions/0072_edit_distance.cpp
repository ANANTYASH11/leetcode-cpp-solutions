// Problem: 72. Edit Distance
// Link: https://leetcode.com/problems/edit-distance/
// Difficulty: Medium
// Time Complexity: O(m * n)
// Space Complexity: O(n)

#include <string>
#include <vector>
#include <algorithm>

class Solution {
public:
    int minDistance(std::string word1, std::string word2) {
        int m = word1.length();
        int n = word2.length();
        std::vector<int> dp(n + 1);

        for (int j = 0; j <= n; ++j) dp[j] = j;

        for (int i = 1; i <= m; ++i) {
            int prevDiagonal = dp[0];
            dp[0] = i;

            for (int j = 1; j <= n; ++j) {
                int temp = dp[j];
                if (word1[i - 1] == word2[j - 1]) {
                    dp[j] = prevDiagonal;
                } else {
                    dp[j] = 1 + std::min({prevDiagonal, dp[j], dp[j - 1]});
                }
                prevDiagonal = temp;
            }
        }
        return dp[n];
    }
};
