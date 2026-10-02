// Problem: 51. N-Queens
// Link: https://leetcode.com/problems/n-queens/
// Difficulty: Hard
// Time Complexity: O(N!)
// Space Complexity: O(N)

#include <vector>
#include <string>

class Solution {
public:
    std::vector<std::vector<std::string>> solveNQueens(int n) {
        std::vector<std::vector<std::string>> result;
        std::vector<std::string> board(n, std::string(n, '.'));
        std::vector<bool> cols(n, false);
        std::vector<bool> diag1(2 * n, false);
        std::vector<bool> diag2(2 * n, false);

        backtrack(0, n, board, cols, diag1, diag2, result);
        return result;
    }

private:
    void backtrack(int row, int n, std::vector<std::string>& board,
                   std::vector<bool>& cols, std::vector<bool>& diag1, std::vector<bool>& diag2,
                   std::vector<std::vector<std::string>>& result) {
        if (row == n) {
            result.push_back(board);
            return;
        }

        for (int col = 0; col < n; ++col) {
            int d1 = row - col + n;
            int d2 = row + col;

            if (cols[col] || diag1[d1] || diag2[d2]) continue;

            board[row][col] = 'Q';
            cols[col] = diag1[d1] = diag2[d2] = true;

            backtrack(row + 1, n, board, cols, diag1, diag2, result);

            board[row][col] = '.';
            cols[col] = diag1[d1] = diag2[d2] = false;
        }
    }
};
