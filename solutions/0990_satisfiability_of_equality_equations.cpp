// Problem: 990. Satisfiability of Equality Equations
// Link: https://leetcode.com/problems/satisfiability-of-equality-equations/
// Difficulty: Medium
// Time Complexity: O(n)
// Space Complexity: O(1) auxiliary space (26 characters)

#include <vector>
#include <string>

class Solution {
private:
    int parent[26];

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

public:
    bool equationsPossible(std::vector<std::string>& equations) {
        for (int i = 0; i < 26; ++i) parent[i] = i;

        for (const std::string& eq : equations) {
            if (eq[1] == '=') {
                unite(eq[0] - 'a', eq[3] - 'a');
            }
        }

        for (const std::string& eq : equations) {
            if (eq[1] == '!') {
                if (find(eq[0] - 'a') == find(eq[3] - 'a')) {
                    return false;
                }
            }
        }

        return true;
    }
};
