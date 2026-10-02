// Problem: 2381. Shifting Letters II
// Link: https://leetcode.com/problems/shifting-letters-ii/
// Difficulty: Medium
// Time Complexity: O(n + shifts.size())
// Space Complexity: O(n)

#include <string>
#include <vector>

class Solution {
public:
    std::string shiftingLetters(std::string s, std::vector<std::vector<int>>& shifts) {
        int n = s.length();
        std::vector<int> diff(n + 1, 0);

        for (const auto& shift : shifts) {
            int start = shift[0];
            int end = shift[1];
            int dir = (shift[2] == 1) ? 1 : -1;

            diff[start] += dir;
            diff[end + 1] -= dir;
        }

        int currentShift = 0;
        for (int i = 0; i < n; ++i) {
            currentShift += diff[i];
            int netShift = (currentShift % 26 + 26) % 26;
            s[i] = 'a' + (s[i] - 'a' + netShift) % 26;
        }

        return s;
    }
};
