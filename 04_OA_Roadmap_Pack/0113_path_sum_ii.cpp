// Problem: 113. Path Sum II
// Link: https://leetcode.com/problems/path-sum-ii/
// Difficulty: Medium
// Time Complexity: O(n^2) worst case (O(n) average)
// Space Complexity: O(h) recursion stack

#include <vector>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
private:
    void dfs(TreeNode* node, int remainingSum, std::vector<int>& currentPath,
             std::vector<std::vector<int>>& result) {
        if (!node) return;

        currentPath.push_back(node->val);

        if (!node->left && !node->right && remainingSum == node->val) {
            result.push_back(currentPath);
        } else {
            dfs(node->left, remainingSum - node->val, currentPath, result);
            dfs(node->right, remainingSum - node->val, currentPath, result);
        }

        currentPath.pop_back();
    }

public:
    std::vector<std::vector<int>> pathSum(TreeNode* root, int targetSum) {
        std::vector<std::vector<int>> result;
        std::vector<int> currentPath;
        dfs(root, targetSum, currentPath, result);
        return result;
    }
};
