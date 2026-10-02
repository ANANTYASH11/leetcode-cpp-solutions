// Problem: 198. House Robber
// Link: https://leetcode.com/problems/house-robber/
// Difficulty: Medium
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <vector>
#include <algorithm>

class Solution {
public:
    int rob(std::vector<int>& nums) {
        int prev1 = 0; // Max profit up to house i - 1
        int prev2 = 0; // Max profit up to house i - 2

        for (int num : nums) {
            int current = std::max(prev1, prev2 + num);
            prev2 = prev1;
            prev1 = current;
        }
        return prev1;
    }
};
