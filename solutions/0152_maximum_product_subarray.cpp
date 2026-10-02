// Problem: 152. Maximum Product Subarray
// Link: https://leetcode.com/problems/maximum-product-subarray/
// Difficulty: Medium
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <vector>
#include <algorithm>

class Solution {
public:
    int maxProduct(std::vector<int>& nums) {
        int maxProd = nums[0];
        int minProd = nums[0];
        int result = nums[0];

        for (int i = 1; i < nums.size(); ++i) {
            int val = nums[i];
            if (val < 0) {
                std::swap(maxProd, minProd);
            }
            maxProd = std::max(val, maxProd * val);
            minProd = std::min(val, minProd * val);
            result = std::max(result, maxProd);
        }
        return result;
    }
};
