// Problem: 79. Word Search
// Link: https://leetcode.com/problems/word-search/
// Difficulty: Medium
// Time Complexity: O(M * N * 3^L) where L = word length
// Space Complexity: O(L) recursion stack

#include <vector>
#include <string>

class Solution {
public:
    bool exist(std::vector<std::vector<char>>& board, std::string word) {
        int rows = board.size();
        int cols = board[0].size();

        for (int r = 0; r < rows; ++r) {
            for (int c = 0; c < cols; ++c) {
                if (dfs(board, word, 0, r, c)) return true;
            }
        }
        return false;
    }

private:
    bool dfs(std::vector<std::vector<char>>& board, const std::string& word, int index, int r, int c) {
        if (index == word.length()) return true;
        if (r < 0 || r >= board.size() || c < 0 || c >= board[0].size() || board[r][c] != word[index]) {
            return false;
        }

        char temp = board[r][c];
        board[r][c] = '#'; // Mark visited in-place

        bool found = dfs(board, word, index + 1, r + 1, c) ||
                     dfs(board, word, index + 1, r - 1, c) ||
                     dfs(board, word, index + 1, r, c + 1) ||
                     dfs(board, word, index + 1, r, c - 1);

        board[r][c] = temp; // Backtrack
        return found;
    }
};
