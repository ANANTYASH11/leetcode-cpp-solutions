// Problem: 124. Binary Tree Maximum Path Sum
// Link: https://leetcode.com/problems/binary-tree-maximum-path-sum/
// Difficulty: Hard
// Time Complexity: O(n)
// Space Complexity: O(h) recursion stack

#include <algorithm>
#include <climits>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    int maxPathSum(TreeNode* root) {
        int globalMax = INT_MIN;
        maxGain(root, globalMax);
        return globalMax;
    }

private:
    int maxGain(TreeNode* node, int& globalMax) {
        if (!node) return 0;

        // Ignore negative paths
        int leftGain = std::max(maxGain(node->left, globalMax), 0);
        int rightGain = std::max(maxGain(node->right, globalMax), 0);

        // Path passing through this node as the peak
        int currentPathSum = node->val + leftGain + rightGain;
        globalMax = std::max(globalMax, currentPathSum);

        // Return maximum branch gain for parent
        return node->val + std::max(leftGain, rightGain);
    }
};
