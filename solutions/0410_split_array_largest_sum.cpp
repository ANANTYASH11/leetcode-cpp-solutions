// Problem: 410. Split Array Largest Sum
// Link: https://leetcode.com/problems/split-array-largest-sum/
// Difficulty: Hard
// Time Complexity: O(n log(sum - max))
// Space Complexity: O(1)

#include <vector>
#include <numeric>
#include <algorithm>

class Solution {
private:
    bool canSplit(const std::vector<int>& nums, int k, long long maxSum) {
        int count = 1;
        long long currentSum = 0;

        for (int num : nums) {
            if (currentSum + num > maxSum) {
                ++count;
                currentSum = num;
                if (count > k) return false;
            } else {
                currentSum += num;
            }
        }
        return true;
    }

public:
    int splitArray(std::vector<int>& nums, int k) {
        long long left = *std::max_element(nums.begin(), nums.end());
        long long right = std::accumulate(nums.begin(), nums.end(), 0LL);
        int result = right;

        while (left <= right) {
            long long mid = left + (right - left) / 2;
            if (canSplit(nums, k, mid)) {
                result = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        return result;
    }
};
