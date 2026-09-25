// Problem: 111. Minimum Depth of Binary Tree
// Link: https://leetcode.com/problems/minimum-depth-of-binary-tree/
// Difficulty: Easy
// Time Complexity: O(n)
// Space Complexity: O(n)

#include <algorithm>

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
    int minDepth(TreeNode* root) {
        if (root == nullptr) return 0;

        // If one child is null, we must take the path through the non-null child
        if (root->left == nullptr) return 1 + minDepth(root->right);
        if (root->right == nullptr) return 1 + minDepth(root->left);

        return 1 + std::min(minDepth(root->left), minDepth(root->right));
    }
};
