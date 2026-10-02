// Problem: 494. Target Sum
// Link: https://leetcode.com/problems/target-sum/
// Difficulty: Medium
// Time Complexity: O(n * subsetSum)
// Space Complexity: O(subsetSum)

#include <vector>
#include <numeric>
#include <cmath>

class Solution {
public:
    int findTargetSumWays(std::vector<int>& nums, int target) {
        int totalSum = std::accumulate(nums.begin(), nums.end(), 0);
        if (std::abs(target) > totalSum || (totalSum + target) % 2 != 0) {
            return 0;
        }

        int subsetSum = (totalSum + target) / 2;
        std::vector<int> dp(subsetSum + 1, 0);
        dp[0] = 1;

        for (int num : nums) {
            for (int j = subsetSum; j >= num; --j) {
                dp[j] += dp[j - num];
            }
        }

        return dp[subsetSum];
    }
};
