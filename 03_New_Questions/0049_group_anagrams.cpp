// Problem: 49. Group Anagrams
// Link: https://leetcode.com/problems/group-anagrams/
// Difficulty: Medium
// Time Complexity: O(N * K log K) where N = words count, K = max word length
// Space Complexity: O(N * K)

#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

class Solution {
public:
    std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs) {
        std::unordered_map<std::string, std::vector<std::string>> anagramMap;
        for (const std::string& s : strs) {
            std::string key = s;
            std::sort(key.begin(), key.end());
            anagramMap[key].push_back(s);
        }

        std::vector<std::vector<std::string>> grouped;
        grouped.reserve(anagramMap.size());
        for (auto& pair : anagramMap) {
            grouped.push_back(std::move(pair.second));
        }
        return grouped;
    }
};\n