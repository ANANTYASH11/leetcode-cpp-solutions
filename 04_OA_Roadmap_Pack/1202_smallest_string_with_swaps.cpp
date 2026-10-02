// Problem: 1202. Smallest String With Swaps
// Link: https://leetcode.com/problems/smallest-string-with-swaps/
// Difficulty: Medium
// Time Complexity: O(n log n)
// Space Complexity: O(n)

#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

class DSU {
private:
    std::vector<int> parent;

public:
    DSU(int n) : parent(n) {
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
        }
    }
};

class Solution {
public:
    std::string smallestStringWithSwaps(std::string s, std::vector<std::vector<int>>& pairs) {
        int n = s.length();
        DSU dsu(n);

        for (const auto& p : pairs) {
            dsu.unite(p[0], p[1]);
        }

        std::unordered_map<int, std::vector<int>> components;
        for (int i = 0; i < n; ++i) {
            components[dsu.find(i)].push_back(i);
        }

        for (auto& [root, indices] : components) {
            std::string chars = "";
            for (int idx : indices) {
                chars += s[idx];
            }
            std::sort(chars.begin(), chars.end());

            for (size_t i = 0; i < indices.size(); ++i) {
                s[indices[i]] = chars[i];
            }
        }

        return s;
    }
};
