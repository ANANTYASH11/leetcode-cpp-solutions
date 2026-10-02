// Problem: 733. Flood Fill
// Link: https://leetcode.com/problems/flood-fill/
// Difficulty: Easy
// Time Complexity: O(m * n)
// Space Complexity: O(m * n) recursion stack

#include <vector>

class Solution {
private:
    void dfs(std::vector<std::vector<int>>& image, int r, int c, int origColor, int newColor) {
        if (r < 0 || r >= image.size() || c < 0 || c >= image[0].size() || image[r][c] != origColor) {
            return;
        }

        image[r][c] = newColor;

        dfs(image, r + 1, c, origColor, newColor);
        dfs(image, r - 1, c, origColor, newColor);
        dfs(image, r, c + 1, origColor, newColor);
        dfs(image, r, c - 1, origColor, newColor);
    }

public:
    std::vector<std::vector<int>> floodFill(std::vector<std::vector<int>>& image, int sr, int sc, int color) {
        int origColor = image[sr][sc];
        if (origColor != color) {
            dfs(image, sr, sc, origColor, color);
        }
        return image;
    }
};
