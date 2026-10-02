// Problem: 1094. Car Pooling
// Link: https://leetcode.com/problems/car-pooling/
// Difficulty: Medium
// Time Complexity: O(n + 1001)
// Space Complexity: O(1) auxiliary space (fixed size 1001)

#include <vector>

class Solution {
public:
    bool carPooling(std::vector<std::vector<int>>& trips, int capacity) {
        std::vector<int> diff(1001, 0);

        for (const auto& trip : trips) {
            int numPassengers = trip[0];
            int from = trip[1];
            int to = trip[2];

            diff[from] += numPassengers;
            diff[to] -= numPassengers;
        }

        int currentPassengers = 0;
        for (int passengers : diff) {
            currentPassengers += passengers;
            if (currentPassengers > capacity) {
                return false;
            }
        }

        return true;
    }
};
