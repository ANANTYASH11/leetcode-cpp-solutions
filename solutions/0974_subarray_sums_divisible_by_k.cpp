// Problem: 974. Subarray Sums Divisible by K
// Link: https://leetcode.com/problems/subarray-sums-divisible-by-k/
// Difficulty: Medium
// Time Complexity: O(n)
// Space Complexity: O(k)

#include <vector>

class Solution {
public:
    int subarraysDivByK(std::vector<int>& nums, int k) {
        std::vector<int> remainderCount(k, 0);
        remainderCount[0] = 1;
        int runningSum = 0;
        int count = 0;

        for (int num : nums) {
            runningSum += num;
            int rem = ((runningSum % k) + k) % k;
            count += remainderCount[rem];
            ++remainderCount[rem];
        }

        return count;
    }
};
