// Problem: 85. Maximal Rectangle
// Link: https://leetcode.com/problems/maximal-rectangle/
// Difficulty: Hard
// Time Complexity: O(m * n)
// Space Complexity: O(n)

#include <vector>
#include <stack>
#include <algorithm>

class Solution {
private:
    int largestRectangleArea(const std::vector<int>& heights) {
        std::stack<int> st;
        int maxArea = 0;
        int n = heights.size();

        for (int i = 0; i <= n; ++i) {
            int h = (i == n ? 0 : heights[i]);
            while (!st.empty() && heights[st.top()] > h) {
                int height = heights[st.top()];
                st.pop();
                int width = st.empty() ? i : i - st.top() - 1;
                maxArea = std::max(maxArea, height * width);
            }
            st.push(i);
        }
        return maxArea;
    }

public:
    int maximalRectangle(std::vector<std::vector<char>>& matrix) {
        if (matrix.empty() || matrix[0].empty()) return 0;
        int m = matrix.size();
        int n = matrix[0].size();
        std::vector<int> heights(n, 0);
        int maxRect = 0;

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                heights[j] = (matrix[i][j] == '1') ? heights[j] + 1 : 0;
            }
            maxRect = std::max(maxRect, largestRectangleArea(heights));
        }

        return maxRect;
    }
};
