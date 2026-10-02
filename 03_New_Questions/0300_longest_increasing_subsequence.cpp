// Problem: 300. Longest Increasing Subsequence
// Link: https://leetcode.com/problems/longest-increasing-subsequence/
// Difficulty: Medium
// Time Complexity: O(n log n) via Patience Sorting / Binary Search
// Space Complexity: O(n)

#include <vector>
#include <algorithm>

class Solution {
public:
    int lengthOfLIS(std::vector<int>& nums) {
        std::vector<int> tails;

        for (int x : nums) {
            auto it = std::lower_bound(tails.begin(), tails.end(), x);
            if (it == tails.end()) {
                tails.push_back(x);
            } else {
                *it = x;
            }
        }
        return tails.size();
    }
};\n