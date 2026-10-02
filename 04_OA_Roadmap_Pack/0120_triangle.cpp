// Problem: 120. Triangle
// Link: https://leetcode.com/problems/triangle/
// Difficulty: Medium
// Time Complexity: O(n^2)
// Space Complexity: O(n) auxiliary space

#include <vector>
#include <algorithm>

class Solution {
public:
    int minimumTotal(std::vector<std::vector<int>>& triangle) {
        int n = triangle.size();
        std::vector<int> dp = triangle.back();

        for (int i = n - 2; i >= 0; --i) {
            for (int j = 0; j <= i; ++j) {
                dp[j] = triangle[i][j] + std::min(dp[j], dp[j + 1]);
            }
        }

        return dp[0];
    }
};
