// Problem: 1425. Constrained Subsequence Sum
// Link: https://leetcode.com/problems/constrained-subsequence-sum/
// Difficulty: Hard
// Time Complexity: O(n)
// Space Complexity: O(n)

#include <vector>
#include <deque>
#include <algorithm>

class Solution {
public:
    int constrainedSubsetSum(std::vector<int>& nums, int k) {
        int n = nums.size();
        std::vector<int> dp(n);
        std::deque<int> dq; // stores indices with decreasing dp values
        int maxSum = nums[0];

        for (int i = 0; i < n; ++i) {
            while (!dq.empty() && dq.front() < i - k) {
                dq.pop_front();
            }

            int bestPrev = dq.empty() ? 0 : dp[dq.front()];
            dp[i] = nums[i] + std::max(0, bestPrev);
            maxSum = std::max(maxSum, dp[i]);

            while (!dq.empty() && dp[dq.back()] <= dp[i]) {
                dq.pop_back();
            }
            dq.push_back(i);
        }

        return maxSum;
    }
};
