// Problem: 138. Copy List with Random Pointer
// Link: https://leetcode.com/problems/copy-list-with-random-pointer/
// Difficulty: Medium
// Time Complexity: O(n)
// Space Complexity: O(1) in-place interleave

class Node {
public:
    int val;
    Node* next;
    Node* random;
    Node(int _val) : val(_val), next(nullptr), random(nullptr) {}
};

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (!head) return nullptr;

        // Step 1: Interleave cloned nodes
        Node* curr = head;
        while (curr) {
            Node* clone = new Node(curr->val);
            clone->next = curr->next;
            curr->next = clone;
            curr = clone->next;
        }

        // Step 2: Assign random pointers
        curr = head;
        while (curr) {
            if (curr->random) {
                curr->next->random = curr->random->next;
            }
            curr = curr->next->next;
        }

        // Step 3: Decouple lists
        Node* dummy = new Node(0);
        Node* copyCurr = dummy;
        curr = head;

        while (curr) {
            copyCurr->next = curr->next;
            curr->next = curr->next->next;

            copyCurr = copyCurr->next;
            curr = curr->next;
        }

        Node* result = dummy->next;
        delete dummy;
        return result;
    }
};\n