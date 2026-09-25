// Problem: 190. Reverse Bits
// Link: https://leetcode.com/problems/reverse-bits/
// Difficulty: Easy
// Time Complexity: O(1)
// Space Complexity: O(1)

#include <cstdint>

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t result = 0;
        for (int i = 0; i < 32; ++i) {
            result = (result << 1) | (n & 1);
            n >>= 1;
        }
        return result;
    }
};
