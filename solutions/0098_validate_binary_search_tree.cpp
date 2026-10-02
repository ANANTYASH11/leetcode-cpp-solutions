// Problem: 98. Validate Binary Search Tree
// Link: https://leetcode.com/problems/validate-binary-search-tree/
// Difficulty: Medium
// Time Complexity: O(n)
// Space Complexity: O(h) where h is height of tree

#include <climits>

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
    bool validate(TreeNode* node, long long minVal, long long maxVal) {
        if (!node) return true;
        if (node->val <= minVal || node->val >= maxVal) return false;
        return validate(node->left, minVal, node->val) &&
               validate(node->right, node->val, maxVal);
    }

public:
    bool isValidBST(TreeNode* root) {
        return validate(root, LLONG_MIN, LLONG_MAX);
    }
};
