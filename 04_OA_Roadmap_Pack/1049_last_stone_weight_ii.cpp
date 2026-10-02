// Problem: 1049. Last Stone Weight II
// Link: https://leetcode.com/problems/last-stone-weight-ii/
// Difficulty: Medium
// Time Complexity: O(n * totalSum)
// Space Complexity: O(totalSum)

#include <vector>
#include <numeric>

class Solution {
public:
    int lastStoneWeightII(std::vector<int>& stones) {
        int totalSum = std::accumulate(stones.begin(), stones.end(), 0);
        int target = totalSum / 2;
        std::vector<bool> dp(target + 1, false);
        dp[0] = true;

        for (int stone : stones) {
            for (int j = target; j >= stone; --j) {
                dp[j] = dp[j] || dp[j - stone];
            }
        }

        for (int j = target; j >= 0; --j) {
            if (dp[j]) {
                return totalSum - 2 * j;
            }
        }

        return 0;
    }
};
