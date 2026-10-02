// Problem: 99. Recover Binary Search Tree
// Link: https://leetcode.com/problems/recover-binary-search-tree/
// Difficulty: Medium
// Time Complexity: O(n)
// Space Complexity: O(h) recursion stack

#include <algorithm>

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
    TreeNode* first = nullptr;
    TreeNode* second = nullptr;
    TreeNode* prev = nullptr;

    void inorder(TreeNode* root) {
        if (!root) return;
        inorder(root->left);

        if (prev && prev->val > root->val) {
            if (!first) {
                first = prev;
            }
            second = root;
        }
        prev = root;

        inorder(root->right);
    }

public:
    void recoverTree(TreeNode* root) {
        inorder(root);
        if (first && second) {
            std::swap(first->val, second->val);
        }
    }
};
