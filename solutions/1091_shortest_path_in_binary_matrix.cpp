// Problem: 1091. Shortest Path in Binary Matrix
// Link: https://leetcode.com/problems/shortest-path-in-binary-matrix/
// Difficulty: Medium
// Time Complexity: O(n^2)
// Space Complexity: O(n^2)

#include <vector>
#include <queue>

class Solution {
public:
    int shortestPathBinaryMatrix(std::vector<std::vector<int>>& grid) {
        int n = grid.size();
        if (grid[0][0] != 0 || grid[n - 1][n - 1] != 0) return -1;

        std::queue<std::pair<int, int>> q;
        q.push({0, 0});
        grid[0][0] = 1; // Mark distance directly in grid

        int dirs[8][2] = {
            {-1, -1}, {-1, 0}, {-1, 1},
            {0, -1},           {0, 1},
            {1, -1},  {1, 0},  {1, 1}
        };

        while (!q.empty()) {
            auto [r, c] = q.front();
            int dist = grid[r][c];
            q.pop();

            if (r == n - 1 && c == n - 1) return dist;

            for (auto& dir : dirs) {
                int nr = r + dir[0];
                int nc = c + dir[1];

                if (nr >= 0 && nr < n && nc >= 0 && nc < n && grid[nr][nc] == 0) {
                    grid[nr][nc] = dist + 1;
                    q.push({nr, nc});
                }
            }
        }

        return -1;
    }
};
