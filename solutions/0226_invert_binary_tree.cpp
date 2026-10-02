// Problem: 226. Invert Binary Tree
// Link: https://leetcode.com/problems/invert-binary-tree/
// Difficulty: Easy
// Time Complexity: O(n)
// Space Complexity: O(h), where h is the height of the tree

#include <utility>

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
    TreeNode* invertTree(TreeNode* root) {
        if (!root) return nullptr;

        std::swap(root->left, root->right);
        invertTree(root->left);
        invertTree(root->right);

        return root;
    }
};
