// Problem: 862. Shortest Subarray with Sum at Least K
// Link: https://leetcode.com/problems/shortest-subarray-with-sum-at-least-k/
// Difficulty: Hard
// Time Complexity: O(n)
// Space Complexity: O(n)

#include <vector>
#include <deque>
#include <algorithm>
#include <climits>

class Solution {
public:
    int shortestSubarray(std::vector<int>& nums, int k) {
        int n = nums.size();
        std::vector<long long> prefix(n + 1, 0);
        for (int i = 0; i < n; ++i) {
            prefix[i + 1] = prefix[i] + nums[i];
        }

        std::deque<int> dq;
        int minLen = INT_MAX;

        for (int i = 0; i <= n; ++i) {
            while (!dq.empty() && prefix[i] - prefix[dq.front()] >= k) {
                minLen = std::min(minLen, i - dq.front());
                dq.pop_front();
            }

            while (!dq.empty() && prefix[i] <= prefix[dq.back()]) {
                dq.pop_back();
            }

            dq.push_back(i);
        }

        return minLen == INT_MAX ? -1 : minLen;
    }
};
