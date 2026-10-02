// Problem: 1109. Corporate Flight Bookings
// Link: https://leetcode.com/problems/corporate-flight-bookings/
// Difficulty: Medium
// Time Complexity: O(n + bookings.size())
// Space Complexity: O(1) auxiliary space (excluding result)

#include <vector>

class Solution {
public:
    std::vector<int> corpFlightBookings(std::vector<std::vector<int>>& bookings, int n) {
        std::vector<int> diff(n, 0);

        for (const auto& b : bookings) {
            int first = b[0] - 1;
            int last = b[1] - 1;
            int seats = b[2];

            diff[first] += seats;
            if (last + 1 < n) {
                diff[last + 1] -= seats;
            }
        }

        for (int i = 1; i < n; ++i) {
            diff[i] += diff[i - 1];
        }

        return diff;
    }
};
