// Problem: 677. Map Sum Pairs
// Link: https://leetcode.com/problems/map-sum-pairs/
// Difficulty: Medium
// Time Complexity: O(k) for insert and sum where k is key length
// Space Complexity: O(total key characters)

#include <string>
#include <unordered_map>

class TrieNode {
public:
    TrieNode* children[26] = {nullptr};
    int sum = 0;
};

class MapSum {
private:
    TrieNode* root;
    std::unordered_map<std::string, int> keyMap;

public:
    MapSum() {
        root = new TrieNode();
    }

    void insert(std::string key, int val) {
        int delta = val - keyMap[key];
        keyMap[key] = val;

        TrieNode* node = root;
        for (char c : key) {
            int idx = c - 'a';
            if (!node->children[idx]) {
                node->children[idx] = new TrieNode();
            }
            node = node->children[idx];
            node->sum += delta;
        }
    }

    int sum(std::string prefix) {
        TrieNode* node = root;
        for (char c : prefix) {
            int idx = c - 'a';
            if (!node->children[idx]) return 0;
            node = node->children[idx];
        }
        return node->sum;
    }
};
