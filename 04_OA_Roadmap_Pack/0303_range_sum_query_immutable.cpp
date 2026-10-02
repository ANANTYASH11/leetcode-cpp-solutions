// Problem: 303. Range Sum Query - Immutable
// Link: https://leetcode.com/problems/range-sum-query-immutable/
// Difficulty: Easy
// Time Complexity: O(1) query, O(n) initialization
// Space Complexity: O(n)

#include <vector>

class NumArray {
private:
    std::vector<int> prefixSum;

public:
    NumArray(std::vector<int>& nums) {
        prefixSum.resize(nums.size() + 1, 0);
        for (size_t i = 0; i < nums.size(); ++i) {
            prefixSum[i + 1] = prefixSum[i] + nums[i];
        }
    }

    int sumRange(int left, int right) {
        return prefixSum[right + 1] - prefixSum[left];
    }
};
