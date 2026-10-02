// Problem: 515. Find Largest Value in Each Tree Row
// Link: https://leetcode.com/problems/find-largest-value-in-each-tree-row/
// Difficulty: Medium
// Time Complexity: O(n)
// Space Complexity: O(n)

#include <vector>
#include <queue>
#include <climits>
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
public:
    std::vector<int> largestValues(TreeNode* root) {
        if (!root) return {};

        std::vector<int> result;
        std::queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int size = q.size();
            int maxVal = INT_MIN;

            for (int i = 0; i < size; ++i) {
                TreeNode* node = q.front();
                q.pop();
                maxVal = std::max(maxVal, node->val);

                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }

            result.push_back(maxVal);
        }

        return result;
    }
};
