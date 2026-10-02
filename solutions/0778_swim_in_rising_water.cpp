// Problem: 778. Swim in Rising Water
// Link: https://leetcode.com/problems/swim-in-rising-water/
// Difficulty: Hard
// Time Complexity: O(n^2 log n)
// Space Complexity: O(n^2)

#include <vector>
#include <queue>
#include <tuple>
#include <algorithm>

class Solution {
public:
    int swimInWater(std::vector<std::vector<int>>& grid) {
        int n = grid.size();
        std::vector<std::vector<bool>> visited(n, std::vector<bool>(n, false));

        // Min-heap storing (elevation, row, col)
        std::priority_queue<std::tuple<int, int, int>,
                            std::vector<std::tuple<int, int, int>>,
                            std::greater<std::tuple<int, int, int>>> pq;

        pq.push({grid[0][0], 0, 0});
        visited[0][0] = true;

        std::vector<std::pair<int, int>> dirs = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

        while (!pq.empty()) {
            auto [t, r, c] = pq.top();
            pq.pop();

            if (r == n - 1 && c == n - 1) {
                return t;
            }

            for (const auto& [dr, dc] : dirs) {
                int nr = r + dr;
                int nc = c + dc;

                if (nr >= 0 && nr < n && nc >= 0 && nc < n && !visited[nr][nc]) {
                    visited[nr][nc] = true;
                    pq.push({std::max(t, grid[nr][nc]), nr, nc});
                }
            }
        }

        return 0;
    }
};
