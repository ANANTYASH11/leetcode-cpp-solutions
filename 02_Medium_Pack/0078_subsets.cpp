// Problem: 78. Subsets
// Link: https://leetcode.com/problems/subsets/
// Difficulty: Medium
// Time Complexity: O(n * 2^n)
// Space Complexity: O(n)

#include <vector>

class Solution {
public:
    std::vector<std::vector<int>> subsets(std::vector<int>& nums) {
        std::vector<std::vector<int>> result;
        std::vector<int> current;
        backtrack(nums, 0, current, result);
        return result;
    }

private:
    void backtrack(const std::vector<int>& nums, int index, std::vector<int>& current,
                   std::vector<std::vector<int>>& result) {
        result.push_back(current);

        for (int i = index; i < nums.size(); ++i) {
            current.push_back(nums[i]);
            backtrack(nums, i + 1, current, result);
            current.pop_back();
        }
    }
};\n