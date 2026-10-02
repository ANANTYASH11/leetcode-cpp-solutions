// Problem: 19. Remove Nth Node From End of List
// Link: https://leetcode.com/problems/remove-nth-node-from-end-of-list/
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode dummy(0, head);
        ListNode* fast = &dummy;
        ListNode* slow = &dummy;

        // Advance fast pointer by n + 1 steps to create gap
        for (int i = 0; i <= n; ++i) {
            fast = fast->next;
        }

        // Move both pointers until fast hits nullptr
        while (fast != nullptr) {
            slow = slow->next;
            fast = fast->next;
        }

        // Delete target node
        ListNode* nodeToDelete = slow->next;
        slow->next = slow->next->next;

        return dummy.next;
    }
};
