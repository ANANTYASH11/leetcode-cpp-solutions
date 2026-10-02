// Problem: 199. Binary Tree Right Side View
// Link: https://leetcode.com/problems/binary-tree-right-side-view/
// Difficulty: Medium
// Time Complexity: O(n)
// Space Complexity: O(h) recursion depth

#include <vector>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    std::vector<int> rightSideView(TreeNode* root) {
        std::vector<int> view;
        dfs(root, 0, view);
        return view;
    }

private:
    void dfs(TreeNode* node, int depth, std::vector<int>& view) {
        if (!node) return;

        // If visiting this depth for the first time, record value
        if (depth == view.size()) {
            view.push_back(node->val);
        }

        // Visit right subtree before left
        dfs(node->right, depth + 1, view);
        dfs(node->left, depth + 1, view);
    }
};\n