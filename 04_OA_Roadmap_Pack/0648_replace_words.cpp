// Problem: 648. Replace Words
// Link: https://leetcode.com/problems/replace-words/
// Difficulty: Medium
// Time Complexity: O(d * l + s) where d is dictionary size, l is word length, s is sentence length
// Space Complexity: O(d * l)

#include <string>
#include <vector>
#include <sstream>

class TrieNode {
public:
    TrieNode* children[26] = {nullptr};
    bool isWord = false;
};

class Solution {
private:
    TrieNode* root;

    void insert(const std::string& word) {
        TrieNode* node = root;
        for (char c : word) {
            int idx = c - 'a';
            if (!node->children[idx]) {
                node->children[idx] = new TrieNode();
            }
            node = node->children[idx];
        }
        node->isWord = true;
    }

    std::string findShortestRoot(const std::string& word) {
        TrieNode* node = root;
        std::string prefix;
        for (char c : word) {
            int idx = c - 'a';
            if (!node->children[idx]) break;
            prefix.push_back(c);
            node = node->children[idx];
            if (node->isWord) return prefix;
        }
        return word;
    }

public:
    std::string replaceWords(std::vector<std::string>& dictionary, std::string sentence) {
        root = new TrieNode();
        for (const std::string& d : dictionary) {
            insert(d);
        }

        std::stringstream ss(sentence);
        std::string word, result;

        while (ss >> word) {
            if (!result.empty()) result += " ";
            result += findShortestRoot(word);
        }

        return result;
    }
};
