// Problem: 1319. Number of Operations to Make Network Connected
// Link: https://leetcode.com/problems/number-of-operations-to-make-network-connected/
// Difficulty: Medium
// Time Complexity: O(V + E)
// Space Complexity: O(V)

#include <vector>

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

    void unite(int i, int j) {
        int rootI = find(i);
        int rootJ = find(j);
        if (rootI != rootJ) {
            parent[rootI] = rootJ;
            --components;
        }
    }

    int getComponents() const {
        return components;
    }
};

class Solution {
public:
    int makeConnected(int n, std::vector<std::vector<int>>& connections) {
        if (connections.size() < (size_t)(n - 1)) {
            return -1;
        }

        DSU dsu(n);
        for (const auto& conn : connections) {
            dsu.unite(conn[0], conn[1]);
        }

        return dsu.getComponents() - 1;
    }
};
