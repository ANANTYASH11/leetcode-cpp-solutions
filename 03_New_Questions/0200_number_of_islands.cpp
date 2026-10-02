// Problem: 200. Number of Islands
// Link: https://leetcode.com/problems/number-of-islands/
// Difficulty: Medium
// Time Complexity: O(M * N)
// Space Complexity: O(M * N) worst case recursion depth

#include <vector>

class Solution {
public:
    int numIslands(std::vector<std::vector<char>>& grid) {
        int islands = 0;
        int rows = grid.size();
        int cols = grid[0].size();

        for (int r = 0; r < rows; ++r) {
            for (int c = 0; c < cols; ++c) {
                if (grid[r][c] == '1') {
                    ++islands;
                    dfs(grid, r, c);
                }
            }
        }
        return islands;
    }

private:
    void dfs(std::vector<std::vector<char>>& grid, int r, int c) {
        if (r < 0 || r >= grid.size() || c < 0 || c >= grid[0].size() || grid[r][c] != '1') {
            return;
        }

        grid[r][c] = '0'; // Sink the land in-place
        dfs(grid, r + 1, c);
        dfs(grid, r - 1, c);
        dfs(grid, r, c + 1);
        dfs(grid, r, c - 1);
    }
};
