// Problem: 34. Find First and Last Position of Element in Sorted Array
// Link: https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
// Difficulty: Medium
// Time Complexity: O(log n)
// Space Complexity: O(1)

#include <vector>

class Solution {
private:
    int findBound(const std::vector<int>& nums, int target, bool isFirst) {
        int left = 0, right = nums.size() - 1;
        int bound = -1;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) {
                bound = mid;
                if (isFirst) {
                    right = mid - 1;
                } else {
                    left = mid + 1;
                }
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return bound;
    }

public:
    std::vector<int> searchRange(std::vector<int>& nums, int target) {
        int first = findBound(nums, target, true);
        if (first == -1) return {-1, -1};
        int last = findBound(nums, target, false);
        return {first, last};
    }
};
