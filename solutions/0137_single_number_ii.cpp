// Problem: 137. Single Number II
// Link: https://leetcode.com/problems/single-number-ii/
// Difficulty: Medium
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <vector>

class Solution {
public:
    int singleNumber(std::vector<int>& nums) {
        int ones = 0;
        int twos = 0;

        for (int num : nums) {
            ones = (ones ^ num) & ~twos;
            twos = (twos ^ num) & ~ones;
        }

        return ones;
    }
};
