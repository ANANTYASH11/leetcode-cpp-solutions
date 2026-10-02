// Problem: 1499. Max Value of Equation
// Link: https://leetcode.com/problems/max-value-of-equation/
// Difficulty: Hard
// Time Complexity: O(n)
// Space Complexity: O(n)

#include <vector>
#include <deque>
#include <climits>
#include <algorithm>

class Solution {
public:
    int findMaxValueOfEquation(std::vector<std::vector<int>>& points, int k) {
        std::deque<std::pair<int, int>> dq; // stores pair: (y - x, x)
        int maxVal = INT_MIN;

        for (const auto& point : points) {
            int x = point[0];
            int y = point[1];

            while (!dq.empty() && x - dq.front().second > k) {
                dq.pop_front();
            }

            if (!dq.empty()) {
                maxVal = std::max(maxVal, y + x + dq.front().first);
            }

            while (!dq.empty() && dq.back().first <= y - x) {
                dq.pop_back();
            }

            dq.push_back({y - x, x});
        }

        return maxVal;
    }
};
