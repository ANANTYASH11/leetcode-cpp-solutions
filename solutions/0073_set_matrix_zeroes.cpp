// Problem: 73. Set Matrix Zeroes
// Link: https://leetcode.com/problems/set-matrix-zeroes/
// Difficulty: Medium
// Time Complexity: O(M * N)
// Space Complexity: O(1) in-place

#include <vector>

class Solution {
public:
    void setZeroes(std::vector<std::vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        bool firstColZero = false;

        for (int r = 0; r < rows; ++r) {
            if (matrix[r][0] == 0) firstColZero = true;
            for (int c = 1; c < cols; ++c) {
                if (matrix[r][c] == 0) {
                    matrix[r][0] = 0;
                    matrix[0][c] = 0;
                }
            }
        }

        for (int r = rows - 1; r >= 0; --r) {
            for (int c = cols - 1; c >= 1; --c) {
                if (matrix[r][0] == 0 || matrix[0][c] == 0) {
                    matrix[r][c] = 0;
                }
            }
            if (firstColZero) matrix[r][0] = 0;
        }
    }
};
