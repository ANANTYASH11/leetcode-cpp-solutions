// Problem: 61. Rotate List
// Link: https://leetcode.com/problems/rotate-list/
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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;

        // 1. Calculate length and find tail
        int length = 1;
        ListNode* tail = head;
        while (tail->next != nullptr) {
            tail = tail->next;
            length++;
        }

        // 2. Reduce k using modulo
        k = k % length;
        if (k == 0) return head;

        // 3. Connect tail to head to form ring
        tail->next = head;

        // 4. Find new tail at index (length - k - 1)
        int stepsToNewTail = length - k;
        ListNode* newTail = tail;
        while (stepsToNewTail--) {
            newTail = newTail->next;
        }

        ListNode* newHead = newTail->next;
        newTail->next = nullptr; // Break the ring

        return newHead;
    }
};
