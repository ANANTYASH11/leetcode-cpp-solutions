// Problem: 1011. Capacity To Ship Packages Within D Days
// Link: https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/
// Difficulty: Medium
// Time Complexity: O(n log(sum - max))
// Space Complexity: O(1)

#include <vector>
#include <numeric>
#include <algorithm>

class Solution {
private:
    bool canShip(const std::vector<int>& weights, int days, int capacity) {
        int dayCount = 1;
        int currentLoad = 0;

        for (int w : weights) {
            if (currentLoad + w > capacity) {
                ++dayCount;
                currentLoad = w;
                if (dayCount > days) return false;
            } else {
                currentLoad += w;
            }
        }

        return true;
    }

public:
    int shipWithinDays(std::vector<int>& weights, int days) {
        int left = *std::max_element(weights.begin(), weights.end());
        int right = std::accumulate(weights.begin(), weights.end(), 0);
        int result = right;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (canShip(weights, days, mid)) {
                result = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        return result;
    }
};
