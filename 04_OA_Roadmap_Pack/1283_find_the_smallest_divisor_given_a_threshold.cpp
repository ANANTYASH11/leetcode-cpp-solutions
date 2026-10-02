// Problem: 1283. Find the Smallest Divisor Given a Threshold
// Link: https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/
// Difficulty: Medium
// Time Complexity: O(n log(max_val))
// Space Complexity: O(1)

#include <vector>
#include <algorithm>

class Solution {
private:
    bool isValid(const std::vector<int>& nums, int divisor, int threshold) {
        int sum = 0;
        for (int num : nums) {
            sum += (num + divisor - 1) / divisor;
            if (sum > threshold) return false;
        }
        return true;
    }

public:
    int smallestDivisor(std::vector<int>& nums, int threshold) {
        int left = 1;
        int right = *std::max_element(nums.begin(), nums.end());
        int result = right;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (isValid(nums, mid, threshold)) {
                result = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        return result;
    }
};
