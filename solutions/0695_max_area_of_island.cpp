// Problem: 695. Max Area of Island
// Link: https://leetcode.com/problems/max-area-of-island/
// Difficulty: Medium
// Time Complexity: O(M * N)
// Space Complexity: O(M * N) recursion stack

#include <vector>
#include <algorithm>

class Solution {
public:
    int maxAreaOfIsland(std::vector<std::vector<int>>& grid) {
        int maxArea = 0;
        int rows = grid.size();
        int cols = grid[0].size();

        for (int r = 0; r < rows; ++r) {
            for (int c = 0; c < cols; ++c) {
                if (grid[r][c] == 1) {
                    maxArea = std::max(maxArea, dfs(grid, r, c));
                }
            }
        }
        return maxArea;
    }

private:
    int dfs(std::vector<std::vector<int>>& grid, int r, int c) {
        if (r < 0 || r >= grid.size() || c < 0 || c >= grid[0].size() || grid[r][c] != 1) {
            return 0;
        }

        grid[r][c] = 0; // Sink cell
        return 1 + dfs(grid, r + 1, c) + dfs(grid, r - 1, c) +
                   dfs(grid, r, c + 1) + dfs(grid, r, c - 1);
    }
};\n