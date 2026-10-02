// Problem: 208. Implement Trie (Prefix Tree)
// Link: https://leetcode.com/problems/implement-trie-prefix-tree/
// Difficulty: Medium
// Time Complexity: O(L) per operation where L = string length
// Space Complexity: O(total characters inserted)

#include <string>
#include <vector>

class Trie {
    struct TrieNode {
        std::vector<TrieNode*> children;
        bool isEnd;
        TrieNode() : children(26, nullptr), isEnd(false) {}
        ~TrieNode() {
            for (auto* child : children) delete child;
        }
    };

    TrieNode* root;

public:
    Trie() {
        root = new TrieNode();
    }

    ~Trie() {
        delete root;
    }

    void insert(std::string word) {
        TrieNode* curr = root;
        for (char c : word) {
            int idx = c - 'a';
            if (!curr->children[idx]) {
                curr->children[idx] = new TrieNode();
            }
            curr = curr->children[idx];
        }
        curr->isEnd = true;
    }

    bool search(std::string word) {
        TrieNode* node = findPrefix(word);
        return node && node->isEnd;
    }

    bool startsWith(std::string prefix) {
        return findPrefix(prefix) != nullptr;
    }

private:
    TrieNode* findPrefix(const std::string& prefix) {
        TrieNode* curr = root;
        for (char c : prefix) {
            int idx = c - 'a';
            if (!curr->children[idx]) return nullptr;
            curr = curr->children[idx];
        }
        return curr;
    }
};\n