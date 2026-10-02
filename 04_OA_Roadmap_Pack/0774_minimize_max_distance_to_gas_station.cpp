// Problem: 774. Minimize Max Distance to Gas Station
// Link: https://leetcode.com/problems/minimize-max-distance-to-gas-station/
// Difficulty: Hard
// Time Complexity: O(n log(max_dist / eps))
// Space Complexity: O(1)

#include <vector>

class Solution {
private:
    bool canAdd(const std::vector<int>& stations, int k, double d) {
        int count = 0;
        for (size_t i = 1; i < stations.size(); ++i) {
            count += (int)((stations[i] - stations[i - 1]) / d);
        }
        return count <= k;
    }

public:
    double minmaxGasDist(std::vector<int>& stations, int k) {
        double left = 1e-6;
        double right = stations.back() - stations.front();

        while (right - left > 1e-6) {
            double mid = left + (right - left) / 2.0;
            if (canAdd(stations, k, mid)) {
                right = mid;
            } else {
                left = mid;
            }
        }

        return left;
    }
};
