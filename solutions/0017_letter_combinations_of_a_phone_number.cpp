// Problem: 17. Letter Combinations of a Phone Number
// Link: https://leetcode.com/problems/letter-combinations-of-a-phone-number/
// Difficulty: Medium
// Time Complexity: O(4^n * n)
// Space Complexity: O(n) auxiliary recursion stack

#include <vector>
#include <string>

class Solution {
private:
    void backtrack(const std::string& digits, int index, std::string& current,
                   const std::vector<std::string>& mapping, std::vector<std::string>& result) {
        if (index == digits.length()) {
            result.push_back(current);
            return;
        }

        const std::string& letters = mapping[digits[index] - '0'];
        for (char c : letters) {
            current.push_back(c);
            backtrack(digits, index + 1, current, mapping, result);
            current.pop_back();
        }
    }

public:
    std::vector<std::string> letterCombinations(std::string digits) {
        if (digits.empty()) return {};

        std::vector<std::string> mapping = {
            "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"
        };
        std::vector<std::string> result;
        std::string current;
        backtrack(digits, 0, current, mapping, result);
        return result;
    }
};
