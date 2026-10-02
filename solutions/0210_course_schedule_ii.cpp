// Problem: 210. Course Schedule II
// Link: https://leetcode.com/problems/course-schedule-ii/
// Difficulty: Medium
// Time Complexity: O(V + E)
// Space Complexity: O(V + E)

#include <vector>
#include <queue>

class Solution {
public:
    std::vector<int> findOrder(int numCourses, std::vector<std::vector<int>>& prerequisites) {
        std::vector<std::vector<int>> adj(numCourses);
        std::vector<int> inDegree(numCourses, 0);

        for (const auto& pre : prerequisites) {
            adj[pre[1]].push_back(pre[0]);
            ++inDegree[pre[0]];
        }

        std::queue<int> q;
        for (int i = 0; i < numCourses; ++i) {
            if (inDegree[i] == 0) q.push(i);
        }

        std::vector<int> order;
        while (!q.empty()) {
            int course = q.front();
            q.pop();
            order.push_back(course);

            for (int nextCourse : adj[course]) {
                if (--inDegree[nextCourse] == 0) {
                    q.push(nextCourse);
                }
            }
        }

        return order.size() == numCourses ? order : std::vector<int>();
    }
};
