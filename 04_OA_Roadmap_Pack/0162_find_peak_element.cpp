// Problem: 162. Find Peak Element
// Link: https://leetcode.com/problems/find-peak-element/
// Difficulty: Medium
// Time Complexity: O(log n)
// Space Complexity: O(1)

#include <vector>

class Solution {
public:
    int findPeakElement(std::vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;

        while (left < right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] < nums[mid + 1]) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }

        return left;
    }
};
