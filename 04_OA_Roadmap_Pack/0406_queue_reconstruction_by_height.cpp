// Problem: 406. Queue Reconstruction by Height
// Link: https://leetcode.com/problems/queue-reconstruction-by-height/
// Difficulty: Medium
// Time Complexity: O(n^2)
// Space Complexity: O(n)

#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<std::vector<int>> reconstructQueue(std::vector<std::vector<int>>& people) {
        // Sort descending by height; if height is equal, sort ascending by k
        std::sort(people.begin(), people.end(),
                  [](const std::vector<int>& a, const std::vector<int>& b) {
                      return a[0] == b[0] ? a[1] < b[1] : a[0] > b[0];
                  });

        std::vector<std::vector<int>> queue;
        for (const auto& p : people) {
            queue.insert(queue.begin() + p[1], p);
        }

        return queue;
    }
};
