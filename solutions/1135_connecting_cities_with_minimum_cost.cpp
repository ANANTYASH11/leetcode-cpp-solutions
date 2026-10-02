// Problem: 1135. Connecting Cities With Minimum Cost
// Link: https://leetcode.com/problems/connecting-cities-with-minimum-cost/
// Difficulty: Medium
// Time Complexity: O(E log E)
// Space Complexity: O(V)

#include <vector>
#include <algorithm>

class DSU {
private:
    std::vector<int> parent;
    int components;

public:
    DSU(int n) : parent(n + 1), components(n) {
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
public:
    int minimumCost(int n, std::vector<std::vector<int>>& connections) {
        // Kruskal's algorithm
        std::sort(connections.begin(), connections.end(),
                  [](const std::vector<int>& a, const std::vector<int>& b) {
                      return a[2] < b[2];
                  });

        DSU dsu(n);
        int totalCost = 0;

        for (const auto& conn : connections) {
            if (dsu.unite(conn[0], conn[1])) {
                totalCost += conn[2];
            }
        }

        return dsu.getComponents() == 1 ? totalCost : -1;
    }
};
