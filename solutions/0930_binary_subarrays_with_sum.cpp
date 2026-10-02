// Problem: 930. Binary Subarrays With Sum
// Link: https://leetcode.com/problems/binary-subarrays-with-sum/
// Difficulty: Medium
// Time Complexity: O(n)
// Space Complexity: O(1) auxiliary space

#include <vector>

class Solution {
private:
    int atMost(const std::vector<int>& nums, int goal) {
        if (goal < 0) return 0;
        int left = 0, currentSum = 0, count = 0;

        for (int right = 0; right < nums.size(); ++right) {
            currentSum += nums[right];
            while (currentSum > goal) {
                currentSum -= nums[left++];
            }
            count += (right - left + 1);
        }

        return count;
    }

public:
    int numSubarraysWithSum(std::vector<int>& nums, int goal) {
        return atMost(nums, goal) - atMost(nums, goal - 1);
    }
};
