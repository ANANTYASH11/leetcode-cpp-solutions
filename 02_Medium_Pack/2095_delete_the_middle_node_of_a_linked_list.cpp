// Problem: 2095. Delete the Middle Node of a Linked List
// Link: https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/
// Difficulty: Medium
// Time Complexity: O(n)
// Space Complexity: O(1)

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        // Base case: if there's only 1 node, deleting it leaves an empty list
        if (!head || !head->next) {
            return nullptr;
        }

        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = nullptr;

        // Traverse using fast and slow pointers
        while (fast != nullptr && fast->next != nullptr) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        // Delete the middle node pointed to by slow
        prev->next = slow->next;

        return head;
    }
};
