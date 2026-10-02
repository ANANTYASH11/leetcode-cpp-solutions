// Problem: 16. 3Sum Closest
// Link: https://leetcode.com/problems/3sum-closest/
// Difficulty: Medium
// Time Complexity: O(n^2)
// Space Complexity: O(1) auxiliary

#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>

class Solution {
public:
    int threeSumClosest(std::vector<int>& nums, int target) {
        std::sort(nums.begin(), nums.end());
        int closestSum = nums[0] + nums[1] + nums[2];
        int n = nums.size();

        for (int i = 0; i < n - 2; ++i) {
            int left = i + 1;
            int right = n - 1;

            while (left < right) {
                int currentSum = nums[i] + nums[left] + nums[right];
                if (std::abs(currentSum - target) < std::abs(closestSum - target)) {
                    closestSum = currentSum;
                }

                if (currentSum < target) {
                    ++left;
                } else if (currentSum > target) {
                    --right;
                } else {
                    return target;
                }
            }
        }
        return closestSum;
    }
};
