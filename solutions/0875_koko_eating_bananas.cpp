// Problem: 875. Koko Eating Bananas
// Link: https://leetcode.com/problems/koko-eating-bananas/
// Difficulty: Medium
// Time Complexity: O(n log(max(piles)))
// Space Complexity: O(1)

#include <vector>
#include <algorithm>

class Solution {
public:
    int minEatingSpeed(std::vector<int>& piles, int h) {
        int low = 1;
        int high = *std::max_element(piles.begin(), piles.end());
        int answer = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            long long hoursNeeded = 0;

            for (int p : piles) {
                hoursNeeded += (p + mid - 1LL) / mid;
            }

            if (hoursNeeded <= h) {
                answer = mid;
                high = mid - 1; // Try slower speed
            } else {
                low = mid + 1;  // Speed too slow
            }
        }
        return answer;
    }
};
