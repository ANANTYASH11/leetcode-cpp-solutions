// Problem: 144. Binary Tree Preorder Traversal
// Link: https://leetcode.com/problems/binary-tree-preorder-traversal/
// Difficulty: Easy
// Time Complexity: O(n)
// Space Complexity: O(n)

#include <vector>

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    std::vector<int> preorderTraversal(TreeNode* root) {
        std::vector<int> result;
        preorder(root, result);
        return result;
    }

private:
    void preorder(TreeNode* node, std::vector<int>& result) {
        if (!node) return;
        result.push_back(node->val);
        preorder(node->left, result);
        preorder(node->right, result);
    }
};
