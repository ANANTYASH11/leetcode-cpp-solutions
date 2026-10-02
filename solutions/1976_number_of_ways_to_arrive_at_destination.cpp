// Problem: 1976. Number of Ways to Arrive at Destination
// Link: https://leetcode.com/problems/number-of-ways-to-arrive-at-destination/
// Difficulty: Medium
// Time Complexity: O((V + E) log V)
// Space Complexity: O(V + E)

#include <vector>
#include <queue>
#include <climits>

class Solution {
public:
    int countPaths(int n, std::vector<std::vector<int>>& roads) {
        const int MOD = 1e9 + 7;
        std::vector<std::vector<std::pair<int, long long>>> adj(n);

        for (const auto& r : roads) {
            adj[r[0]].push_back({r[1], r[2]});
            adj[r[1]].push_back({r[0], r[2]});
        }

        std::vector<long long> dist(n, LLONG_MAX);
        std::vector<int> ways(n, 0);

        dist[0] = 0;
        ways[0] = 1;

        // Min-heap storing pair: (distance, node)
        std::priority_queue<std::pair<long long, int>,
                            std::vector<std::pair<long long, int>>,
                            std::greater<std::pair<long long, int>>> pq;
        pq.push({0, 0});

        while (!pq.empty()) {
            auto [d, u] = pq.top();
            pq.pop();

            if (d > dist[u]) continue;

            for (const auto& [v, time] : adj[u]) {
                if (dist[u] + time < dist[v]) {
                    dist[v] = dist[u] + time;
                    ways[v] = ways[u];
                    pq.push({dist[v], v});
                } else if (dist[u] + time == dist[v]) {
                    ways[v] = (ways[v] + ways[u]) % MOD;
                }
            }
        }

        return ways[n - 1];
    }
};
