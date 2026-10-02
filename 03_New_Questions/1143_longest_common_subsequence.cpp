// Problem: 1143. Longest Common Subsequence
// Link: https://leetcode.com/problems/longest-common-subsequence/
// Difficulty: Medium
// Time Complexity: O(m * n)
// Space Complexity: O(min(m, n))

#include <string>
#include <vector>
#include <algorithm>

class Solution {
public:
    int longestCommonSubsequence(std::string text1, std::string text2) {
        if (text1.length() < text2.length()) {
            std::swap(text1, text2);
        }

        int m = text1.length();
        int n = text2.length();
        std::vector<int> prev(n + 1, 0), curr(n + 1, 0);

        for (int i = 1; i <= m; ++i) {
            for (int j = 1; j <= n; ++j) {
                if (text1[i - 1] == text2[j - 1]) {
                    curr[j] = 1 + prev[j - 1];
                } else {
                    curr[j] = std::max(prev[j], curr[j - 1]);
                }
            }
            prev = curr;
        }
        return prev[n];
    }
};\n