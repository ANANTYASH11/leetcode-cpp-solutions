// Problem: 76. Minimum Window Substring
// Link: https://leetcode.com/problems/minimum-window-substring/
// Difficulty: Hard
// Time Complexity: O(m + n)
// Space Complexity: O(1) - fixed 128 ASCII array

#include <string>
#include <vector>
#include <climits>

class Solution {
public:
    std::string minWindow(std::string s, std::string t) {
        if (s.empty() || t.empty() || s.length() < t.length()) return "";

        std::vector<int> targetCount(128, 0);
        for (char c : t) ++targetCount[c];

        int required = 0;
        for (int count : targetCount) {
            if (count > 0) ++required;
        }

        std::vector<int> windowCount(128, 0);
        int formed = 0;
        int left = 0;
        int minLen = INT_MAX;
        int startIdx = 0;

        for (int right = 0; right < s.length(); ++right) {
            char c = s[right];
            ++windowCount[c];

            if (targetCount[c] > 0 && windowCount[c] == targetCount[c]) {
                ++formed;
            }

            while (left <= right && formed == required) {
                if (right - left + 1 < minLen) {
                    minLen = right - left + 1;
                    startIdx = left;
                }

                char leftChar = s[left];
                --windowCount[leftChar];
                if (targetCount[leftChar] > 0 && windowCount[leftChar] < targetCount[leftChar]) {
                    --formed;
                }
                ++left;
            }
        }

        return minLen == INT_MAX ? "" : s.substr(startIdx, minLen);
    }
};
