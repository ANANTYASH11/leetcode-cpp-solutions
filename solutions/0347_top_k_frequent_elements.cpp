// Problem: 347. Top K Frequent Elements
// Link: https://leetcode.com/problems/top-k-frequent-elements/
// Difficulty: Medium
// Time Complexity: O(n) via Bucket Sort
// Space Complexity: O(n)

#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> topKFrequent(std::vector<int>& nums, int k) {
        std::unordered_map<int, int> countMap;
        for (int num : nums) {
            ++countMap[num];
        }

        // Bucket sort by frequencies: bucket[freq] = list of numbers
        std::vector<std::vector<int>> buckets(nums.size() + 1);
        for (auto& [num, freq] : countMap) {
            buckets[freq].push_back(num);
        }

        std::vector<int> result;
        for (int i = nums.size(); i >= 1 && result.size() < k; --i) {
            for (int num : buckets[i]) {
                result.push_back(num);
                if (result.size() == k) break;
            }
        }
        return result;
    }
};
