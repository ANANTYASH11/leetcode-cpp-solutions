// Problem: 746. Min Cost Climbing Stairs
// Link: https://leetcode.com/problems/min-cost-climbing-stairs/
// Difficulty: Easy
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <vector>
#include <algorithm>

class Solution {
public:
    int minCostClimbingStairs(std::vector<int>& cost) {
        int prev2 = cost[0];
        int prev1 = cost[1];

        for (int i = 2; i < cost.size(); ++i) {
            int current = cost[i] + std::min(prev1, prev2);
            prev2 = prev1;
            prev1 = current;
        }
        return std::min(prev1, prev2);
    }
};\n