// Problem: 879. Profitable Schemes
// Link: https://leetcode.com/problems/profitable-schemes/
// Difficulty: Hard
// Time Complexity: O(m * n * minProfit) where m is number of crimes
// Space Complexity: O(n * minProfit)

#include <vector>
#include <algorithm>

class Solution {
public:
    int profitableSchemes(int n, int minProfit, std::vector<int>& group, std::vector<int>& profit) {
        const int MOD = 1e9 + 7;
        int numCrimes = group.size();

        std::vector<std::vector<int>> dp(n + 1, std::vector<int>(minProfit + 1, 0));
        for (int i = 0; i <= n; ++i) {
            dp[i][0] = 1;
        }

        for (int i = 0; i < numCrimes; ++i) {
            int g = group[i];
            int p = profit[i];

            for (int members = n; members >= g; --members) {
                for (int prof = minProfit; prof >= 0; --prof) {
                    int nextProf = std::min(minProfit, prof + p);
                    dp[members][nextProf] = (dp[members][nextProf] + dp[members - g][prof]) % MOD;
                }
            }
        }

        return dp[n][minProfit];
    }
};
