// Problem: 116. Populating Next Right Pointers in Each Node
// Link: https://leetcode.com/problems/populating-next-right-pointers-in-each-node/
// Difficulty: Medium
// Time Complexity: O(n)
// Space Complexity: O(1) auxiliary space

class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(nullptr), right(nullptr), next(nullptr) {}
    Node(int _val) : val(_val), left(nullptr), right(nullptr), next(nullptr) {}
    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};

class Solution {
public:
    Node* connect(Node* root) {
        if (!root) return nullptr;

        Node* leftmost = root;

        while (leftmost->left) {
            Node* head = leftmost;
            while (head) {
                // Connect children of current node
                head->left->next = head->right;

                // Connect right child to adjacent left child
                if (head->next) {
                    head->right->next = head->next->left;
                }

                head = head->next;
            }
            leftmost = leftmost->left;
        }

        return root;
    }
};
