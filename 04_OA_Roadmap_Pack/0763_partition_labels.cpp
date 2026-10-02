// Problem: 763. Partition Labels
// Link: https://leetcode.com/problems/partition-labels/
// Difficulty: Medium
// Time Complexity: O(n)
// Space Complexity: O(1) auxiliary space (26 characters)

#include <vector>
#include <string>
#include <algorithm>

class Solution {
public:
    std::vector<int> partitionLabels(std::string s) {
        std::vector<int> last(26, 0);
        for (int i = 0; i < s.length(); ++i) {
            last[s[i] - 'a'] = i;
        }

        std::vector<int> partitions;
        int start = 0;
        int end = 0;

        for (int i = 0; i < s.length(); ++i) {
            end = std::max(end, last[s[i] - 'a']);
            if (i == end) {
                partitions.push_back(end - start + 1);
                start = i + 1;
            }
        }

        return partitions;
    }
};
