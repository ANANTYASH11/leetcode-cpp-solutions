// Problem: 1579. Remove Max Number of Edges to Keep Graph Fully Traversable
// Link: https://leetcode.com/problems/remove-max-number-of-edges-to-keep-graph-fully-traversable/
// Difficulty: Hard
// Time Complexity: O(E * alpha(V))
// Space Complexity: O(V)

#include <vector>

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
    int maxNumEdgesToRemove(int n, std::vector<std::vector<int>>& edges) {
        DSU alice(n), bob(n);
        int edgesUsed = 0;

        // Pass 1: Common edges (type 3)
        for (const auto& e : edges) {
            if (e[0] == 3) {
                bool uA = alice.unite(e[1], e[2]);
                bool uB = bob.unite(e[1], e[2]);
                if (uA || uB) {
                    ++edgesUsed;
                }
            }
        }

        // Pass 2: Type 1 (Alice) and Type 2 (Bob)
        for (const auto& e : edges) {
            if (e[0] == 1) {
                if (alice.unite(e[1], e[2])) {
                    ++edgesUsed;
                }
            } else if (e[0] == 2) {
                if (bob.unite(e[1], e[2])) {
                    ++edgesUsed;
                }
            }
        }

        if (alice.getComponents() == 1 && bob.getComponents() == 1) {
            return edges.size() - edgesUsed;
        }

        return -1;
    }
};
