// Problem: 234. Palindrome Linked List
// Link: https://leetcode.com/problems/palindrome-linked-list/
// Difficulty: Easy
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
    bool isPalindrome(ListNode* head) {
        if (!head || !head->next) return true;

        // 1. Find the end of first half using slow and fast pointers
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // 2. Reverse the second half
        ListNode* secondHalf = reverseList(slow->next);

        // 3. Check whether or not there's a palindrome
        ListNode* p1 = head;
        ListNode* p2 = secondHalf;
        bool isPalin = true;
        while (p2 != nullptr) {
            if (p1->val != p2->val) {
                isPalin = false;
                break;
            }
            p1 = p1->next;
            p2 = p2->next;
        }

        // 4. Restore the list
        slow->next = reverseList(secondHalf);

        return isPalin;
    }

private:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while (curr != nullptr) {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        return prev;
    }
};
