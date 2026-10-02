// Problem: 90. Subsets II
// Link: https://leetcode.com/problems/subsets-ii/
// Difficulty: Medium
// Time Complexity: O(n * 2^n)
// Space Complexity: O(n)

#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<std::vector<int>> subsetsWithDup(std::vector<int>& nums) {
        std::vector<std::vector<int>> result;
        std::vector<int> current;
        std::sort(nums.begin(), nums.end());
        backtrack(nums, 0, current, result);
        return result;
    }

private:
    void backtrack(const std::vector<int>& nums, int start, std::vector<int>& current,
                   std::vector<std::vector<int>>& result) {
        result.push_back(current);

        for (int i = start; i < nums.size(); ++i) {
            if (i > start && nums[i] == nums[i - 1]) continue; // Skip duplicate branches

            current.push_back(nums[i]);
            backtrack(nums, i + 1, current, result);
            current.pop_back();
        }
    }
};\n