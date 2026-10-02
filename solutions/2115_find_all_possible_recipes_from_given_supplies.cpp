// Problem: 2115. Find All Possible Recipes from Given Supplies
// Link: https://leetcode.com/problems/find-all-possible-recipes-from-given-supplies/
// Difficulty: Medium
// Time Complexity: O(V + E)
// Space Complexity: O(V + E)

#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <queue>

class Solution {
public:
    std::vector<std::string> findAllRecipes(std::vector<std::string>& recipes, std::vector<std::vector<std::string>>& ingredients, std::vector<std::string>& supplies) {
        std::unordered_set<std::string> supplySet(supplies.begin(), supplies.end());
        std::unordered_map<std::string, std::vector<std::string>> adj;
        std::unordered_map<std::string, int> inDegree;

        for (size_t i = 0; i < recipes.size(); ++i) {
            for (const std::string& ing : ingredients[i]) {
                if (!supplySet.count(ing)) {
                    adj[ing].push_back(recipes[i]);
                    ++inDegree[recipes[i]];
                }
            }
        }

        std::queue<std::string> q;
        for (const std::string& rec : recipes) {
            if (inDegree[rec] == 0) {
                q.push(rec);
            }
        }

        std::vector<std::string> result;
        while (!q.empty()) {
            std::string curr = q.front();
            q.pop();
            result.push_back(curr);

            for (const std::string& nextRec : adj[curr]) {
                if (--inDegree[nextRec] == 0) {
                    q.push(nextRec);
                }
            }
        }

        return result;
    }
};
