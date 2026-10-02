// Problem: 973. K Closest Points to Origin
// Link: https://leetcode.com/problems/k-closest-points-to-origin/
// Difficulty: Medium
// Time Complexity: O(n log k) via Max-Heap
// Space Complexity: O(k)

#include <vector>
#include <queue>

class Solution {
public:
    std::vector<std::vector<int>> kClosest(std::vector<std::vector<int>>& points, int k) {
        // Max-heap storing pairs of (squared distance, point index)
        auto cmp = [](const std::pair<int, int>& a, const std::pair<int, int>& b) {
            return a.first < b.first;
        };
        std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, decltype(cmp)> maxHeap(cmp);

        for (int i = 0; i < points.size(); ++i) {
            int dist = points[i][0] * points[i][0] + points[i][1] * points[i][1];
            maxHeap.push({dist, i});
            if (maxHeap.size() > k) {
                maxHeap.pop();
            }
        }

        std::vector<std::vector<int>> result;
        result.reserve(k);
        while (!maxHeap.empty()) {
            result.push_back(points[maxHeap.top().second]);
            maxHeap.pop();
        }
        return result;
    }
};
