// Problem: 1254. Number of Closed Islands
// Link: https://leetcode.com/problems/number-of-closed-islands/
// Difficulty: Medium
// Time Complexity: O(m * n)
// Space Complexity: O(m * n)

#include <vector>

class Solution {
private:
    bool dfs(std::vector<std::vector<int>>& grid, int r, int c) {
        if (r < 0 || r >= grid.size() || c < 0 || c >= grid[0].size()) {
            return false;
        }
        if (grid[r][c] == 1) {
            return true;
        }

        grid[r][c] = 1;

        bool d1 = dfs(grid, r + 1, c);
        bool d2 = dfs(grid, r - 1, c);
        bool d3 = dfs(grid, r, c + 1);
        bool d4 = dfs(grid, r, c - 1);

        return d1 && d2 && d3 && d4;
    }

public:
    int closedIsland(std::vector<std::vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int closedCount = 0;

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] == 0) {
                    if (dfs(grid, i, j)) {
                        ++closedCount;
                    }
                }
            }
        }

        return closedCount;
    }
};
