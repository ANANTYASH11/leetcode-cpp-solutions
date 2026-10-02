// Problem: 287. Find the Duplicate Number
// Link: https://leetcode.com/problems/find-the-duplicate-number/
// Difficulty: Medium
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <vector>

class Solution {
public:
    int findDuplicate(std::vector<int>& nums) {
        // Floyd's Tortoise and Hare on array indices (nums[i] acts as next pointer)
        int slow = nums[0];
        int fast = nums[0];

        // Phase 1: Detect cycle
        do {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while (slow != fast);

        // Phase 2: Find entrance to cycle
        int entry = nums[0];
        while (entry != slow) {
            entry = nums[entry];
            slow = nums[slow];
        }

        return entry;
    }
};
