// Problem: 283. Move Zeroes
// Link: https://leetcode.com/problems/move-zeroes/
// Difficulty: Easy
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <vector>
#include <utility>

class Solution {
public:
    void moveZeroes(std::vector<int>& nums) {
        int insertPos = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] != 0) {
                std::swap(nums[insertPos++], nums[i]);
            }
        }
    }
};
