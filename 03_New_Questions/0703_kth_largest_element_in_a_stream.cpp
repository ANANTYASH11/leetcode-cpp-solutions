// Problem: 703. Kth Largest Element in a Stream
// Link: https://leetcode.com/problems/kth-largest-element-in-a-stream/
// Difficulty: Easy
// Time Complexity: O(n log k) init, O(log k) add
// Space Complexity: O(k)

#include <vector>
#include <queue>

class KthLargest {
    std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;
    int kSize;

public:
    KthLargest(int k, std::vector<int>& nums) : kSize(k) {
        for (int num : nums) {
            add(num);
        }
    }

    int add(int val) {
        minHeap.push(val);
        if (minHeap.size() > kSize) {
            minHeap.pop();
        }
        return minHeap.top();
    }
};\n