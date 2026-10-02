// Problem: 1482. Minimum Number of Days to Make m Bouquets
// Link: https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/
// Difficulty: Medium
// Time Complexity: O(n log(max_bloom))
// Space Complexity: O(1)

#include <vector>
#include <algorithm>

class Solution {
private:
    bool canMake(const std::vector<int>& bloomDay, int m, int k, int day) {
        int bouquets = 0;
        int flowers = 0;

        for (int b : bloomDay) {
            if (b <= day) {
                ++flowers;
                if (flowers == k) {
                    ++bouquets;
                    flowers = 0;
                }
            } else {
                flowers = 0;
            }
        }

        return bouquets >= m;
    }

public:
    int minDays(std::vector<int>& bloomDay, int m, int k) {
        if ((long long)m * k > bloomDay.size()) {
            return -1;
        }

        int left = *std::min_element(bloomDay.begin(), bloomDay.end());
        int right = *std::max_element(bloomDay.begin(), bloomDay.end());
        int result = right;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (canMake(bloomDay, m, k, mid)) {
                result = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        return result;
    }
};
