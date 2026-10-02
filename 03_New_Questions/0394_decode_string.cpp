// Problem: 394. Decode String
// Link: https://leetcode.com/problems/decode-string/
// Difficulty: Medium
// Time Complexity: O(maxK * n)
// Space Complexity: O(m + n)

#include <string>
#include <stack>
#include <cctype>

class Solution {
public:
    std::string decodeString(std::string s) {
        std::stack<int> countStack;
        std::stack<std::string> stringStack;
        std::string currentString = "";
        int currentK = 0;

        for (char ch : s) {
            if (std::isdigit(ch)) {
                currentK = currentK * 10 + (ch - '0');
            } else if (ch == '[') {
                countStack.push(currentK);
                stringStack.push(currentString);
                currentString = "";
                currentK = 0;
            } else if (ch == ']') {
                int repeatCount = countStack.top();
                countStack.pop();
                std::string decoded = stringStack.top();
                stringStack.pop();

                while (repeatCount-- > 0) {
                    decoded += currentString;
                }
                currentString = decoded;
            } else {
                currentString.push_back(ch);
            }
        }
        return currentString;
    }
};\n