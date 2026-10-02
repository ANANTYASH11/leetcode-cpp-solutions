// Problem: 142. Linked List Cycle II
// Link: https://leetcode.com/problems/linked-list-cycle-ii/
// Difficulty: Medium
// Time Complexity: O(n)
// Space Complexity: O(1)

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(nullptr) {}
 * };
 */

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if (!head || !head->next) return nullptr;

        ListNode* slow = head;
        ListNode* fast = head;

        // Step 1: Detect cycle using Floyd's Tortoise and Hare
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                // Step 2: Reset one pointer to head and move both 1 step at a time
                // to find the cycle entrance (L1 = k*C - L2)
                ListNode* entry = head;
                while (entry != slow) {
                    entry = entry->next;
                    slow = slow->next;
                }
                return entry;
            }
        }

        return nullptr;
    }
};
