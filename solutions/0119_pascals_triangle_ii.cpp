// Problem: 119. Pascal's Triangle II
// Link: https://leetcode.com/problems/pascals-triangle-ii/
// Difficulty: Easy
// Time Complexity: O(rowIndex^2)
// Space Complexity: O(rowIndex) auxiliary

#include <vector>

class Solution {
public:
    std::vector<int> getRow(int rowIndex) {
        std::vector<int> row(rowIndex + 1, 0);
        row[0] = 1;

        for (int i = 1; i <= rowIndex; ++i) {
            for (int j = i; j >= 1; --j) {
                row[j] += row[j - 1];
            }
        }

        return row;
    }
};
