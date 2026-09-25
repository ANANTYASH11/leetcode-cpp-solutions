// Problem: 171. Excel Sheet Column Number
// Link: https://leetcode.com/problems/excel-sheet-column-number/
// Difficulty: Easy
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <string>

class Solution {
public:
    int titleToNumber(std::string columnTitle) {
        int result = 0;
        for (char c : columnTitle) {
            result = result * 26 + (c - 'A' + 1);
        }
        return result;
    }
};
