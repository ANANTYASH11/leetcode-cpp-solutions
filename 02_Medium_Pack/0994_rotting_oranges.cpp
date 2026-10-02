// Problem: 994. Rotting Oranges
// Link: https://leetcode.com/problems/rotting-oranges/
// Difficulty: Medium
// Time Complexity: O(M * N)
// Space Complexity: O(M * N)

#include <vector>
#include <queue>

class Solution {
public:
    int orangesRotting(std::vector<std::vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        std::queue<std::pair<int, int>> q;
        int fresh = 0;

        for (int r = 0; r < rows; ++r) {
            for (int c = 0; c < cols; ++c) {
                if (grid[r][c] == 2) {
                    q.push({r, c});
                } else if (grid[r][c] == 1) {
                    ++fresh;
                }
            }
        }

        if (fresh == 0) return 0;

        int minutes = 0;
        const int dr[] = {1, -1, 0, 0};
        const int dc[] = {0, 0, 1, -1};

        while (!q.empty() && fresh > 0) {
            int levelSize = q.size();
            for (int i = 0; i < levelSize; ++i) {
                auto [r, c] = q.front();
                q.pop();

                for (int d = 0; d < 4; ++d) {
                    int nr = r + dr[d];
                    int nc = c + dc[d];

                    if (nr >= 0 && nr < rows && nc >= 0 && nc < cols && grid[nr][nc] == 1) {
                        grid[nr][nc] = 2;
                        --fresh;
                        q.push({nr, nc});
                    }
                }
            }
            ++minutes;
        }

        return fresh == 0 ? minutes : -1;
    }
};\n