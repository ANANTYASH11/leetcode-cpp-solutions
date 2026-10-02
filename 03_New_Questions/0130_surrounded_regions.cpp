// Problem: 130. Surrounded Regions
// Link: https://leetcode.com/problems/surrounded-regions/
// Difficulty: Medium
// Time Complexity: O(M * N)
// Space Complexity: O(M * N) recursion stack

#include <vector>

class Solution {
public:
    void solve(std::vector<std::vector<char>>& board) {
        int rows = board.size();
        int cols = board[0].size();

        // 1. Mark boundary-connected 'O's as '#'
        for (int r = 0; r < rows; ++r) {
            dfs(board, r, 0);
            dfs(board, r, cols - 1);
        }
        for (int c = 0; c < cols; ++c) {
            dfs(board, 0, c);
            dfs(board, rows - 1, c);
        }

        // 2. Flip surrounded 'O' -> 'X', restore '#' -> 'O'
        for (int r = 0; r < rows; ++r) {
            for (int c = 0; c < cols; ++c) {
                if (board[r][c] == 'O') board[r][c] = 'X';
                else if (board[r][c] == '#') board[r][c] = 'O';
            }
        }
    }

private:
    void dfs(std::vector<std::vector<char>>& board, int r, int c) {
        if (r < 0 || r >= board.size() || c < 0 || c >= board[0].size() || board[r][c] != 'O') {
            return;
        }
        board[r][c] = '#';
        dfs(board, r + 1, c);
        dfs(board, r - 1, c);
        dfs(board, r, c + 1);
        dfs(board, r, c - 1);
    }
};
