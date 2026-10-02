// Problem: 74. Search a 2D Matrix
// Link: https://leetcode.com/problems/search-a-2d-matrix/
// Difficulty: Medium
// Time Complexity: O(log(m * n))
// Space Complexity: O(1)

#include <vector>

class Solution {
public:
    bool searchMatrix(std::vector<std::vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty()) return false;
        int m = matrix.size();
        int n = matrix[0].size();
        int low = 0, high = m * n - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            int r = mid / n;
            int c = mid % n;

            if (matrix[r][c] == target) return true;
            else if (matrix[r][c] < target) low = mid + 1;
            else high = mid - 1;
        }
        return false;
    }
};\n