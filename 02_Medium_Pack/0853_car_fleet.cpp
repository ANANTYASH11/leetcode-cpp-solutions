// Problem: 853. Car Fleet
// Link: https://leetcode.com/problems/car-fleet/
// Difficulty: Medium
// Time Complexity: O(n log n)
// Space Complexity: O(n)

#include <vector>
#include <algorithm>

class Solution {
public:
    int carFleet(int target, std::vector<int>& position, std::vector<int>& speed) {
        int n = position.size();
        std::vector<std::pair<int, double>> cars(n);

        for (int i = 0; i < n; ++i) {
            cars[i] = {position[i], static_cast<double>(target - position[i]) / speed[i]};
        }

        // Sort descending by starting position
        std::sort(cars.begin(), cars.end(), [](const auto& a, const auto& b) {
            return a.first > b.first;
        });

        int fleets = 0;
        double currentFleetTime = 0.0;

        for (const auto& car : cars) {
            if (car.second > currentFleetTime) {
                ++fleets;
                currentFleetTime = car.second;
            }
        }
        return fleets;
    }
};\n