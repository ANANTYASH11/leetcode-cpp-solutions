// Problem: 145. Binary Tree Postorder Traversal
// Link: https://leetcode.com/problems/binary-tree-postorder-traversal/
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
    std::vector<int> postorderTraversal(TreeNode* root) {
        std::vector<int> result;
        postorder(root, result);
        return result;
    }

private:
    void postorder(TreeNode* node, std::vector<int>& result) {
        if (!node) return;
        postorder(node->left, result);
        postorder(node->right, result);
        result.push_back(node->val);
    }
};
