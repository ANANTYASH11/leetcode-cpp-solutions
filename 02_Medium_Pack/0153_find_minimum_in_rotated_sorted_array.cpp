// Problem: 153. Find Minimum in Rotated Sorted Array
// Link: https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/
// Difficulty: Medium
// Time Complexity: O(log n)
// Space Complexity: O(1)

#include <vector>

class Solution {
public:
    int findMin(std::vector<int>& nums) {
        int low = 0, high = static_cast<int>(nums.size()) - 1;

        while (low < high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] > nums[high]) {
                // Minimum is strictly in right half
                low = mid + 1;
            } else {
                // Minimum is at mid or in left half
                high = mid;
            }
        }
        return nums[low];
    }
};\n