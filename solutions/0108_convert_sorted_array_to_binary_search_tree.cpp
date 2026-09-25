// Problem: 108. Convert Sorted Array to Binary Search Tree
// Link: https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/
// Difficulty: Easy
// Time Complexity: O(n)
// Space Complexity: O(log n)

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
    TreeNode* sortedArrayToBST(std::vector<int>& nums) {
        return buildBST(nums, 0, static_cast<int>(nums.size()) - 1);
    }

private:
    TreeNode* buildBST(const std::vector<int>& nums, int left, int right) {
        if (left > right) return nullptr;

        int mid = left + (right - left) / 2;
        TreeNode* root = new TreeNode(nums[mid]);
        root->left = buildBST(nums, left, mid - 1);
        root->right = buildBST(nums, mid + 1, right);
        return root;
    }
};
