// Problem: 13. Roman to Integer
// Link: https://leetcode.com/problems/roman-to-integer/
// Difficulty: Easy
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <string>
#include <unordered_map>

class Solution {
public:
    int romanToInt(std::string s) {
        std::unordered_map<char, int> val = {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
            {'C', 100}, {'D', 500}, {'M', 1000}
        };

        int total = 0;
        int n = s.length();

        for (int i = 0; i < n; ++i) {
            // If current symbol has smaller value than the next symbol, subtract it
            if (i + 1 < n && val[s[i]] < val[s[i + 1]]) {
                total -= val[s[i]];
            } else {
                total += val[s[i]];
            }
        }

        return total;
    }
};
