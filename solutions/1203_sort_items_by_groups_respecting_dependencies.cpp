// Problem: 1203. Sort Items by Groups Respecting Dependencies
// Link: https://leetcode.com/problems/sort-items-by-groups-respecting-dependencies/
// Difficulty: Hard
// Time Complexity: O(V + E)
// Space Complexity: O(V + E)

#include <vector>
#include <queue>
#include <unordered_map>

class Solution {
private:
    std::vector<int> topoSort(const std::vector<std::vector<int>>& adj, std::vector<int>& inDegree, int count) {
        std::vector<int> order;
        std::queue<int> q;

        for (int i = 0; i < count; ++i) {
            if (inDegree[i] == 0) q.push(i);
        }

        while (!q.empty()) {
            int u = q.front();
            q.pop();
            order.push_back(u);

            for (int v : adj[u]) {
                if (--inDegree[v] == 0) {
                    q.push(v);
                }
            }
        }

        return order.size() == count ? order : std::vector<int>();
    }

public:
    std::vector<int> sortItems(int n, int m, std::vector<int>& group, std::vector<std::vector<int>>& beforeItems) {
        // Assign items with no group to a new unique group
        for (int i = 0; i < n; ++i) {
            if (group[i] == -1) {
                group[i] = m++;
            }
        }

        std::vector<std::vector<int>> itemAdj(n);
        std::vector<int> itemInDegree(n, 0);

        std::vector<std::vector<int>> groupAdj(m);
        std::vector<int> groupInDegree(m, 0);

        for (int v = 0; v < n; ++v) {
            for (int u : beforeItems[v]) {
                itemAdj[u].push_back(v);
                ++itemInDegree[v];

                if (group[u] != group[v]) {
                    groupAdj[group[u]].push_back(group[v]);
                    ++groupInDegree[group[v]];
                }
            }
        }

        std::vector<int> itemOrder = topoSort(itemAdj, itemInDegree, n);
        std::vector<int> groupOrder = topoSort(groupAdj, groupInDegree, m);

        if (itemOrder.empty() || groupOrder.empty()) {
            return {};
        }

        std::unordered_map<int, std::vector<int>> groupToItems;
        for (int item : itemOrder) {
            groupToItems[group[item]].push_back(item);
        }

        std::vector<int> result;
        for (int grp : groupOrder) {
            for (int item : groupToItems[grp]) {
                result.push_back(item);
            }
        }

        return result;
    }
};
