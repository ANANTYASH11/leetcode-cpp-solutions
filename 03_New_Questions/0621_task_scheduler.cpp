// Problem: 621. Task Scheduler
// Link: https://leetcode.com/problems/task-scheduler/
// Difficulty: Medium
// Time Complexity: O(n)
// Space Complexity: O(1) - 26 task frequencies

#include <vector>
#include <algorithm>

class Solution {
public:
    int leastInterval(std::vector<char>& tasks, int n) {
        std::vector<int> freq(26, 0);
        for (char t : tasks) ++freq[t - 'A'];

        std::sort(freq.begin(), freq.end());
        int maxFreq = freq[25];
        int maxCount = 0;

        for (int i = 25; i >= 0 && freq[i] == maxFreq; --i) {
            ++maxCount;
        }

        int emptySlots = (maxFreq - 1) * (n - (maxCount - 1));
        int availableTasks = tasks.size() - maxFreq * maxCount;
        int idles = std::max(0, emptySlots - availableTasks);

        return tasks.size() + idles;
    }
};
