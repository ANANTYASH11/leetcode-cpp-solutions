// Problem: 125. Valid Palindrome
// Link: https://leetcode.com/problems/valid-palindrome/
// Difficulty: Easy
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <string>
#include <cctype>

class Solution {
public:
    bool isPalindrome(std::string s) {
        int left = 0;
        int right = static_cast<int>(s.length()) - 1;

        while (left < right) {
            while (left < right && !std::isalnum(static_cast<unsigned char>(s[left]))) {
                ++left;
            }
            while (left < right && !std::isalnum(static_cast<unsigned char>(s[right]))) {
                --right;
            }

            if (std::tolower(static_cast<unsigned char>(s[left])) !=
                std::tolower(static_cast<unsigned char>(s[right]))) {
                return false;
            }

            ++left;
            --right;
        }

        return true;
    }
};
