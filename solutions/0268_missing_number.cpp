// Problem: 268. Missing Number
// Link: https://leetcode.com/problems/missing-number/
// Difficulty: Easy
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <vector>

class Solution {
public:
    int missingNumber(std::vector<int>& nums) {
        int n = static_cast<int>(nums.size());
        int xorSum = n;

        for (int i = 0; i < n; ++i) {
            xorSum ^= i ^ nums[i];
        }

        return xorSum;
    }
};
