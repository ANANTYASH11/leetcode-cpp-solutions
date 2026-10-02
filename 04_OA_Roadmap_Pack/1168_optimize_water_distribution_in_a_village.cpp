// Problem: 1168. Optimize Water Distribution in a Village
// Link: https://leetcode.com/problems/optimize-water-distribution-in-a-village/
// Difficulty: Hard
// Time Complexity: O((V + E) log(V + E))
// Space Complexity: O(V + E)

#include <vector>
#include <algorithm>

class DSU {
private:
    std::vector<int> parent;

public:
    DSU(int n) : parent(n + 1) {
        for (int i = 0; i <= n; ++i) parent[i] = i;
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
            return true;
        }
        return false;
    }
};

class Solution {
public:
    int minCostToSupplyWater(int n, std::vector<int>& wells, std::vector<std::vector<int>>& pipes) {
        // Virtual node 0 represents the main water source
        std::vector<std::vector<int>> allEdges;
        allEdges.reserve(pipes.size() + n);

        for (int i = 0; i < n; ++i) {
            allEdges.push_back({0, i + 1, wells[i]});
        }
        for (const auto& pipe : pipes) {
            allEdges.push_back(pipe);
        }

        std::sort(allEdges.begin(), allEdges.end(),
                  [](const std::vector<int>& a, const std::vector<int>& b) {
                      return a[2] < b[2];
                  });

        DSU dsu(n);
        int totalCost = 0;

        for (const auto& edge : allEdges) {
            if (dsu.unite(edge[0], edge[1])) {
                totalCost += edge[2];
            }
        }

        return totalCost;
    }
};
