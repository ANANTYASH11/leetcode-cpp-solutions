// Problem: 136. Single Number
// Link: https://leetcode.com/problems/single-number/
// Difficulty: Easy
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <vector>

class Solution {
public:
    int singleNumber(std::vector<int>& nums) {
        int result = 0;
        for (int num : nums) {
            result ^= num;
        }
        return result;
    }
};
