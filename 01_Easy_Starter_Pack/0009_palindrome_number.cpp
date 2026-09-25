// Problem: 9. Palindrome Number
// Link: https://leetcode.com/problems/palindrome-number/
// Difficulty: Easy
// Time Complexity: O(log10(n))
// Space Complexity: O(1)

class Solution {
public:
    bool isPalindrome(int x) {
        // Negative numbers or numbers ending with 0 (except 0 itself) are not palindromes
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int reversedHalf = 0;
        while (x > reversedHalf) {
            reversedHalf = reversedHalf * 10 + x % 10;
            x /= 10;
        }

        // When the length is an odd number, we can get rid of the middle digit by reversedHalf/10
        return x == reversedHalf || x == reversedHalf / 10;
    }
};
