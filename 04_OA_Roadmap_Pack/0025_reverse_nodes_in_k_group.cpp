// Problem: 25. Reverse Nodes in k-Group
// Link: https://leetcode.com/problems/reverse-nodes-in-k-group/
// Difficulty: Hard
// Time Complexity: O(n)
// Space Complexity: O(1)

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode dummy(0, head);
        ListNode* prevGroup = &dummy;

        while (true) {
            ListNode* kth = prevGroup;
            for (int i = 0; i < k && kth != nullptr; ++i) {
                kth = kth->next;
            }
            if (!kth) break;

            ListNode* nextGroup = kth->next;
            ListNode* prev = nextGroup;
            ListNode* curr = prevGroup->next;

            while (curr != nextGroup) {
                ListNode* temp = curr->next;
                curr->next = prev;
                prev = curr;
                curr = temp;
            }

            ListNode* temp = prevGroup->next;
            prevGroup->next = kth;
            prevGroup = temp;
        }

        return dummy.next;
    }
};
