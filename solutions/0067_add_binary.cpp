// Problem: 67. Add Binary
// Link: https://leetcode.com/problems/add-binary/
// Difficulty: Easy
// Time Complexity: O(max(m, n))
// Space Complexity: O(1)

#include <string>
#include <algorithm>

class Solution {
public:
    std::string addBinary(std::string a, std::string b) {
        std::string result = "";
        int i = a.length() - 1;
        int j = b.length() - 1;
        int carry = 0;

        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;
            if (i >= 0) sum += a[i--] - '0';
            if (j >= 0) sum += b[j--] - '0';

            result += (sum % 2) + '0';
            carry = sum / 2;
        }

        std::reverse(result.begin(), result.end());
        return result;
    }
};
