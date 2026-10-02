// Problem: 560. Subarray Sum Equals K
// Link: https://leetcode.com/problems/subarray-sum-equals-k/
// Difficulty: Medium
// Time Complexity: O(n)
// Space Complexity: O(n)

#include <vector>
#include <unordered_map>

class Solution {
public:
    int subarraySum(std::vector<int>& nums, int k) {
        std::unordered_map<int, int> prefixSumCount;
        prefixSumCount[0] = 1; // Base case for subarrays starting at index 0

        int runningSum = 0;
        int totalCount = 0;

        for (int num : nums) {
            runningSum += num;
            if (prefixSumCount.count(runningSum - k)) {
                totalCount += prefixSumCount[runningSum - k];
            }
            ++prefixSumCount[runningSum];
        }
        return totalCount;
    }
};\n