// Problem: 523. Continuous Subarray Sum
// Link: https://leetcode.com/problems/continuous-subarray-sum/
// Difficulty: Medium
// Time Complexity: O(n)
// Space Complexity: O(min(n, k))

#include <vector>
#include <unordered_map>

class Solution {
public:
    bool checkSubarraySum(std::vector<int>& nums, int k) {
        std::unordered_map<int, int> remainderMap;
        remainderMap[0] = -1;
        int runningSum = 0;

        for (int i = 0; i < nums.size(); ++i) {
            runningSum += nums[i];
            int rem = runningSum % k;

            if (remainderMap.count(rem)) {
                if (i - remainderMap[rem] >= 2) {
                    return true;
                }
            } else {
                remainderMap[rem] = i;
            }
        }

        return false;
    }
};
