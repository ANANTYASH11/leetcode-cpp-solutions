// Problem: 383. Ransom Note
// Link: https://leetcode.com/problems/ransom-note/
// Difficulty: Easy
// Author: ANANTYASH11
// Time Complexity: O(m + n)
// Space Complexity: O(1)

#include <string>

class Solution {
public:
    bool canConstruct(std::string ransomNote, std::string magazine) {
        int counts[26] = {0};

        for (char c : magazine) {
            counts[c - 'a']++;
        }

        for (char c : ransomNote) {
            if (--counts[c - 'a'] < 0) {
                return false;
            }
        }

        return true;
    }
};
