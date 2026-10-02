// Problem: 221. Maximal Square
// Link: https://leetcode.com/problems/maximal-square/
// Difficulty: Medium
// Time Complexity: O(m * n)
// Space Complexity: O(n) auxiliary space

#include <vector>
#include <algorithm>

class Solution {
public:
    int maximalSquare(std::vector<std::vector<char>>& matrix) {
        if (matrix.empty() || matrix[0].empty()) return 0;
        int m = matrix.size();
        int n = matrix[0].size();
        std::vector<int> dp(n + 1, 0);
        int maxSide = 0;
        int prev = 0;

        for (int i = 1; i <= m; ++i) {
            for (int j = 1; j <= n; ++j) {
                int temp = dp[j];
                if (matrix[i - 1][j - 1] == '1') {
                    dp[j] = std::min({dp[j], dp[j - 1], prev}) + 1;
                    maxSide = std::max(maxSide, dp[j]);
                } else {
                    dp[j] = 0;
                }
                prev = temp;
            }
        }

        return maxSide * maxSide;
    }
};
