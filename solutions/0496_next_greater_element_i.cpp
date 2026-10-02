// Problem: 496. Next Greater Element I
// Link: https://leetcode.com/problems/next-greater-element-i/
// Difficulty: Easy
// Time Complexity: O(n1 + n2)
// Space Complexity: O(n2)

#include <vector>
#include <stack>
#include <unordered_map>

class Solution {
public:
    std::vector<int> nextGreaterElement(std::vector<int>& nums1, std::vector<int>& nums2) {
        std::unordered_map<int, int> nextMap;
        std::stack<int> st;

        for (int num : nums2) {
            while (!st.empty() && st.top() < num) {
                nextMap[st.top()] = num;
                st.pop();
            }
            st.push(num);
        }

        std::vector<int> result;
        result.reserve(nums1.size());
        for (int num : nums1) {
            result.push_back(nextMap.count(num) ? nextMap[num] : -1);
        }

        return result;
    }
};
