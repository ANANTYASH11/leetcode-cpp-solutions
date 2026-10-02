// Problem: 1943. Describe the Painting
// Link: https://leetcode.com/problems/describe-the-painting/
// Difficulty: Medium
// Time Complexity: O(k log k) where k is the number of distinct segment endpoints
// Space Complexity: O(k)

#include <vector>
#include <map>

class Solution {
public:
    std::vector<std::vector<long long>> splitPainting(std::vector<std::vector<int>>& segments) {
        std::map<long long, long long> line;

        for (const auto& s : segments) {
            line[s[0]] += s[2];
            line[s[1]] -= s[2];
        }

        std::vector<std::vector<long long>> result;
        long long currentSum = 0;
        long long prevPoint = 0;

        for (const auto& [point, colorChange] : line) {
            if (currentSum > 0) {
                result.push_back({prevPoint, point, currentSum});
            }
            currentSum += colorChange;
            prevPoint = point;
        }

        return result;
    }
};
