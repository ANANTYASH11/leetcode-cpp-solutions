// Problem: 417. Pacific Atlantic Water Flow
// Link: https://leetcode.com/problems/pacific-atlantic-water-flow/
// Difficulty: Medium
// Time Complexity: O(M * N)
// Space Complexity: O(M * N)

#include <vector>

class Solution {
public:
    std::vector<std::vector<int>> pacificAtlantic(std::vector<std::vector<int>>& heights) {
        int rows = heights.size();
        int cols = heights[0].size();
        std::vector<std::vector<bool>> pacific(rows, std::vector<bool>(cols, false));
        std::vector<std::vector<bool>> atlantic(rows, std::vector<bool>(cols, false));

        for (int r = 0; r < rows; ++r) {
            dfs(heights, r, 0, pacific, heights[r][0]);
            dfs(heights, r, cols - 1, atlantic, heights[r][cols - 1]);
        }
        for (int c = 0; c < cols; ++c) {
            dfs(heights, 0, c, pacific, heights[0][c]);
            dfs(heights, rows - 1, c, atlantic, heights[rows - 1][c]);
        }

        std::vector<std::vector<int>> result;
        for (int r = 0; r < rows; ++r) {
            for (int c = 0; c < cols; ++c) {
                if (pacific[r][c] && atlantic[r][c]) {
                    result.push_back({r, c});
                }
            }
        }
        return result;
    }

private:
    void dfs(const std::vector<std::vector<int>>& heights, int r, int c,
             std::vector<std::vector<bool>>& ocean, int prevHeight) {
        if (r < 0 || r >= heights.size() || c < 0 || c >= heights[0].size() ||
            ocean[r][c] || heights[r][c] < prevHeight) {
            return;
        }

        ocean[r][c] = true;
        dfs(heights, r + 1, c, ocean, heights[r][c]);
        dfs(heights, r - 1, c, ocean, heights[r][c]);
        dfs(heights, r, c + 1, ocean, heights[r][c]);
        dfs(heights, r, c - 1, ocean, heights[r][c]);
    }
};
