// Problem: 637. Average of Levels in Binary Tree
// Link: https://leetcode.com/problems/average-of-levels-in-binary-tree/
// Difficulty: Easy
// Time Complexity: O(n)
// Space Complexity: O(n)

#include <vector>
#include <queue>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    std::vector<double> averageOfLevels(TreeNode* root) {
        if (!root) return {};

        std::vector<double> averages;
        std::queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int size = q.size();
            double sum = 0.0;

            for (int i = 0; i < size; ++i) {
                TreeNode* node = q.front();
                q.pop();
                sum += node->val;

                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }

            averages.push_back(sum / size);
        }

        return averages;
    }
};
