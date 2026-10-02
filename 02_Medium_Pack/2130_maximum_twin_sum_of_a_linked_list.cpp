// Problem: 2130. Maximum Twin Sum of a Linked List
// Link: https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list/
// Difficulty: Medium
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <algorithm>

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
    int pairSum(ListNode* head) {
        // 1. Find midpoint of the list using slow and fast pointers
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // 2. Reverse second half
        ListNode* prev = nullptr;
        ListNode* curr = slow;
        while (curr != nullptr) {
            ListNode* nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }

        // 3. Compare pairs and find maximum twin sum
        int maxTwinSum = 0;
        ListNode* p1 = head;
        ListNode* p2 = prev;
        while (p2 != nullptr) {
            maxTwinSum = std::max(maxTwinSum, p1->val + p2->val);
            p1 = p1->next;
            p2 = p2->next;
        }

        return maxTwinSum;
    }
};
