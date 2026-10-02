// Problem: 1696. Jump Game VI
// Link: https://leetcode.com/problems/jump-game-vi/
// Difficulty: Medium
// Time Complexity: O(n)
// Space Complexity: O(k)

#include <vector>
#include <deque>

class Solution {
public:
    int maxResult(std::vector<int>& nums, int k) {
        int n = nums.size();
        std::vector<int> dp(n);
        dp[0] = nums[0];

        std::deque<int> dq; // stores indices with decreasing dp values
        dq.push_back(0);

        for (int i = 1; i < n; ++i) {
            while (!dq.empty() && dq.front() < i - k) {
                dq.pop_front();
            }

            dp[i] = nums[i] + dp[dq.front()];

            while (!dq.empty() && dp[dq.back()] <= dp[i]) {
                dq.pop_back();
            }
            dq.push_back(i);
        }

        return dp[n - 1];
    }
};
