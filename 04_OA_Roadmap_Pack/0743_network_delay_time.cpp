// Problem: 743. Network Delay Time
// Link: https://leetcode.com/problems/network-delay-time/
// Difficulty: Medium
// Time Complexity: O((V + E) log V)
// Space Complexity: O(V + E)

#include <vector>
#include <queue>
#include <climits>
#include <algorithm>

class Solution {
public:
    int networkDelayTime(std::vector<std::vector<int>>& times, int n, int k) {
        std::vector<std::vector<std::pair<int, int>>> adj(n + 1);
        for (const auto& t : times) {
            adj[t[0]].push_back({t[1], t[2]});
        }

        // Min-heap for Dijkstra: (distance, node)
        std::priority_queue<std::pair<int, int>,
                            std::vector<std::pair<int, int>>,
                            std::greater<std::pair<int, int>>> pq;

        std::vector<int> dist(n + 1, INT_MAX);
        dist[k] = 0;
        pq.push({0, k});

        while (!pq.empty()) {
            auto [d, u] = pq.top();
            pq.pop();

            if (d > dist[u]) continue;

            for (const auto& [v, w] : adj[u]) {
                if (dist[u] + w < dist[v]) {
                    dist[v] = dist[u] + w;
                    pq.push({dist[v], v});
                }
            }
        }

        int maxTime = 0;
        for (int i = 1; i <= n; ++i) {
            if (dist[i] == INT_MAX) return -1;
            maxTime = std::max(maxTime, dist[i]);
        }

        return maxTime;
    }
};
