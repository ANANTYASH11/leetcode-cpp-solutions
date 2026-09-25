// Problem: 191. Number of 1 Bits
// Link: https://leetcode.com/problems/number-of-1-bits/
// Difficulty: Easy
// Time Complexity: O(k), where k is the number of set bits
// Space Complexity: O(1)

#include <cstdint>

class Solution {
public:
    int hammingWeight(int n) {
        int count = 0;
        unsigned int un = static_cast<unsigned int>(n);
        while (un > 0) {
            un &= (un - 1);
            ++count;
        }
        return count;
    }
};
