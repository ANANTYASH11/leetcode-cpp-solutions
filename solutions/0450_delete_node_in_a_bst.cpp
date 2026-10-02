// Problem: 450. Delete Node in a BST
// Link: https://leetcode.com/problems/delete-node-in-a-bst/
// Difficulty: Medium
// Time Complexity: O(h) where h is tree height
// Space Complexity: O(h) recursion stack

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
    TreeNode* findMin(TreeNode* node) {
        while (node->left) {
            node = node->left;
        }
        return node;
    }

public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if (!root) return nullptr;

        if (key < root->val) {
            root->left = deleteNode(root->left, key);
        } else if (key > root->val) {
            root->right = deleteNode(root->right, key);
        } else {
            // Node found
            if (!root->left) {
                TreeNode* rightChild = root->right;
                delete root;
                return rightChild;
            } else if (!root->right) {
                TreeNode* leftChild = root->left;
                delete root;
                return leftChild;
            }

            // Node has two children: find inorder successor
            TreeNode* successor = findMin(root->right);
            root->val = successor->val;
            root->right = deleteNode(root->right, successor->val);
        }

        return root;
    }
};
