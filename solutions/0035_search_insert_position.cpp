// Problem: 35. Search Insert Position
// Link: https://leetcode.com/problems/search-insert-position/
// Difficulty: Easy
// Time Complexity: O(log n)
// Space Complexity: O(1)

#include <vector>

class Solution {
public:
    int searchInsert(std::vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return left;
    }
};
