// Problem: 133. Clone Graph
// Link: https://leetcode.com/problems/clone-graph/
// Difficulty: Medium
// Time Complexity: O(V + E)
// Space Complexity: O(V) for visited map

#include <vector>
#include <unordered_map>

class Node {
public:
    int val;
    std::vector<Node*> neighbors;
    Node() : val(0), neighbors(std::vector<Node*>()) {}
    Node(int _val) : val(_val), neighbors(std::vector<Node*>()) {}
    Node(int _val, std::vector<Node*> _neighbors) : val(_val), neighbors(_neighbors) {}
};

class Solution {
public:
    Node* cloneGraph(Node* node) {
        if (!node) return nullptr;
        std::unordered_map<Node*, Node*> clonedMap;
        return dfs(node, clonedMap);
    }

private:
    Node* dfs(Node* curr, std::unordered_map<Node*, Node*>& clonedMap) {
        if (clonedMap.count(curr)) return clonedMap[curr];

        Node* clone = new Node(curr->val);
        clonedMap[curr] = clone;

        for (Node* neighbor : curr->neighbors) {
            clone->neighbors.push_back(dfs(neighbor, clonedMap));
        }
        return clone;
    }
};
