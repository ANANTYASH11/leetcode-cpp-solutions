// Problem: 279. Perfect Squares
// Link: https://leetcode.com/problems/perfect-squares/
// Difficulty: Medium
// Time Complexity: O(n * sqrt(n))
// Space Complexity: O(n)

#include <vector>
#include <algorithm>

class Solution {
public:
    int numSquares(int n) {
        std::vector<int> dp(n + 1, n);
        dp[0] = 0;

        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j * j <= i; ++j) {
                dp[i] = std::min(dp[i], dp[i - j * j] + 1);
            }
        }

        return dp[n];
    }
};
