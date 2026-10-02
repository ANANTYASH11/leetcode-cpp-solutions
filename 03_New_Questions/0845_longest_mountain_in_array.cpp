// Problem: 845. Longest Mountain in Array
// Link: https://leetcode.com/problems/longest-mountain-in-array/
// Difficulty: Medium
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <vector>
#include <algorithm>

class Solution {
public:
    int longestMountain(std::vector<int>& arr) {
        int n = arr.size();
        int longest = 0;

        for (int i = 1; i < n - 1; ++i) {
            // Check if arr[i] is a peak
            if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
                int left = i - 1;
                int right = i + 1;

                while (left > 0 && arr[left] > arr[left - 1]) --left;
                while (right < n - 1 && arr[right] > arr[right + 1]) ++right;

                longest = std::max(longest, right - left + 1);
            }
        }
        return longest;
    }
};\n