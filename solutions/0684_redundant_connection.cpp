// Problem: 684. Redundant Connection
// Link: https://leetcode.com/problems/redundant-connection/
// Difficulty: Medium
// Time Complexity: O(N * alpha(N)) via Union-Find with Path Compression
// Space Complexity: O(N)

#include <vector>
#include <numeric>

class Solution {
    struct DSU {
        std::vector<int> parent;
        DSU(int n) : parent(n + 1) {
            std::iota(parent.begin(), parent.end(), 0);
        }
        int find(int i) {
            if (parent[i] == i) return i;
            return parent[i] = find(parent[i]);
        }
        bool unite(int i, int j) {
            int rootI = find(i);
            int rootJ = find(j);
            if (rootI == rootJ) return false;
            parent[rootI] = rootJ;
            return true;
        }
    };

public:
    std::vector<int> findRedundantConnection(std::vector<std::vector<int>>& edges) {
        DSU dsu(edges.size());
        for (const auto& edge : edges) {
            if (!dsu.unite(edge[0], edge[1])) {
                return edge;
            }
        }
        return {};
    }
};
