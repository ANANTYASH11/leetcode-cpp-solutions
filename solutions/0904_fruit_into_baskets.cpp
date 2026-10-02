// Problem: 904. Fruit Into Baskets
// Link: https://leetcode.com/problems/fruit-into-baskets/
// Difficulty: Medium
// Time Complexity: O(n)
// Space Complexity: O(1) - at most 3 distinct keys

#include <vector>
#include <unordered_map>
#include <algorithm>

class Solution {
public:
    int totalFruit(std::vector<int>& fruits) {
        std::unordered_map<int, int> basket;
        int left = 0;
        int maxFruits = 0;

        for (int right = 0; right < fruits.size(); ++right) {
            ++basket[fruits[right]];

            while (basket.size() > 2) {
                --basket[fruits[left]];
                if (basket[fruits[left]] == 0) {
                    basket.erase(fruits[left]);
                }
                ++left;
            }
            maxFruits = std::max(maxFruits, right - left + 1);
        }
        return maxFruits;
    }
};\n