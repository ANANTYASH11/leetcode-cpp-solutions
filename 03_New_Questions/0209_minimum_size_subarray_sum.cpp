// Problem: 209. Minimum Size Subarray Sum
// Link: https://leetcode.com/problems/minimum-size-subarray-sum/
// Difficulty: Medium
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <vector>
#include <algorithm>
#include <climits>

class Solution {
public:
    int minSubArrayLen(int target, std::vector<int>& nums) {
        int left = 0;
        int currentSum = 0;
        int minLen = INT_MAX;

        for (int right = 0; right < nums.size(); ++right) {
            currentSum += nums[right];

            while (currentSum >= target) {
                minLen = std::min(minLen, right - left + 1);
                currentSum -= nums[left++];
            }
        }
        return minLen == INT_MAX ? 0 : minLen;
    }
};
