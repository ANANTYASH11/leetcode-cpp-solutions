// Problem: 547. Number of Provinces
// Link: https://leetcode.com/problems/number-of-provinces/
// Difficulty: Medium
// Time Complexity: O(n^2)
// Space Complexity: O(n)

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
    int findCircleNum(std::vector<std::vector<int>>& isConnected) {
        int n = isConnected.size();
        DSU dsu(n);

        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (isConnected[i][j]) {
                    dsu.unite(i, j);
                }
            }
        }

        return dsu.getComponents();
    }
};
