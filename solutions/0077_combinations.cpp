// Problem: 77. Combinations
// Link: https://leetcode.com/problems/combinations/
// Difficulty: Medium
// Time Complexity: O(C(n, k) * k)
// Space Complexity: O(k) auxiliary recursion stack

#include <vector>

class Solution {
private:
    void backtrack(int start, int n, int k, std::vector<int>& current,
                   std::vector<std::vector<int>>& result) {
        if (current.size() == k) {
            result.push_back(current);
            return;
        }

        for (int i = start; i <= n - (k - (int)current.size()) + 1; ++i) {
            current.push_back(i);
            backtrack(i + 1, n, k, current, result);
            current.pop_back();
        }
    }

public:
    std::vector<std::vector<int>> combine(int n, int k) {
        std::vector<std::vector<int>> result;
        std::vector<int> current;
        backtrack(1, n, k, current, result);
        return result;
    }
};
