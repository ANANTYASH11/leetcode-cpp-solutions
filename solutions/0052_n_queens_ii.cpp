// Problem: 52. N-Queens II
// Link: https://leetcode.com/problems/n-queens-ii/
// Difficulty: Hard
// Time Complexity: O(n!)
// Space Complexity: O(n) auxiliary recursion stack

#include <vector>

class Solution {
private:
    int totalCount = 0;

    void backtrack(int row, int n, std::vector<bool>& cols,
                   std::vector<bool>& diag1, std::vector<bool>& diag2) {
        if (row == n) {
            ++totalCount;
            return;
        }

        for (int col = 0; col < n; ++col) {
            int d1 = row - col + n;
            int d2 = row + col;
            if (cols[col] || diag1[d1] || diag2[d2]) continue;

            cols[col] = true;
            diag1[d1] = true;
            diag2[d2] = true;

            backtrack(row + 1, n, cols, diag1, diag2);

            cols[col] = false;
            diag1[d1] = false;
            diag2[d2] = false;
        }
    }

public:
    int totalNQueens(int n) {
        std::vector<bool> cols(n, false);
        std::vector<bool> diag1(2 * n, false);
        std::vector<bool> diag2(2 * n, false);
        backtrack(0, n, cols, diag1, diag2);
        return totalCount;
    }
};
