// Problem: 115. Distinct Subsequences
// Link: https://leetcode.com/problems/distinct-subsequences/
// Difficulty: Hard
// Time Complexity: O(m * n)
// Space Complexity: O(n) auxiliary space

#include <string>
#include <vector>

class Solution {
public:
    int numDistinct(std::string s, std::string t) {
        int m = s.length();
        int n = t.length();
        if (m < n) return 0;

        // Using unsigned long long to prevent integer overflow during intermediate steps
        std::vector<unsigned long long> dp(n + 1, 0);
        dp[0] = 1;

        for (int i = 1; i <= m; ++i) {
            for (int j = n; j >= 1; --j) {
                if (s[i - 1] == t[j - 1]) {
                    dp[j] += dp[j - 1];
                }
            }
        }

        return dp[n];
    }
};
