// Problem: 402. Remove K Digits
// Link: https://leetcode.com/problems/remove-k-digits/
// Difficulty: Medium
// Time Complexity: O(n)
// Space Complexity: O(n)

#include <string>
#include <algorithm>

class Solution {
public:
    std::string removeKdigits(std::string num, int k) {
        std::string st = "";

        for (char digit : num) {
            while (!st.empty() && k > 0 && st.back() > digit) {
                st.pop_back();
                --k;
            }
            st.push_back(digit);
        }

        // Pop remaining k digits from back
        while (k > 0 && !st.empty()) {
            st.pop_back();
            --k;
        }

        // Trim leading zeros
        int start = 0;
        while (start < st.size() && st[start] == '0') {
            ++start;
        }

        std::string result = st.substr(start);
        return result.empty() ? "0" : result;
    }
};
