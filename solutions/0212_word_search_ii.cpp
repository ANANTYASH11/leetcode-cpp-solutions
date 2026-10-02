// Problem: 212. Word Search II
// Link: https://leetcode.com/problems/word-search-ii/
// Difficulty: Hard
// Time Complexity: O(M * N * 4 * 3^(L-1)) where L is maximum word length
// Space Complexity: O(total characters in words)

#include <vector>
#include <string>

class Solution {
    struct TrieNode {
        TrieNode* children[26] = {nullptr};
        std::string word = "";
        ~TrieNode() {
            for (int i = 0; i < 26; ++i) delete children[i];
        }
    };

    void insert(TrieNode* root, const std::string& word) {
        TrieNode* curr = root;
        for (char c : word) {
            int idx = c - 'a';
            if (!curr->children[idx]) curr->children[idx] = new TrieNode();
            curr = curr->children[idx];
        }
        curr->word = word;
    }

public:
    std::vector<std::string> findWords(std::vector<std::vector<char>>& board, std::vector<std::string>& words) {
        TrieNode* root = new TrieNode();
        for (const std::string& w : words) insert(root, w);

        std::vector<std::string> result;
        int rows = board.size();
        int cols = board[0].size();

        for (int r = 0; r < rows; ++r) {
            for (int c = 0; c < cols; ++c) {
                dfs(board, r, c, root, result);
            }
        }

        delete root;
        return result;
    }

private:
    void dfs(std::vector<std::vector<char>>& board, int r, int c, TrieNode* node, std::vector<std::string>& result) {
        if (r < 0 || r >= board.size() || c < 0 || c >= board[0].size() || board[r][c] == '#') return;

        char originalChar = board[r][c];
        int idx = originalChar - 'a';
        TrieNode* nextNode = node->children[idx];
        if (!nextNode) return;

        if (!nextNode->word.empty()) {
            result.push_back(nextNode->word);
            nextNode->word = ""; // Prevent duplicate entries
        }

        board[r][c] = '#'; // Mark visited
        dfs(board, r + 1, c, nextNode, result);
        dfs(board, r - 1, c, nextNode, result);
        dfs(board, r, c + 1, nextNode, result);
        dfs(board, r, c - 1, nextNode, result);
        board[r][c] = originalChar; // Backtrack
    }
};\n