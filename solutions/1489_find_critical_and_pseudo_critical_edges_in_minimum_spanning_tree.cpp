// Problem: 1489. Find Critical and Pseudo-Critical Edges in Minimum Spanning Tree
// Link: https://leetcode.com/problems/find-critical-and-pseudo-critical-edges-in-minimum-spanning-tree/
// Difficulty: Hard
// Time Complexity: O(E^2 * alpha(V))
// Space Complexity: O(V + E)

#include <vector>
#include <algorithm>

class DSU {
private:
    std::vector<int> parent;
    int components;

public:
    DSU(int n) : parent(n), components(n) {
        for (int i = 0; i < n; ++i) parent[i] = i;
    }

    int find(int i) {
        if (parent[i] == i) return i;
        return parent[i] = find(parent[i]);
    }

    bool unite(int i, int j) {
        int rootI = find(i);
        int rootJ = find(j);
        if (rootI != rootJ) {
            parent[rootI] = rootJ;
            --components;
            return true;
        }
        return false;
    }

    int getComponents() const {
        return components;
    }
};

class Solution {
private:
    int buildMST(int n, const std::vector<std::vector<int>>& edges, int blockEdge, int forceEdge) {
        DSU dsu(n);
        int weight = 0;

        if (forceEdge != -1) {
            dsu.unite(edges[forceEdge][0], edges[forceEdge][1]);
            weight += edges[forceEdge][2];
        }

        for (size_t i = 0; i < edges.size(); ++i) {
            if ((int)i == blockEdge) continue;
            if (dsu.unite(edges[i][0], edges[i][1])) {
                weight += edges[i][2];
            }
        }

        return dsu.getComponents() == 1 ? weight : 1e9;
    }

public:
    std::vector<std::vector<int>> findCriticalAndPseudoCriticalEdges(int n, std::vector<std::vector<int>>& edges) {
        int m = edges.size();
        for (int i = 0; i < m; ++i) {
            edges[i].push_back(i); // preserve original edge index
        }

        std::sort(edges.begin(), edges.end(),
                  [](const std::vector<int>& a, const std::vector<int>& b) {
                      return a[2] < b[2];
                  });

        int baseWeight = buildMST(n, edges, -1, -1);
        std::vector<int> critical;
        std::vector<int> pseudoCritical;

        for (int i = 0; i < m; ++i) {
            if (buildMST(n, edges, i, -1) > baseWeight) {
                critical.push_back(edges[i][3]);
            } else if (buildMST(n, edges, -1, i) == baseWeight) {
                pseudoCritical.push_back(edges[i][3]);
            }
        }

        return {critical, pseudoCritical};
    }
};
