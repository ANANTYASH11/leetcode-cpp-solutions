// Problem: 1893. Check if All the Integers in a Range Are Covered
// Link: https://leetcode.com/problems/check-if-all-the-integers-in-a-range-are-covered/
// Difficulty: Easy
// Time Complexity: O(ranges.size() + right)
// Space Complexity: O(1) auxiliary space (fixed 52 size)

#include <vector>

class Solution {
public:
    bool isCovered(std::vector<std::vector<int>>& ranges, int left, int right) {
        std::vector<int> diff(52, 0);

        for (const auto& r : ranges) {
            diff[r[0]]++;
            diff[r[1] + 1]--;
        }

        int coverage = 0;
        for (int i = 1; i <= right; ++i) {
            coverage += diff[i];
            if (i >= left && coverage <= 0) {
                return false;
            }
        }

        return true;
    }
};
