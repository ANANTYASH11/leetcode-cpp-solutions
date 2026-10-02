// Problem: 253. Meeting Rooms II
// Link: https://leetcode.com/problems/meeting-rooms-ii/
// Difficulty: Medium
// Time Complexity: O(n log n)
// Space Complexity: O(n)

#include <vector>
#include <queue>
#include <algorithm>

class Solution {
public:
    int minMeetingRooms(std::vector<std::vector<int>>& intervals) {
        if (intervals.empty()) return 0;

        std::sort(intervals.begin(), intervals.end(),
                  [](const std::vector<int>& a, const std::vector<int>& b) {
                      return a[0] < b[0];
                  });

        // Min-heap tracking the end times of active meetings
        std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;
        minHeap.push(intervals[0][1]);

        for (size_t i = 1; i < intervals.size(); ++i) {
            if (intervals[i][0] >= minHeap.top()) {
                minHeap.pop();
            }
            minHeap.push(intervals[i][1]);
        }

        return minHeap.size();
    }
};
