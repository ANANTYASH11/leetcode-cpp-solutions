// Problem: 56. Merge Intervals
// Link: https://leetcode.com/problems/merge-intervals/
// Difficulty: Medium
// Time Complexity: O(n log n)
// Space Complexity: O(log n) sort auxiliary

#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<std::vector<int>> merge(std::vector<std::vector<int>>& intervals) {
        if (intervals.empty()) return {};

        std::sort(intervals.begin(), intervals.end(), [](const auto& a, const auto& b) {
            return a[0] < b[0];
        });

        std::vector<std::vector<int>> merged;
        merged.push_back(intervals[0]);

        for (int i = 1; i < intervals.size(); ++i) {
            auto& last = merged.back();
            if (intervals[i][0] <= last[1]) {
                last[1] = std::max(last[1], intervals[i][1]); // Overlap merge
            } else {
                merged.push_back(intervals[i]);
            }
        }
        return merged;
    }
};
