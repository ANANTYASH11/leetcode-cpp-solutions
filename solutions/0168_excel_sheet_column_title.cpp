// Problem: 168. Excel Sheet Column Title
// Link: https://leetcode.com/problems/excel-sheet-column-title/
// Difficulty: Easy
// Time Complexity: O(log n)
// Space Complexity: O(1)

#include <string>
#include <algorithm>

class Solution {
public:
    std::string convertToTitle(int columnNumber) {
        std::string result = "";
        while (columnNumber > 0) {
            --columnNumber;
            result.push_back('A' + (columnNumber % 26));
            columnNumber /= 26;
        }
        std::reverse(result.begin(), result.end());
        return result;
    }
};
