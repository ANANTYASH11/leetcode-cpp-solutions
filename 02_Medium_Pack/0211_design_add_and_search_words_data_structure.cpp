// Problem: 211. Design Add and Search Words Data Structure
// Link: https://leetcode.com/problems/design-add-and-search-words-data-structure/
// Difficulty: Medium
// Time Complexity: O(m) insert, O(26^dots * m) worst case search
// Space Complexity: O(total characters)

#include <string>
#include <vector>

class WordDictionary {
    struct TrieNode {
        std::vector<TrieNode*> children;
        bool isEnd;
        TrieNode() : children(26, nullptr), isEnd(false) {}
        ~TrieNode() {
            for (auto* c : children) delete c;
        }
    };

    TrieNode* root;

public:
    WordDictionary() {
        root = new TrieNode();
    }

    ~WordDictionary() {
        delete root;
    }

    void addWord(std::string word) {
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
        return searchInNode(word, 0, root);
    }

private:
    bool searchInNode(const std::string& word, int index, TrieNode* node) {
        if (!node) return false;
        if (index == word.length()) return node->isEnd;

        char c = word[index];
        if (c != '.') {
            return searchInNode(word, index + 1, node->children[c - 'a']);
        }

        for (int i = 0; i < 26; ++i) {
            if (node->children[i] && searchInNode(word, index + 1, node->children[i])) {
                return true;
            }
        }
        return false;
    }
};\n