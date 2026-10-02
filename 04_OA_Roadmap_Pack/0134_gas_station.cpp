// Problem: 134. Gas Station
// Link: https://leetcode.com/problems/gas-station/
// Difficulty: Medium
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <vector>

class Solution {
public:
    int canCompleteCircuit(std::vector<int>& gas, std::vector<int>& cost) {
        int totalGas = 0;
        int totalCost = 0;
        int tank = 0;
        int startIndex = 0;
        int n = gas.size();

        for (int i = 0; i < n; ++i) {
            totalGas += gas[i];
            totalCost += cost[i];
            tank += gas[i] - cost[i];

            if (tank < 0) {
                startIndex = i + 1;
                tank = 0;
            }
        }

        return (totalGas >= totalCost) ? startIndex : -1;
    }
};
