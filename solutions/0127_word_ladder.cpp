// Problem: 127. Word Ladder
// Link: https://leetcode.com/problems/word-ladder/
// Difficulty: Hard
// Time Complexity: O(M^2 * N) where M = word length, N = dictionary size
// Space Complexity: O(M * N)

#include <string>
#include <vector>
#include <unordered_set>
#include <queue>

class Solution {
public:
    int ladderLength(std::string beginWord, std::string endWord, std::vector<std::string>& wordList) {
        std::unordered_set<std::string> dict(wordList.begin(), wordList.end());
        if (!dict.count(endWord)) return 0;

        std::queue<std::string> q;
        q.push(beginWord);
        int steps = 1;

        while (!q.empty()) {
            int levelSize = q.size();
            for (int i = 0; i < levelSize; ++i) {
                std::string word = q.front();
                q.pop();

                if (word == endWord) return steps;

                for (int j = 0; j < word.length(); ++j) {
                    char original = word[j];
                    for (char c = 'a'; c <= 'z'; ++c) {
                        word[j] = c;
                        if (dict.count(word)) {
                            dict.erase(word);
                            q.push(word);
                        }
                    }
                    word[j] = original;
                }
            }
            ++steps;
        }
        return 0;
    }
};\n