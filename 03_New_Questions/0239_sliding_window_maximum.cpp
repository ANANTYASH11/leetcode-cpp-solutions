// Problem: 239. Sliding Window Maximum
// Link: https://leetcode.com/problems/sliding-window-maximum/
// Difficulty: Hard
// Time Complexity: O(n)
// Space Complexity: O(k)

#include <vector>
#include <deque>

class Solution {
public:
    std::vector<int> maxSlidingWindow(std::vector<int>& nums, int k) {
        std::deque<int> dq; // Stores indices of candidate maximums in decreasing order of value
        std::vector<int> result;
        result.reserve(nums.size() - k + 1);

        for (int i = 0; i < nums.size(); ++i) {
            // Remove indices out of current window [i - k + 1, i]
            if (!dq.empty() && dq.front() <= i - k) {
                dq.pop_front();
            }

            // Maintain monotonic decreasing order in deque
            while (!dq.empty() && nums[dq.back()] <= nums[i]) {
                dq.pop_back();
            }

            dq.push_back(i);

            // Record maximum for window once window size reaches k
            if (i >= k - 1) {
                result.push_back(nums[dq.front()]);
            }
        }
        return result;
    }
};\n