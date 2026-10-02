// Problem: 1462. Course Schedule IV
// Link: https://leetcode.com/problems/course-schedule-iv/
// Difficulty: Medium
// Time Complexity: O(V^3 + Q)
// Space Complexity: O(V^2)

#include <vector>

class Solution {
public:
    std::vector<bool> checkIfPrerequisite(int numCourses, std::vector<std::vector<int>>& prerequisites, std::vector<std::vector<int>>& queries) {
        std::vector<std::vector<bool>> isPrereq(numCourses, std::vector<bool>(numCourses, false));

        for (const auto& p : prerequisites) {
            isPrereq[p[0]][p[1]] = true;
        }

        // Floyd-Warshall transitive closure
        for (int k = 0; k < numCourses; ++k) {
            for (int i = 0; i < numCourses; ++i) {
                for (int j = 0; j < numCourses; ++j) {
                    if (isPrereq[i][k] && isPrereq[k][j]) {
                        isPrereq[i][j] = true;
                    }
                }
            }
        }

        std::vector<bool> result;
        result.reserve(queries.size());
        for (const auto& q : queries) {
            result.push_back(isPrereq[q[0]][q[1]]);
        }

        return result;
    }
};
