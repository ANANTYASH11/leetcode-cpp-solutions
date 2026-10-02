// Problem: 1514. Path with Maximum Probability
// Link: https://leetcode.com/problems/path-with-maximum-probability/
// Difficulty: Medium
// Time Complexity: O((V + E) log V)
// Space Complexity: O(V + E)

#include <vector>
#include <queue>

class Solution {
public:
    double maxProbability(int n, std::vector<std::vector<int>>& edges, std::vector<double>& succProb, int start_node, int end_node) {
        std::vector<std::vector<std::pair<int, double>>> adj(n);
        for (size_t i = 0; i < edges.size(); ++i) {
            adj[edges[i][0]].push_back({edges[i][1], succProb[i]});
            adj[edges[i][1]].push_back({edges[i][0], succProb[i]});
        }

        std::vector<double> maxProb(n, 0.0);
        maxProb[start_node] = 1.0;

        // Max-heap storing pair: (probability, node)
        std::priority_queue<std::pair<double, int>> pq;
        pq.push({1.0, start_node});

        while (!pq.empty()) {
            auto [prob, u] = pq.top();
            pq.pop();

            if (u == end_node) return prob;
            if (prob < maxProb[u]) continue;

            for (const auto& [v, edgeProb] : adj[u]) {
                if (prob * edgeProb > maxProb[v]) {
                    maxProb[v] = prob * edgeProb;
                    pq.push({maxProb[v], v});
                }
            }
        }

        return 0.0;
    }
};
