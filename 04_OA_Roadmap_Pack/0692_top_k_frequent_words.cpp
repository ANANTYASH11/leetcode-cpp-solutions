// Problem: 692. Top K Frequent Words
// Link: https://leetcode.com/problems/top-k-frequent-words/
// Difficulty: Medium
// Time Complexity: O(n log k)
// Space Complexity: O(n)

#include <vector>
#include <string>
#include <unordered_map>
#include <queue>
#include <algorithm>

class Solution {
public:
    std::vector<std::string> topKFrequent(std::vector<std::string>& words, int k) {
        std::unordered_map<std::string, int> freq;
        for (const std::string& w : words) {
            ++freq[w];
        }

        // Custom comparator for min-heap:
        // Smaller frequency comes first; for same frequency, lexicographically greater comes first
        auto cmp = [](const std::pair<std::string, int>& a, const std::pair<std::string, int>& b) {
            if (a.second != b.second) {
                return a.second > b.second;
            }
            return a.first < b.first;
        };

        std::priority_queue<std::pair<std::string, int>,
                            std::vector<std::pair<std::string, int>>,
                            decltype(cmp)> minHeap(cmp);

        for (const auto& entry : freq) {
            minHeap.push(entry);
            if (minHeap.size() > k) {
                minHeap.pop();
            }
        }

        std::vector<std::string> result;
        while (!minHeap.empty()) {
            result.push_back(minHeap.top().first);
            minHeap.pop();
        }

        std::reverse(result.begin(), result.end());
        return result;
    }
};
