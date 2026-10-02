// Problem: 62. Unique Paths
// Link: https://leetcode.com/problems/unique-paths/
// Difficulty: Medium
// Time Complexity: O(m * n)
// Space Complexity: O(n)

#include <vector>

class Solution {
public:
    int uniquePaths(int m, int n) {
        std::vector<int> dp(n, 1);

        for (int r = 1; r < m; ++r) {
            for (int c = 1; c < n; ++c) {
                dp[c] += dp[c - 1];
            }
        }
        return dp[n - 1];
    }
};\n