// Problem: 53. Maximum Subarray
// Link: https://leetcode.com/problems/maximum-subarray/
// Difficulty: Medium
// Time Complexity: O(n) via Kadane's Algorithm
// Space Complexity: O(1)

#include <vector>
#include <algorithm>

class Solution {
public:
    int maxSubArray(std::vector<int>& nums) {
        int currentSum = 0;
        int maxSum = nums[0];

        for (int x : nums) {
            currentSum = std::max(x, currentSum + x);
            maxSum = std::max(maxSum, currentSum);
        }
        return maxSum;
    }
};\n