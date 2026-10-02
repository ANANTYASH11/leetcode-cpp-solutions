// Problem: 802. Find Eventual Safe States
// Link: https://leetcode.com/problems/find-eventual-safe-states/
// Difficulty: Medium
// Time Complexity: O(V + E)
// Space Complexity: O(V)

#include <vector>

class Solution {
private:
    // Color: 0 = unvisited, 1 = visiting (in recursion stack), 2 = safe
    bool dfs(int node, const std::vector<std::vector<int>>& graph, std::vector<int>& color) {
        if (color[node] != 0) {
            return color[node] == 2;
        }

        color[node] = 1;
        for (int neighbor : graph[node]) {
            if (!dfs(neighbor, graph, color)) {
                return false;
            }
        }

        color[node] = 2;
        return true;
    }

public:
    std::vector<int> eventualSafeNodes(std::vector<std::vector<int>>& graph) {
        int n = graph.size();
        std::vector<int> color(n, 0);
        std::vector<int> safeNodes;

        for (int i = 0; i < n; ++i) {
            if (dfs(i, graph, color)) {
                safeNodes.push_back(i);
            }
        }

        return safeNodes;
    }
};
