// Problem: 295. Find Median from Data Stream
// Link: https://leetcode.com/problems/find-median-from-data-stream/
// Difficulty: Hard
// Time Complexity: O(log n) addNum, O(1) findMedian
// Space Complexity: O(n)

#include <queue>
#include <vector>

class MedianFinder {
private:
    std::priority_queue<int> maxHeap; // Lower half
    std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap; // Upper half

public:
    MedianFinder() {}

    void addNum(int num) {
        maxHeap.push(num);
        minHeap.push(maxHeap.top());
        maxHeap.pop();

        if (maxHeap.size() < minHeap.size()) {
            maxHeap.push(minHeap.top());
            minHeap.pop();
        }
    }

    double findMedian() {
        if (maxHeap.size() > minHeap.size()) {
            return maxHeap.top();
        }
        return (maxHeap.top() + minHeap.top()) / 2.0;
    }
};\n