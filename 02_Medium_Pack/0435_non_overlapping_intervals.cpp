// Problem: 435. Non-overlapping Intervals
// Link: https://leetcode.com/problems/non-overlapping-intervals/
// Difficulty: Medium
// Time Complexity: O(n log n)
// Space Complexity: O(1) auxiliary

#include <vector>
#include <algorithm>

class Solution {
public:
    int eraseOverlapIntervals(std::vector<std::vector<int>>& intervals) {
        if (intervals.empty()) return 0;

        // Sort ascending by interval end time
        std::sort(intervals.begin(), intervals.end(), [](const auto& a, const auto& b) {
            return a[1] < b[1];
        });

        int removals = 0;
        int prevEnd = intervals[0][1];

        for (int i = 1; i < intervals.size(); ++i) {
            if (intervals[i][0] < prevEnd) {
                ++removals; // Overlap detected, greedily remove the one with larger end time
            } else {
                prevEnd = intervals[i][1];
            }
        }
        return removals;
    }
};\n