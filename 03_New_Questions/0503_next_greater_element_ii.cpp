// Problem: 503. Next Greater Element II
// Link: https://leetcode.com/problems/next-greater-element-ii/
// Difficulty: Medium
// Time Complexity: O(n)
// Space Complexity: O(n)

#include <vector>
#include <stack>

class Solution {
public:
    std::vector<int> nextGreaterElements(std::vector<int>& nums) {
        int n = nums.size();
        std::vector<int> result(n, -1);
        std::stack<int> st; // Stores indices

        // Traverse array twice to handle circular wrap-around
        for (int i = 0; i < 2 * n; ++i) {
            int currentNum = nums[i % n];
            while (!st.empty() && nums[st.top()] < currentNum) {
                result[st.top()] = currentNum;
                st.pop();
            }
            if (i < n) {
                st.push(i);
            }
        }
        return result;
    }
};\n