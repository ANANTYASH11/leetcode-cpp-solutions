// Problem: 242. Valid Anagram
// Link: https://leetcode.com/problems/valid-anagram/
// Difficulty: Easy
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <string>

class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        if (s.length() != t.length()) return false;

        int counts[26] = {0};
        for (int i = 0; i < s.length(); ++i) {
            counts[s[i] - 'a']++;
            counts[t[i] - 'a']--;
        }

        for (int count : counts) {
            if (count != 0) return false;
        }

        return true;
    }
};
