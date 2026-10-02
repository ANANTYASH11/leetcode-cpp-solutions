// Problem: 1334. Find the City With the Smallest Number of Neighbors at a Threshold Distance
// Link: https://leetcode.com/problems/find-the-city-with-the-smallest-number-of-neighbors-at-a-threshold-distance/
// Difficulty: Medium
// Time Complexity: O(n^3)
// Space Complexity: O(n^2)

#include <vector>
#include <climits>
#include <algorithm>

class Solution {
public:
    int findTheCity(int n, std::vector<std::vector<int>>& edges, int distanceThreshold) {
        const int INF = 1e9;
        std::vector<std::vector<int>> dist(n, std::vector<int>(n, INF));

        for (int i = 0; i < n; ++i) {
            dist[i][i] = 0;
        }

        for (const auto& e : edges) {
            dist[e[0]][e[1]] = e[2];
            dist[e[1]][e[0]] = e[2];
        }

        // Floyd-Warshall algorithm
        for (int k = 0; k < n; ++k) {
            for (int i = 0; i < n; ++i) {
                for (int j = 0; j < n; ++j) {
                    if (dist[i][k] != INF && dist[k][j] != INF) {
                        dist[i][j] = std::min(dist[i][j], dist[i][k] + dist[k][j]);
                    }
                }
            }
        }

        int minReachable = INF;
        int bestCity = -1;

        for (int i = 0; i < n; ++i) {
            int reachable = 0;
            for (int j = 0; j < n; ++j) {
                if (i != j && dist[i][j] <= distanceThreshold) {
                    ++reachable;
                }
            }
            if (reachable <= minReachable) {
                minReachable = reachable;
                bestCity = i;
            }
        }

        return bestCity;
    }
};
