// Problem: 518. Coin Change II
// Link: https://leetcode.com/problems/coin-change-ii/
// Difficulty: Medium
// Time Complexity: O(n * amount)
// Space Complexity: O(amount)

#include <vector>

class Solution {
public:
    int change(int amount, std::vector<int>& coins) {
        std::vector<unsigned long long> dp(amount + 1, 0);
        dp[0] = 1;

        for (int coin : coins) {
            for (int j = coin; j <= amount; ++j) {
                dp[j] += dp[j - coin];
            }
        }

        return (int)dp[amount];
    }
};
