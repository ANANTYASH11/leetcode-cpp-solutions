// Problem: 787. Cheapest Flights Within K Stops
// Link: https://leetcode.com/problems/cheapest-flights-within-k-stops/
// Difficulty: Medium
// Time Complexity: O(k * E)
// Space Complexity: O(V)

#include <vector>
#include <climits>
#include <algorithm>

class Solution {
public:
    int findCheapestPrice(int n, std::vector<std::vector<int>>& flights, int src, int dst, int k) {
        std::vector<int> dist(n, INT_MAX);
        dist[src] = 0;

        for (int i = 0; i <= k; ++i) {
            std::vector<int> tempDist = dist;
            for (const auto& flight : flights) {
                int u = flight[0];
                int v = flight[1];
                int w = flight[2];

                if (dist[u] != INT_MAX && dist[u] + w < tempDist[v]) {
                    tempDist[v] = dist[u] + w;
                }
            }
            dist = std::move(tempDist);
        }

        return dist[dst] == INT_MAX ? -1 : dist[dst];
    }
};
