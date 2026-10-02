// Problem: 252. Meeting Rooms
// Link: https://leetcode.com/problems/meeting-rooms/
// Difficulty: Easy
// Time Complexity: O(n log n)
// Space Complexity: O(1) auxiliary space

#include <vector>
#include <algorithm>

class Solution {
public:
    bool canAttendMeetings(std::vector<std::vector<int>>& intervals) {
        if (intervals.empty()) return true;

        std::sort(intervals.begin(), intervals.end(),
                  [](const std::vector<int>& a, const std::vector<int>& b) {
                      return a[0] < b[0];
                  });

        for (size_t i = 1; i < intervals.size(); ++i) {
            if (intervals[i][0] < intervals[i - 1][1]) {
                return false;
            }
        }

        return true;
    }
};
