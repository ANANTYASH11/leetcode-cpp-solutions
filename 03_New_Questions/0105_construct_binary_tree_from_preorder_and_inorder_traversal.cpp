// Problem: 105. Construct Binary Tree from Preorder and Inorder Traversal
// Link: https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/
// Difficulty: Medium
// Time Complexity: O(n)
// Space Complexity: O(n) for hash map

#include <vector>
#include <unordered_map>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    TreeNode* buildTree(std::vector<int>& preorder, std::vector<int>& inorder) {
        std::unordered_map<int, int> inMap;
        for (int i = 0; i < inorder.size(); ++i) {
            inMap[inorder[i]] = i;
        }
        int preIndex = 0;
        return build(preorder, inMap, preIndex, 0, inorder.size() - 1);
    }

private:
    TreeNode* build(const std::vector<int>& preorder, const std::unordered_map<int, int>& inMap,
                    int& preIndex, int inStart, int inEnd) {
        if (inStart > inEnd) return nullptr;

        int rootVal = preorder[preIndex++];
        TreeNode* root = new TreeNode(rootVal);
        int inIndex = inMap.at(rootVal);

        root->left = build(preorder, inMap, preIndex, inStart, inIndex - 1);
        root->right = build(preorder, inMap, preIndex, inIndex + 1, inEnd);
        return root;
    }
};\n