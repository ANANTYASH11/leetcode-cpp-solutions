// Problem: 11. Container With Most Water
// Link: https://leetcode.com/problems/container-with-most-water/
// Difficulty: Medium
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <vector>
#include <algorithm>

class Solution {
public:
    int maxArea(std::vector<int>& height) {
        int left = 0;
        int right = static_cast<int>(height.size()) - 1;
        int maxWater = 0;

        while (left < right) {
            int h = std::min(height[left], height[right]);
            int width = right - left;
            maxWater = std::max(maxWater, h * width);

            // Greedily advance the pointer with shorter height
            if (height[left] < height[right]) {
                ++left;
            } else {
                --right;
            }
        }
        return maxWater;
    }
};\n