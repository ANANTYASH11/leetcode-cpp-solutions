// Problem: 1631. Path With Minimum Effort
// Link: https://leetcode.com/problems/path-with-minimum-effort/
// Difficulty: Medium
// Time Complexity: O(m * n log(m * n))
// Space Complexity: O(m * n)

#include <vector>
#include <queue>
#include <tuple>
#include <cmath>
#include <climits>
#include <algorithm>

class Solution {
public:
    int minimumEffortPath(std::vector<std::vector<int>>& heights) {
        int m = heights.size();
        int n = heights[0].size();
        std::vector<std::vector<int>> effort(m, std::vector<int>(n, INT_MAX));

        // Min-heap storing (effort, row, col)
        std::priority_queue<std::tuple<int, int, int>,
                            std::vector<std::tuple<int, int, int>>,
                            std::greater<std::tuple<int, int, int>>> pq;

        effort[0][0] = 0;
        pq.push({0, 0, 0});

        int dirs[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

        while (!pq.empty()) {
            auto [eff, r, c] = pq.top();
            pq.pop();

            if (r == m - 1 && c == n - 1) return eff;
            if (eff > effort[r][c]) continue;

            for (auto& dir : dirs) {
                int nr = r + dir[0];
                int nc = c + dir[1];

                if (nr >= 0 && nr < m && nc >= 0 && nc < n) {
                    int stepEffort = std::max(eff, std::abs(heights[nr][nc] - heights[r][c]));
                    if (stepEffort < effort[nr][nc]) {
                        effort[nr][nc] = stepEffort;
                        pq.push({stepEffort, nr, nc});
                    }
                }
            }
        }

        return 0;
    }
};
