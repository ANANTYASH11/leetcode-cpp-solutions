// Problem: 1438. Longest Continuous Subarray With Absolute Diff Less Than or Equal to Limit
// Link: https://leetcode.com/problems/longest-continuous-subarray-with-absolute-diff-less-than-or-equal-to-limit/
// Difficulty: Medium
// Time Complexity: O(n)
// Space Complexity: O(n)

#include <vector>
#include <deque>
#include <algorithm>

class Solution {
public:
    int longestSubarray(std::vector<int>& nums, int limit) {
        std::deque<int> maxDq; // Monotonically decreasing
        std::deque<int> minDq; // Monotonically increasing
        int left = 0;
        int maxLen = 0;

        for (int right = 0; right < nums.size(); ++right) {
            while (!maxDq.empty() && maxDq.back() < nums[right]) {
                maxDq.pop_back();
            }
            while (!minDq.empty() && minDq.back() > nums[right]) {
                minDq.pop_back();
            }

            maxDq.push_back(nums[right]);
            minDq.push_back(nums[right]);

            while (maxDq.front() - minDq.front() > limit) {
                if (maxDq.front() == nums[left]) {
                    maxDq.pop_front();
                }
                if (minDq.front() == nums[left]) {
                    minDq.pop_front();
                }
                ++left;
            }

            maxLen = std::max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};
