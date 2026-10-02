// Problem: 931. Minimum Falling Path Sum
// Link: https://leetcode.com/problems/minimum-falling-path-sum/
// Difficulty: Medium
// Time Complexity: O(n^2)
// Space Complexity: O(n) auxiliary space

#include <vector>
#include <algorithm>
#include <climits>

class Solution {
public:
    int minFallingPathSum(std::vector<std::vector<int>>& matrix) {
        int n = matrix.size();
        std::vector<int> prev = matrix[0];

        for (int r = 1; r < n; ++r) {
            std::vector<int> curr(n);
            for (int c = 0; c < n; ++c) {
                int best = prev[c];
                if (c > 0) best = std::min(best, prev[c - 1]);
                if (c + 1 < n) best = std::min(best, prev[c + 1]);
                curr[c] = matrix[r][c] + best;
            }
            prev = std::move(curr);
        }

        return *std::min_element(prev.begin(), prev.end());
    }
};
