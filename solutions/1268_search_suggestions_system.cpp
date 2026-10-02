// Problem: 1268. Search Suggestions System
// Link: https://leetcode.com/problems/search-suggestions-system/
// Difficulty: Medium
// Time Complexity: O(n log n + l * log n)
// Space Complexity: O(1) auxiliary space (excluding result)

#include <vector>
#include <string>
#include <algorithm>

class Solution {
public:
    std::vector<std::vector<std::string>> suggestedProducts(std::vector<std::string>& products, std::string searchWord) {
        std::sort(products.begin(), products.end());
        std::vector<std::vector<std::string>> result;

        int left = 0;
        int right = products.size() - 1;

        for (size_t i = 0; i < searchWord.length(); ++i) {
            char c = searchWord[i];

            while (left <= right && (products[left].length() <= i || products[left][i] != c)) {
                ++left;
            }
            while (left <= right && (products[right].length() <= i || products[right][i] != c)) {
                --right;
            }

            std::vector<std::string> currentSuggestions;
            for (int j = left; j <= std::min(left + 2, right); ++j) {
                currentSuggestions.push_back(products[j]);
            }
            result.push_back(currentSuggestions);
        }

        return result;
    }
};
