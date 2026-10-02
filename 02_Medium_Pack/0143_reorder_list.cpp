// Problem: 143. Reorder List
// Link: https://leetcode.com/problems/reorder-list/
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
    void reorderList(ListNode* head) {
        if (!head || !head->next || !head->next->next) return;

        // 1. Find the middle node using slow and fast pointers
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast->next != nullptr && fast->next->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // 2. Reverse the second half of the list
        ListNode* second = slow->next;
        slow->next = nullptr; // Disconnect the two halves

        ListNode* prev = nullptr;
        ListNode* curr = second;
        while (curr != nullptr) {
            ListNode* nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        second = prev;

        // 3. Interleave/merge the first and second halves
        ListNode* first = head;
        while (second != nullptr) {
            ListNode* tmp1 = first->next;
            ListNode* tmp2 = second->next;

            first->next = second;
            second->next = tmp1;

            first = tmp1;
            second = tmp2;
        }
    }
};
