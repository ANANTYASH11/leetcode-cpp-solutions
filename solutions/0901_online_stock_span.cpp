// Problem: 901. Online Stock Span
// Link: https://leetcode.com/problems/online-stock-span/
// Difficulty: Medium
// Time Complexity: O(1) amortized per next() query
// Space Complexity: O(n)

#include <stack>
#include <utility>

class StockSpanner {
private:
    std::stack<std::pair<int, int>> st; // pair: (price, span)

public:
    StockSpanner() {}

    int next(int price) {
        int span = 1;
        while (!st.empty() && st.top().first <= price) {
            span += st.top().second;
            st.pop();
        }
        st.push({price, span});
        return span;
    }
};
