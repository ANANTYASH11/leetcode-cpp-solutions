// Problem: 1102. Path With Maximum Minimum Value
// Link: https://leetcode.com/problems/path-with-maximum-minimum-value/
// Difficulty: Medium
// Time Complexity: O(R * C log(R * C))
// Space Complexity: O(R * C)

#include <vector>
#include <queue>
#include <tuple>
#include <algorithm>

class Solution {
public:
    int maximumMinimumPath(std::vector<std::vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        std::vector<std::vector<bool>> visited(m, std::vector<bool>(n, false));

        // Max-heap storing (min_val_on_path, r, c)
        std::priority_queue<std::tuple<int, int, int>> pq;
        pq.push({grid[0][0], 0, 0});
        visited[0][0] = true;

        int dirs[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

        while (!pq.empty()) {
            auto [score, r, c] = pq.top();
            pq.pop();

            if (r == m - 1 && c == n - 1) {
                return score;
            }

            for (auto& dir : dirs) {
                int nr = r + dir[0];
                int nc = c + dir[1];

                if (nr >= 0 && nr < m && nc >= 0 && nc < n && !visited[nr][nc]) {
                    visited[nr][nc] = true;
                    pq.push({std::min(score, grid[nr][nc]), nr, nc});
                }
            }
        }

        return 0;
    }
};
