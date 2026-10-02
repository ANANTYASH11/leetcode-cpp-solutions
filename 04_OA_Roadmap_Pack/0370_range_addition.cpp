// Problem: 370. Range Addition
// Link: https://leetcode.com/problems/range-addition/
// Difficulty: Medium
// Time Complexity: O(n + k) where k is the number of updates
// Space Complexity: O(1) auxiliary space (excluding result)

#include <vector>

class Solution {
public:
    std::vector<int> getModifiedArray(int length, std::vector<std::vector<int>>& updates) {
        std::vector<int> result(length, 0);

        for (const auto& u : updates) {
            int start = u[0];
            int end = u[1];
            int inc = u[2];

            result[start] += inc;
            if (end + 1 < length) {
                result[end + 1] -= inc;
            }
        }

        for (int i = 1; i < length; ++i) {
            result[i] += result[i - 1];
        }

        return result;
    }
};
