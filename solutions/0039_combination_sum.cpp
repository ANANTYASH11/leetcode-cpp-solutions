// Problem: 39. Combination Sum
// Link: https://leetcode.com/problems/combination-sum/
// Difficulty: Medium
// Time Complexity: O(2^(target / min(candidates)))
// Space Complexity: O(target / min(candidates)) recursion depth

#include <vector>

class Solution {
public:
    std::vector<std::vector<int>> combinationSum(std::vector<int>& candidates, int target) {
        std::vector<std::vector<int>> result;
        std::vector<int> current;
        backtrack(candidates, target, 0, current, result);
        return result;
    }

private:
    void backtrack(const std::vector<int>& candidates, int remaining, int start,
                   std::vector<int>& current, std::vector<std::vector<int>>& result) {
        if (remaining == 0) {
            result.push_back(current);
            return;
        }

        for (int i = start; i < candidates.size(); ++i) {
            if (candidates[i] <= remaining) {
                current.push_back(candidates[i]);
                backtrack(candidates, remaining - candidates[i], i, current, result);
                current.pop_back();
            }
        }
    }
};
