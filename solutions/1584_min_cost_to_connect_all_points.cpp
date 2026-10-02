// Problem: 1584. Min Cost to Connect All Points
// Link: https://leetcode.com/problems/min-cost-to-connect-all-points/
// Difficulty: Medium
// Time Complexity: O(n^2) Prim's algorithm
// Space Complexity: O(n)

#include <vector>
#include <cmath>
#include <climits>
#include <algorithm>

class Solution {
public:
    int minCostConnectPoints(std::vector<std::vector<int>>& points) {
        int n = points.size();
        std::vector<int> minDist(n, INT_MAX);
        std::vector<bool> inMST(n, false);

        minDist[0] = 0;
        int totalCost = 0;

        for (int step = 0; step < n; ++step) {
            int u = -1;
            for (int i = 0; i < n; ++i) {
                if (!inMST[i] && (u == -1 || minDist[i] < minDist[u])) {
                    u = i;
                }
            }

            inMST[u] = true;
            totalCost += minDist[u];

            for (int v = 0; v < n; ++v) {
                if (!inMST[v]) {
                    int dist = std::abs(points[u][0] - points[v][0]) +
                               std::abs(points[u][1] - points[v][1]);
                    minDist[v] = std::min(minDist[v], dist);
                }
            }
        }

        return totalCost;
    }
};
