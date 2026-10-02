// Problem: 48. Rotate Image
// Link: https://leetcode.com/problems/rotate-image/
// Difficulty: Medium
// Time Complexity: O(n^2)
// Space Complexity: O(1) in-place

#include <vector>
#include <algorithm>

class Solution {
public:
    void rotate(std::vector<std::vector<int>>& matrix) {
        int n = matrix.size();

        // 1. Transpose matrix along main diagonal
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                std::swap(matrix[i][j], matrix[j][i]);
            }
        }

        // 2. Reverse each row
        for (int i = 0; i < n; ++i) {
            std::reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};\n