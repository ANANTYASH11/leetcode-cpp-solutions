# 🚀 DSA Preparation Roadmap: From Zero to OA Ready

**Author:** [Anant Yash](https://leetcode.com/u/ANANTYASH11/)  
**Curriculum:** 30 Essential Algorithmic Patterns (OA & Technical Interview Ready)  
**Language:** C++ (C++17 / C++20)  
**Total Problem Slots:** 180 (179 Unique Problems) | **Status:** ✅ 100% Solved (180/180)  

---

## 📊 Pattern Summary & Progress Index

| # | Pattern / Category | Total | Solved | Status | Core Patterns & Concepts |
|---|-------------------|:-----:|:------:|:------:|--------------------------|
| 1 | [Sliding Window](#1-sliding-window) | 6 | 6 | [x] Complete | Dynamic Window, Frequency Window, Character Counts, Shrink-Expand |
| 2 | [Two Pointers](#2-two-pointers) | 6 | 6 | [x] Complete | Left/Right Converge, Trapping Water, Multi-Pointer Target Sums |
| 3 | [Fast/Slow Pointers (Linked List)](#3-fastslow-pointers-linked-list) | 6 | 6 | [x] Complete | Floyd Cycle Detection, Midpoint, Kth from End, Palindrome Check |
| 4 | [Binary Search on Sorted Data](#4-binary-search-on-sorted-data) | 6 | 6 | [x] Complete | Classic Search, Rotated Array, Boundary Search, Peak Finding |
| 5 | [Binary Search on Answer](#5-binary-search-on-answer) | 6 | 6 | [x] Complete | Monotonic Predicate, Feasibility Checks, Min-Max Optimization |
| 6 | [Hashing / Frequency Maps](#6-hashing--frequency-maps) | 6 | 6 | [x] Complete | Hash Tables, Anagrams, Frequency Buckets, Sequence Tracking |
| 7 | [Prefix Sum / Running Sum](#7-prefix-sum--running-sum) | 6 | 6 | [x] Complete | Subarray Sums, Remainder Modulo K, Pivot Indices |
| 8 | [Difference Array / Range Updates](#8-difference-array--range-updates) | 6 | 6 | [x] Complete | Range Addition, Coordinate Compression, Prefix Reconciliation |
| 9 | [Monotonic Stack](#9-monotonic-stack) | 6 | 6 | [x] Complete | Next Greater Element, Histogram Areas, Maximal Rectangles |
| 10 | [Monotonic Queue / Deque](#10-monotonic-queue--deque) | 6 | 6 | [x] Complete | Sliding Window Maximum, Constrained DP, Subarray Bounds |
| 11 | [Heap / Top K](#11-heap--top-k) | 6 | 6 | [x] Complete | Min/Max Heaps, Kth Order Statistics, Priority Scheduling |
| 12 | [Intervals](#12-intervals) | 6 | 6 | [x] Complete | Merging Intervals, Non-overlapping Sets, Room Allocation |
| 13 | [Greedy Scheduling / Sorting](#13-greedy-scheduling--sorting) | 6 | 6 | [x] Complete | Jump Game, Task Scheduler, Partition Labels, Gas Circuits |
| 14 | [Linked List Manipulation](#14-linked-list-manipulation) | 6 | 6 | [x] Complete | K-Group Reversal, Merging Lists, Deep Copy with Random Pointers |
| 15 | [Tree DFS](#15-tree-dfs) | 6 | 6 | [x] Complete | Depth, Path Sums, Tree Diameter, Maximum Path Sum |
| 16 | [Tree BFS / Level Order](#16-tree-bfs--level-order) | 6 | 6 | [x] Complete | Level Order, Zigzag Traversal, Tree Right Side View, Level Maximums |
| 17 | [BST Problems](#17-bst-problems) | 6 | 6 | [x] Complete | BST Validation, Inorder Traversal, Node Deletion, LCA |
| 18 | [Backtracking Basics](#18-backtracking-basics) | 6 | 6 | [x] Complete | Permutations, Combinations, Subsets, Combination Sum |
| 19 | [Backtracking with Constraints](#19-backtracking-with-constraints) | 6 | 6 | [x] Complete | Phone Mnemonics, Word Search, Palindrome Partitioning, N-Queens |
| 20 | [Graph BFS / DFS](#20-graph-bfs--dfs) | 6 | 6 | [x] Complete | Flood Fill, Island Counting, Rotting Oranges, Shortest Path Grid |
| 21 | [Topological Sort / DAG](#21-topological-sort--dag) | 6 | 6 | [x] Complete | Kahn Algorithm, Course Schedule, Safe States, Group Dependencies |
| 22 | [Union Find / DSU](#22-union-find--dsu) | 6 | 6 | [x] Complete | Connected Components, Cycle Detection, Redundant Connections |
| 23 | [Shortest Path](#23-shortest-path) | 6 | 6 | [x] Complete | Dijkstra, Bellman-Ford, Floyd-Warshall, Probabilistic Paths |
| 24 | [MST / Graph Greedy](#24-mst--graph-greedy) | 6 | 6 | [x] Complete | Kruskal, Prim, Virtual Nodes, Critical MST Edges |
| 25 | [Trie](#25-trie) | 6 | 6 | [x] Complete | Prefix Trees, Wildcard Search, Boggle / Word Search II, Autocomplete |
| 26 | [Bit Manipulation](#26-bit-manipulation) | 6 | 6 | [x] Complete | XOR Single Numbers, Hamming Weight, Counting Bits, Reverse Bits |
| 27 | [1D DP Basics](#27-1d-dp-basics) | 6 | 6 | [x] Complete | Climbing Stairs, House Robber, Coin Change, LIS |
| 28 | [Knapsack / Subset DP](#28-knapsack--subset-dp) | 6 | 6 | [x] Complete | 0/1 Knapsack, Target Sum, Coin Change II, Profitable Schemes |
| 29 | [Grid DP](#29-grid-dp) | 6 | 6 | [x] Complete | Unique Paths, Minimum Path Sum, Maximal Square, Falling Path Sum |
| 30 | [String DP / Sequence DP](#30-string-dp--sequence-dp) | 6 | 6 | [x] Complete | LCS, Edit Distance, Distinct Subsequences, Interleaving Strings |
| **Total** | **30 High-Yield Patterns** | **180** | **180** | **✅ 100%** | **Full Online Assessment Mastery** |

---

## 1. Sliding Window
**Core Patterns:** Dynamic Window, Frequency Window, Character Counts, Shrink-Expand

| # | Problem | Difficulty | Status | Solution File | LeetCode Link | Time Complexity | Space Complexity |
|---|---------|:----------:|:------:|---------------|---------------|:---------------:|:----------------:|
| 3 | Longest Substring Without Repeating Characters | Medium | [x] Solved | [`0003_longest_substring_without_repeating_characters.cpp`](./03_New_Questions/0003_longest_substring_without_repeating_characters.cpp) | [Open Problem](https://leetcode.com/problems/longest-substring-without-repeating-characters/) | `O(n)` | `O(min(m, n)) where m is size of alphabet` |
| 76 | Minimum Window Substring | Hard | [x] Solved | [`0076_minimum_window_substring.cpp`](./03_New_Questions/0076_minimum_window_substring.cpp) | [Open Problem](https://leetcode.com/problems/minimum-window-substring/) | `O(m + n)` | `O(1) - fixed 128 ASCII array` |
| 209 | Minimum Size Subarray Sum | Medium | [x] Solved | [`0209_minimum_size_subarray_sum.cpp`](./03_New_Questions/0209_minimum_size_subarray_sum.cpp) | [Open Problem](https://leetcode.com/problems/minimum-size-subarray-sum/) | `O(n)` | `O(1)` |
| 424 | Longest Repeating Character Replacement | Medium | [x] Solved | [`0424_longest_repeating_character_replacement.cpp`](./03_New_Questions/0424_longest_repeating_character_replacement.cpp) | [Open Problem](https://leetcode.com/problems/longest-repeating-character-replacement/) | `O(n)` | `O(1) - 26 uppercase alphabet` |
| 567 | Permutation in String | Medium | [x] Solved | [`0567_permutation_in_string.cpp`](./03_New_Questions/0567_permutation_in_string.cpp) | [Open Problem](https://leetcode.com/problems/permutation-in-string/) | `O(l1 + l2)` | `O(1)` |
| 904 | Fruit Into Baskets | Medium | [x] Solved | [`0904_fruit_into_baskets.cpp`](./03_New_Questions/0904_fruit_into_baskets.cpp) | [Open Problem](https://leetcode.com/problems/fruit-into-baskets/) | `O(n)` | `O(1) - at most 3 distinct keys` |

---

## 2. Two Pointers
**Core Patterns:** Left/Right Converge, Trapping Water, Multi-Pointer Target Sums

| # | Problem | Difficulty | Status | Solution File | LeetCode Link | Time Complexity | Space Complexity |
|---|---------|:----------:|:------:|---------------|---------------|:---------------:|:----------------:|
| 11 | Container With Most Water | Medium | [x] Solved | [`0011_container_with_most_water.cpp`](./03_New_Questions/0011_container_with_most_water.cpp) | [Open Problem](https://leetcode.com/problems/container-with-most-water/) | `O(n)` | `O(1)` |
| 15 | 3Sum | Medium | [x] Solved | [`0015_3sum.cpp`](./03_New_Questions/0015_3sum.cpp) | [Open Problem](https://leetcode.com/problems/3sum/) | `O(n^2)` | `O(1) auxiliary (excluding output)` |
| 16 | 3Sum Closest | Medium | [x] Solved | [`0016_3sum_closest.cpp`](./04_OA_Roadmap_Pack/0016_3sum_closest.cpp) | [Open Problem](https://leetcode.com/problems/3sum-closest/) | `O(n^2)` | `O(1) auxiliary` |
| 18 | 4Sum | Medium | [x] Solved | [`0018_4sum.cpp`](./04_OA_Roadmap_Pack/0018_4sum.cpp) | [Open Problem](https://leetcode.com/problems/4sum/) | `O(n^3)` | `O(1) auxiliary` |
| 42 | Trapping Rain Water | Hard | [x] Solved | [`0042_trapping_rain_water.cpp`](./03_New_Questions/0042_trapping_rain_water.cpp) | [Open Problem](https://leetcode.com/problems/trapping-rain-water/) | `O(n)` | `O(1)` |
| 167 | Two Sum II - Input Array Is Sorted | Medium | [x] Solved | [`0167_two_sum_ii_input_array_is_sorted.cpp`](./03_New_Questions/0167_two_sum_ii_input_array_is_sorted.cpp) | [Open Problem](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/) | `O(n)` | `O(1)` |

---

## 3. Fast/Slow Pointers (Linked List)
**Core Patterns:** Floyd Cycle Detection, Midpoint, Kth from End, Palindrome Check

| # | Problem | Difficulty | Status | Solution File | LeetCode Link | Time Complexity | Space Complexity |
|---|---------|:----------:|:------:|---------------|---------------|:---------------:|:----------------:|
| 141 | Linked List Cycle | Easy | [x] Solved | [`0141_linked_list_cycle.cpp`](./01_Easy_Starter_Pack/0141_linked_list_cycle.cpp) | [Open Problem](https://leetcode.com/problems/linked-list-cycle/) | `O(n)` | `O(1)` |
| 142 | Linked List Cycle II | Medium | [x] Solved | [`0142_linked_list_cycle_ii.cpp`](./02_Medium_Pack/0142_linked_list_cycle_ii.cpp) | [Open Problem](https://leetcode.com/problems/linked-list-cycle-ii/) | `O(n)` | `O(1)` |
| 19 | Remove Nth Node From End of List | Medium | [x] Solved | [`0019_remove_nth_node_from_end_of_list.cpp`](./02_Medium_Pack/0019_remove_nth_node_from_end_of_list.cpp) | [Open Problem](https://leetcode.com/problems/remove-nth-node-from-end-of-list/) | `O(n)` | `O(1)` |
| 876 | Middle of the Linked List | Easy | [x] Solved | [`0876_middle_of_the_linked_list.cpp`](./01_Easy_Starter_Pack/0876_middle_of_the_linked_list.cpp) | [Open Problem](https://leetcode.com/problems/middle-of-the-linked-list/) | `O(n)` | `O(1)` |
| 160 | Intersection of Two Linked Lists | Easy | [x] Solved | [`0160_intersection_of_two_linked_lists.cpp`](./01_Easy_Starter_Pack/0160_intersection_of_two_linked_lists.cpp) | [Open Problem](https://leetcode.com/problems/intersection-of-two-linked-lists/) | `O(m + n)` | `O(1)` |
| 234 | Palindrome Linked List | Easy | [x] Solved | [`0234_palindrome_linked_list.cpp`](./01_Easy_Starter_Pack/0234_palindrome_linked_list.cpp) | [Open Problem](https://leetcode.com/problems/palindrome-linked-list/) | `O(n)` | `O(1)` |

---

## 4. Binary Search on Sorted Data
**Core Patterns:** Classic Search, Rotated Array, Boundary Search, Peak Finding

| # | Problem | Difficulty | Status | Solution File | LeetCode Link | Time Complexity | Space Complexity |
|---|---------|:----------:|:------:|---------------|---------------|:---------------:|:----------------:|
| 33 | Search in Rotated Sorted Array | Medium | [x] Solved | [`0033_search_in_rotated_sorted_array.cpp`](./03_New_Questions/0033_search_in_rotated_sorted_array.cpp) | [Open Problem](https://leetcode.com/problems/search-in-rotated-sorted-array/) | `O(log n)` | `O(1)` |
| 34 | Find First and Last Position of Element in Sorted Array | Medium | [x] Solved | [`0034_find_first_and_last_position_of_element_in_sorted_array.cpp`](./04_OA_Roadmap_Pack/0034_find_first_and_last_position_of_element_in_sorted_array.cpp) | [Open Problem](https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/) | `O(log n)` | `O(1)` |
| 35 | Search Insert Position | Easy | [x] Solved | [`0035_search_insert_position.cpp`](./01_Easy_Starter_Pack/0035_search_insert_position.cpp) | [Open Problem](https://leetcode.com/problems/search-insert-position/) | `O(log n)` | `O(1)` |
| 153 | Find Minimum in Rotated Sorted Array | Medium | [x] Solved | [`0153_find_minimum_in_rotated_sorted_array.cpp`](./03_New_Questions/0153_find_minimum_in_rotated_sorted_array.cpp) | [Open Problem](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/) | `O(log n)` | `O(1)` |
| 162 | Find Peak Element | Medium | [x] Solved | [`0162_find_peak_element.cpp`](./04_OA_Roadmap_Pack/0162_find_peak_element.cpp) | [Open Problem](https://leetcode.com/problems/find-peak-element/) | `O(log n)` | `O(1)` |
| 704 | Binary Search | Easy | [x] Solved | [`0704_binary_search.cpp`](./01_Easy_Starter_Pack/0704_binary_search.cpp) | [Open Problem](https://leetcode.com/problems/binary-search/) | `O(log n)` | `O(1)` |

---

## 5. Binary Search on Answer
**Core Patterns:** Monotonic Predicate, Feasibility Checks, Min-Max Optimization

| # | Problem | Difficulty | Status | Solution File | LeetCode Link | Time Complexity | Space Complexity |
|---|---------|:----------:|:------:|---------------|---------------|:---------------:|:----------------:|
| 875 | Koko Eating Bananas | Medium | [x] Solved | [`0875_koko_eating_bananas.cpp`](./03_New_Questions/0875_koko_eating_bananas.cpp) | [Open Problem](https://leetcode.com/problems/koko-eating-bananas/) | `O(n log(max(piles)))` | `O(1)` |
| 1011 | Capacity To Ship Packages Within D Days | Medium | [x] Solved | [`1011_capacity_to_ship_packages_within_d_days.cpp`](./04_OA_Roadmap_Pack/1011_capacity_to_ship_packages_within_d_days.cpp) | [Open Problem](https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/) | `O(n log(sum - max))` | `O(1)` |
| 410 | Split Array Largest Sum | Hard | [x] Solved | [`0410_split_array_largest_sum.cpp`](./04_OA_Roadmap_Pack/0410_split_array_largest_sum.cpp) | [Open Problem](https://leetcode.com/problems/split-array-largest-sum/) | `O(n log(sum - max))` | `O(1)` |
| 774 | Minimize Max Distance to Gas Station | Hard | [x] Solved | [`0774_minimize_max_distance_to_gas_station.cpp`](./04_OA_Roadmap_Pack/0774_minimize_max_distance_to_gas_station.cpp) | [Open Problem](https://leetcode.com/problems/minimize-max-distance-to-gas-station/) | `O(n log(max_dist / eps))` | `O(1)` |
| 1283 | Find the Smallest Divisor Given a Threshold | Medium | [x] Solved | [`1283_find_the_smallest_divisor_given_a_threshold.cpp`](./04_OA_Roadmap_Pack/1283_find_the_smallest_divisor_given_a_threshold.cpp) | [Open Problem](https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/) | `O(n log(max_val))` | `O(1)` |
| 1482 | Minimum Number of Days to Make m Bouquets | Medium | [x] Solved | [`1482_minimum_number_of_days_to_make_m_bouquets.cpp`](./04_OA_Roadmap_Pack/1482_minimum_number_of_days_to_make_m_bouquets.cpp) | [Open Problem](https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/) | `O(n log(max_bloom))` | `O(1)` |

---

## 6. Hashing / Frequency Maps
**Core Patterns:** Hash Tables, Anagrams, Frequency Buckets, Sequence Tracking

| # | Problem | Difficulty | Status | Solution File | LeetCode Link | Time Complexity | Space Complexity |
|---|---------|:----------:|:------:|---------------|---------------|:---------------:|:----------------:|
| 1 | Two Sum | Easy | [x] Solved | [`0001_two_sum.cpp`](./01_Easy_Starter_Pack/0001_two_sum.cpp) | [Open Problem](https://leetcode.com/problems/two-sum/) | `O(n)` | `O(n)` |
| 49 | Group Anagrams | Medium | [x] Solved | [`0049_group_anagrams.cpp`](./03_New_Questions/0049_group_anagrams.cpp) | [Open Problem](https://leetcode.com/problems/group-anagrams/) | `O(N * K log K) where N = words count, K = max word length` | `O(N * K)` |
| 128 | Longest Consecutive Sequence | Medium | [x] Solved | [`0128_longest_consecutive_sequence.cpp`](./03_New_Questions/0128_longest_consecutive_sequence.cpp) | [Open Problem](https://leetcode.com/problems/longest-consecutive-sequence/) | `O(n)` | `O(n)` |
| 217 | Contains Duplicate | Easy | [x] Solved | [`0217_contains_duplicate.cpp`](./01_Easy_Starter_Pack/0217_contains_duplicate.cpp) | [Open Problem](https://leetcode.com/problems/contains-duplicate/) | `O(n)` | `O(n)` |
| 242 | Valid Anagram | Easy | [x] Solved | [`0242_valid_anagram.cpp`](./01_Easy_Starter_Pack/0242_valid_anagram.cpp) | [Open Problem](https://leetcode.com/problems/valid-anagram/) | `O(n)` | `O(1)` |
| 347 | Top K Frequent Elements | Medium | [x] Solved | [`0347_top_k_frequent_elements.cpp`](./03_New_Questions/0347_top_k_frequent_elements.cpp) | [Open Problem](https://leetcode.com/problems/top-k-frequent-elements/) | `O(n) via Bucket Sort` | `O(n)` |

---

## 7. Prefix Sum / Running Sum
**Core Patterns:** Subarray Sums, Remainder Modulo K, Pivot Indices

| # | Problem | Difficulty | Status | Solution File | LeetCode Link | Time Complexity | Space Complexity |
|---|---------|:----------:|:------:|---------------|---------------|:---------------:|:----------------:|
| 303 | Range Sum Query - Immutable | Easy | [x] Solved | [`0303_range_sum_query_immutable.cpp`](./04_OA_Roadmap_Pack/0303_range_sum_query_immutable.cpp) | [Open Problem](https://leetcode.com/problems/range-sum-query-immutable/) | `O(1) query, O(n) initialization` | `O(n)` |
| 560 | Subarray Sum Equals K | Medium | [x] Solved | [`0560_subarray_sum_equals_k.cpp`](./03_New_Questions/0560_subarray_sum_equals_k.cpp) | [Open Problem](https://leetcode.com/problems/subarray-sum-equals-k/) | `O(n)` | `O(n)` |
| 724 | Find Pivot Index | Easy | [x] Solved | [`0724_find_pivot_index.cpp`](./04_OA_Roadmap_Pack/0724_find_pivot_index.cpp) | [Open Problem](https://leetcode.com/problems/find-pivot-index/) | `O(n)` | `O(1)` |
| 930 | Binary Subarrays With Sum | Medium | [x] Solved | [`0930_binary_subarrays_with_sum.cpp`](./04_OA_Roadmap_Pack/0930_binary_subarrays_with_sum.cpp) | [Open Problem](https://leetcode.com/problems/binary-subarrays-with-sum/) | `O(n)` | `O(1) auxiliary space` |
| 974 | Subarray Sums Divisible by K | Medium | [x] Solved | [`0974_subarray_sums_divisible_by_k.cpp`](./04_OA_Roadmap_Pack/0974_subarray_sums_divisible_by_k.cpp) | [Open Problem](https://leetcode.com/problems/subarray-sums-divisible-by-k/) | `O(n)` | `O(k)` |
| 523 | Continuous Subarray Sum | Medium | [x] Solved | [`0523_continuous_subarray_sum.cpp`](./04_OA_Roadmap_Pack/0523_continuous_subarray_sum.cpp) | [Open Problem](https://leetcode.com/problems/continuous-subarray-sum/) | `O(n)` | `O(min(n, k))` |

---

## 8. Difference Array / Range Updates
**Core Patterns:** Range Addition, Coordinate Compression, Prefix Reconciliation

| # | Problem | Difficulty | Status | Solution File | LeetCode Link | Time Complexity | Space Complexity |
|---|---------|:----------:|:------:|---------------|---------------|:---------------:|:----------------:|
| 370 | Range Addition | Medium | [x] Solved | [`0370_range_addition.cpp`](./04_OA_Roadmap_Pack/0370_range_addition.cpp) | [Open Problem](https://leetcode.com/problems/range-addition/) | `O(n + k) where k is the number of updates` | `O(1) auxiliary space (excluding result)` |
| 1094 | Car Pooling | Medium | [x] Solved | [`1094_car_pooling.cpp`](./04_OA_Roadmap_Pack/1094_car_pooling.cpp) | [Open Problem](https://leetcode.com/problems/car-pooling/) | `O(n + 1001)` | `O(1) auxiliary space (fixed size 1001)` |
| 1109 | Corporate Flight Bookings | Medium | [x] Solved | [`1109_corporate_flight_bookings.cpp`](./04_OA_Roadmap_Pack/1109_corporate_flight_bookings.cpp) | [Open Problem](https://leetcode.com/problems/corporate-flight-bookings/) | `O(n + bookings.size())` | `O(1) auxiliary space (excluding result)` |
| 1893 | Check if All the Integers in a Range Are Covered | Easy | [x] Solved | [`1893_check_if_all_the_integers_in_a_range_are_covered.cpp`](./04_OA_Roadmap_Pack/1893_check_if_all_the_integers_in_a_range_are_covered.cpp) | [Open Problem](https://leetcode.com/problems/check-if-all-the-integers-in-a-range-are-covered/) | `O(ranges.size() + right)` | `O(1) auxiliary space (fixed 52 size)` |
| 1943 | Describe the Painting | Medium | [x] Solved | [`1943_describe_the_painting.cpp`](./04_OA_Roadmap_Pack/1943_describe_the_painting.cpp) | [Open Problem](https://leetcode.com/problems/describe-the-painting/) | `O(k log k) where k is the number of distinct segment endpoints` | `O(k)` |
| 2381 | Shifting Letters II | Medium | [x] Solved | [`2381_shifting_letters_ii.cpp`](./04_OA_Roadmap_Pack/2381_shifting_letters_ii.cpp) | [Open Problem](https://leetcode.com/problems/shifting-letters-ii/) | `O(n + shifts.size())` | `O(n)` |

---

## 9. Monotonic Stack
**Core Patterns:** Next Greater Element, Histogram Areas, Maximal Rectangles

| # | Problem | Difficulty | Status | Solution File | LeetCode Link | Time Complexity | Space Complexity |
|---|---------|:----------:|:------:|---------------|---------------|:---------------:|:----------------:|
| 739 | Daily Temperatures | Medium | [x] Solved | [`0739_daily_temperatures.cpp`](./03_New_Questions/0739_daily_temperatures.cpp) | [Open Problem](https://leetcode.com/problems/daily-temperatures/) | `O(n)` | `O(n)` |
| 496 | Next Greater Element I | Easy | [x] Solved | [`0496_next_greater_element_i.cpp`](./04_OA_Roadmap_Pack/0496_next_greater_element_i.cpp) | [Open Problem](https://leetcode.com/problems/next-greater-element-i/) | `O(n1 + n2)` | `O(n2)` |
| 503 | Next Greater Element II | Medium | [x] Solved | [`0503_next_greater_element_ii.cpp`](./03_New_Questions/0503_next_greater_element_ii.cpp) | [Open Problem](https://leetcode.com/problems/next-greater-element-ii/) | `O(n)` | `O(n)` |
| 84 | Largest Rectangle in Histogram | Hard | [x] Solved | [`0084_largest_rectangle_in_histogram.cpp`](./03_New_Questions/0084_largest_rectangle_in_histogram.cpp) | [Open Problem](https://leetcode.com/problems/largest-rectangle-in-histogram/) | `O(n)` | `O(n)` |
| 85 | Maximal Rectangle | Hard | [x] Solved | [`0085_maximal_rectangle.cpp`](./04_OA_Roadmap_Pack/0085_maximal_rectangle.cpp) | [Open Problem](https://leetcode.com/problems/maximal-rectangle/) | `O(m * n)` | `O(n)` |
| 901 | Online Stock Span | Medium | [x] Solved | [`0901_online_stock_span.cpp`](./04_OA_Roadmap_Pack/0901_online_stock_span.cpp) | [Open Problem](https://leetcode.com/problems/online-stock-span/) | `O(1) amortized per next() query` | `O(n)` |

---

## 10. Monotonic Queue / Deque
**Core Patterns:** Sliding Window Maximum, Constrained DP, Subarray Bounds

| # | Problem | Difficulty | Status | Solution File | LeetCode Link | Time Complexity | Space Complexity |
|---|---------|:----------:|:------:|---------------|---------------|:---------------:|:----------------:|
| 239 | Sliding Window Maximum | Hard | [x] Solved | [`0239_sliding_window_maximum.cpp`](./03_New_Questions/0239_sliding_window_maximum.cpp) | [Open Problem](https://leetcode.com/problems/sliding-window-maximum/) | `O(n)` | `O(k)` |
| 862 | Shortest Subarray with Sum at Least K | Hard | [x] Solved | [`0862_shortest_subarray_with_sum_at_least_k.cpp`](./04_OA_Roadmap_Pack/0862_shortest_subarray_with_sum_at_least_k.cpp) | [Open Problem](https://leetcode.com/problems/shortest-subarray-with-sum-at-least-k/) | `O(n)` | `O(n)` |
| 1425 | Constrained Subsequence Sum | Hard | [x] Solved | [`1425_constrained_subsequence_sum.cpp`](./04_OA_Roadmap_Pack/1425_constrained_subsequence_sum.cpp) | [Open Problem](https://leetcode.com/problems/constrained-subsequence-sum/) | `O(n)` | `O(n)` |
| 1438 | Longest Continuous Subarray With Absolute Diff Less Than or Equal to Limit | Medium | [x] Solved | [`1438_longest_continuous_subarray_with_absolute_diff_less_than_or_equal_to_limit.cpp`](./04_OA_Roadmap_Pack/1438_longest_continuous_subarray_with_absolute_diff_less_than_or_equal_to_limit.cpp) | [Open Problem](https://leetcode.com/problems/longest-continuous-subarray-with-absolute-diff-less-than-or-equal-to-limit/) | `O(n)` | `O(n)` |
| 1499 | Max Value of Equation | Hard | [x] Solved | [`1499_max_value_of_equation.cpp`](./04_OA_Roadmap_Pack/1499_max_value_of_equation.cpp) | [Open Problem](https://leetcode.com/problems/max-value-of-equation/) | `O(n)` | `O(n)` |
| 1696 | Jump Game VI | Medium | [x] Solved | [`1696_jump_game_vi.cpp`](./04_OA_Roadmap_Pack/1696_jump_game_vi.cpp) | [Open Problem](https://leetcode.com/problems/jump-game-vi/) | `O(n)` | `O(k)` |

---

## 11. Heap / Top K
**Core Patterns:** Min/Max Heaps, Kth Order Statistics, Priority Scheduling

| # | Problem | Difficulty | Status | Solution File | LeetCode Link | Time Complexity | Space Complexity |
|---|---------|:----------:|:------:|---------------|---------------|:---------------:|:----------------:|
| 215 | Kth Largest Element in an Array | Medium | [x] Solved | [`0215_kth_largest_element_in_an_array.cpp`](./03_New_Questions/0215_kth_largest_element_in_an_array.cpp) | [Open Problem](https://leetcode.com/problems/kth-largest-element-in-an-array/) | `O(n log k) via Min-Heap` | `O(k)` |
| 347 | Top K Frequent Elements | Medium | [x] Solved | [`0347_top_k_frequent_elements.cpp`](./03_New_Questions/0347_top_k_frequent_elements.cpp) | [Open Problem](https://leetcode.com/problems/top-k-frequent-elements/) | `O(n) via Bucket Sort` | `O(n)` |
| 692 | Top K Frequent Words | Medium | [x] Solved | [`0692_top_k_frequent_words.cpp`](./04_OA_Roadmap_Pack/0692_top_k_frequent_words.cpp) | [Open Problem](https://leetcode.com/problems/top-k-frequent-words/) | `O(n log k)` | `O(n)` |
| 703 | Kth Largest Element in a Stream | Easy | [x] Solved | [`0703_kth_largest_element_in_a_stream.cpp`](./03_New_Questions/0703_kth_largest_element_in_a_stream.cpp) | [Open Problem](https://leetcode.com/problems/kth-largest-element-in-a-stream/) | `O(n log k) init, O(log k) add` | `O(k)` |
| 973 | K Closest Points to Origin | Medium | [x] Solved | [`0973_k_closest_points_to_origin.cpp`](./03_New_Questions/0973_k_closest_points_to_origin.cpp) | [Open Problem](https://leetcode.com/problems/k-closest-points-to-origin/) | `O(n log k) via Max-Heap` | `O(k)` |
| 1046 | Last Stone Weight | Easy | [x] Solved | [`1046_last_stone_weight.cpp`](./04_OA_Roadmap_Pack/1046_last_stone_weight.cpp) | [Open Problem](https://leetcode.com/problems/last-stone-weight/) | `O(n log n)` | `O(n)` |

---

## 12. Intervals
**Core Patterns:** Merging Intervals, Non-overlapping Sets, Room Allocation

| # | Problem | Difficulty | Status | Solution File | LeetCode Link | Time Complexity | Space Complexity |
|---|---------|:----------:|:------:|---------------|---------------|:---------------:|:----------------:|
| 56 | Merge Intervals | Medium | [x] Solved | [`0056_merge_intervals.cpp`](./03_New_Questions/0056_merge_intervals.cpp) | [Open Problem](https://leetcode.com/problems/merge-intervals/) | `O(n log n)` | `O(log n) sort auxiliary` |
| 57 | Insert Interval | Medium | [x] Solved | [`0057_insert_interval.cpp`](./03_New_Questions/0057_insert_interval.cpp) | [Open Problem](https://leetcode.com/problems/insert-interval/) | `O(n)` | `O(n)` |
| 252 | Meeting Rooms | Easy | [x] Solved | [`0252_meeting_rooms.cpp`](./04_OA_Roadmap_Pack/0252_meeting_rooms.cpp) | [Open Problem](https://leetcode.com/problems/meeting-rooms/) | `O(n log n)` | `O(1) auxiliary space` |
| 253 | Meeting Rooms II | Medium | [x] Solved | [`0253_meeting_rooms_ii.cpp`](./04_OA_Roadmap_Pack/0253_meeting_rooms_ii.cpp) | [Open Problem](https://leetcode.com/problems/meeting-rooms-ii/) | `O(n log n)` | `O(n)` |
| 435 | Non-overlapping Intervals | Medium | [x] Solved | [`0435_non_overlapping_intervals.cpp`](./03_New_Questions/0435_non_overlapping_intervals.cpp) | [Open Problem](https://leetcode.com/problems/non-overlapping-intervals/) | `O(n log n)` | `O(1) auxiliary` |
| 452 | Minimum Number of Arrows to Burst Balloons | Medium | [x] Solved | [`0452_minimum_number_of_arrows_to_burst_balloons.cpp`](./04_OA_Roadmap_Pack/0452_minimum_number_of_arrows_to_burst_balloons.cpp) | [Open Problem](https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons/) | `O(n log n)` | `O(1) auxiliary space` |

---

## 13. Greedy Scheduling / Sorting
**Core Patterns:** Jump Game, Task Scheduler, Partition Labels, Gas Circuits

| # | Problem | Difficulty | Status | Solution File | LeetCode Link | Time Complexity | Space Complexity |
|---|---------|:----------:|:------:|---------------|---------------|:---------------:|:----------------:|
| 45 | Jump Game II | Medium | [x] Solved | [`0045_jump_game_ii.cpp`](./03_New_Questions/0045_jump_game_ii.cpp) | [Open Problem](https://leetcode.com/problems/jump-game-ii/) | `O(n)` | `O(1)` |
| 55 | Jump Game | Medium | [x] Solved | [`0055_jump_game.cpp`](./03_New_Questions/0055_jump_game.cpp) | [Open Problem](https://leetcode.com/problems/jump-game/) | `O(n)` | `O(1)` |
| 406 | Queue Reconstruction by Height | Medium | [x] Solved | [`0406_queue_reconstruction_by_height.cpp`](./04_OA_Roadmap_Pack/0406_queue_reconstruction_by_height.cpp) | [Open Problem](https://leetcode.com/problems/queue-reconstruction-by-height/) | `O(n^2)` | `O(n)` |
| 621 | Task Scheduler | Medium | [x] Solved | [`0621_task_scheduler.cpp`](./03_New_Questions/0621_task_scheduler.cpp) | [Open Problem](https://leetcode.com/problems/task-scheduler/) | `O(n)` | `O(1) - 26 task frequencies` |
| 763 | Partition Labels | Medium | [x] Solved | [`0763_partition_labels.cpp`](./04_OA_Roadmap_Pack/0763_partition_labels.cpp) | [Open Problem](https://leetcode.com/problems/partition-labels/) | `O(n)` | `O(1) auxiliary space (26 characters)` |
| 134 | Gas Station | Medium | [x] Solved | [`0134_gas_station.cpp`](./04_OA_Roadmap_Pack/0134_gas_station.cpp) | [Open Problem](https://leetcode.com/problems/gas-station/) | `O(n)` | `O(1)` |

---

## 14. Linked List Manipulation
**Core Patterns:** K-Group Reversal, Merging Lists, Deep Copy with Random Pointers

| # | Problem | Difficulty | Status | Solution File | LeetCode Link | Time Complexity | Space Complexity |
|---|---------|:----------:|:------:|---------------|---------------|:---------------:|:----------------:|
| 21 | Merge Two Sorted Lists | Easy | [x] Solved | [`0021_merge_two_sorted_lists.cpp`](./01_Easy_Starter_Pack/0021_merge_two_sorted_lists.cpp) | [Open Problem](https://leetcode.com/problems/merge-two-sorted-lists/) | `O(n + m)` | `O(1)` |
| 23 | Merge k Sorted Lists | Hard | [x] Solved | [`0023_merge_k_sorted_lists.cpp`](./03_New_Questions/0023_merge_k_sorted_lists.cpp) | [Open Problem](https://leetcode.com/problems/merge-k-sorted-lists/) | `O(N log k) where N is total nodes, k is number of lists` | `O(k) for priority queue` |
| 24 | Swap Nodes in Pairs | Medium | [x] Solved | [`0024_swap_nodes_in_pairs.cpp`](./04_OA_Roadmap_Pack/0024_swap_nodes_in_pairs.cpp) | [Open Problem](https://leetcode.com/problems/swap-nodes-in-pairs/) | `O(n)` | `O(1)` |
| 25 | Reverse Nodes in k-Group | Hard | [x] Solved | [`0025_reverse_nodes_in_k_group.cpp`](./04_OA_Roadmap_Pack/0025_reverse_nodes_in_k_group.cpp) | [Open Problem](https://leetcode.com/problems/reverse-nodes-in-k-group/) | `O(n)` | `O(1)` |
| 92 | Reverse Linked List II | Medium | [x] Solved | [`0092_reverse_linked_list_ii.cpp`](./04_OA_Roadmap_Pack/0092_reverse_linked_list_ii.cpp) | [Open Problem](https://leetcode.com/problems/reverse-linked-list-ii/) | `O(n)` | `O(1)` |
| 138 | Copy List with Random Pointer | Medium | [x] Solved | [`0138_copy_list_with_random_pointer.cpp`](./03_New_Questions/0138_copy_list_with_random_pointer.cpp) | [Open Problem](https://leetcode.com/problems/copy-list-with-random-pointer/) | `O(n)` | `O(1) in-place interleave` |

---

## 15. Tree DFS
**Core Patterns:** Depth, Path Sums, Tree Diameter, Maximum Path Sum

| # | Problem | Difficulty | Status | Solution File | LeetCode Link | Time Complexity | Space Complexity |
|---|---------|:----------:|:------:|---------------|---------------|:---------------:|:----------------:|
| 104 | Maximum Depth of Binary Tree | Easy | [x] Solved | [`0104_maximum_depth_of_binary_tree.cpp`](./01_Easy_Starter_Pack/0104_maximum_depth_of_binary_tree.cpp) | [Open Problem](https://leetcode.com/problems/maximum-depth-of-binary-tree/) | `O(n)` | `O(n)` |
| 112 | Path Sum | Easy | [x] Solved | [`0112_path_sum.cpp`](./01_Easy_Starter_Pack/0112_path_sum.cpp) | [Open Problem](https://leetcode.com/problems/path-sum/) | `O(n)` | `O(h)` |
| 113 | Path Sum II | Medium | [x] Solved | [`0113_path_sum_ii.cpp`](./04_OA_Roadmap_Pack/0113_path_sum_ii.cpp) | [Open Problem](https://leetcode.com/problems/path-sum-ii/) | `O(n^2) worst case (O(n) average)` | `O(h) recursion stack` |
| 543 | Diameter of Binary Tree | Easy | [x] Solved | [`0543_diameter_of_binary_tree.cpp`](./01_Easy_Starter_Pack/0543_diameter_of_binary_tree.cpp) | [Open Problem](https://leetcode.com/problems/diameter-of-binary-tree/) | `O(n)` | `O(h), where h is the height of the tree` |
| 124 | Binary Tree Maximum Path Sum | Hard | [x] Solved | [`0124_binary_tree_maximum_path_sum.cpp`](./03_New_Questions/0124_binary_tree_maximum_path_sum.cpp) | [Open Problem](https://leetcode.com/problems/binary-tree-maximum-path-sum/) | `O(n)` | `O(h) recursion stack` |
| 226 | Invert Binary Tree | Easy | [x] Solved | [`0226_invert_binary_tree.cpp`](./01_Easy_Starter_Pack/0226_invert_binary_tree.cpp) | [Open Problem](https://leetcode.com/problems/invert-binary-tree/) | `O(n)` | `O(h), where h is the height of the tree` |

---

## 16. Tree BFS / Level Order
**Core Patterns:** Level Order, Zigzag Traversal, Tree Right Side View, Level Maximums

| # | Problem | Difficulty | Status | Solution File | LeetCode Link | Time Complexity | Space Complexity |
|---|---------|:----------:|:------:|---------------|---------------|:---------------:|:----------------:|
| 102 | Binary Tree Level Order Traversal | Medium | [x] Solved | [`0102_binary_tree_level_order_traversal.cpp`](./03_New_Questions/0102_binary_tree_level_order_traversal.cpp) | [Open Problem](https://leetcode.com/problems/binary-tree-level-order-traversal/) | `O(n)` | `O(n)` |
| 103 | Binary Tree Zigzag Level Order Traversal | Medium | [x] Solved | [`0103_binary_tree_zigzag_level_order_traversal.cpp`](./04_OA_Roadmap_Pack/0103_binary_tree_zigzag_level_order_traversal.cpp) | [Open Problem](https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/) | `O(n)` | `O(n)` |
| 199 | Binary Tree Right Side View | Medium | [x] Solved | [`0199_binary_tree_right_side_view.cpp`](./03_New_Questions/0199_binary_tree_right_side_view.cpp) | [Open Problem](https://leetcode.com/problems/binary-tree-right-side-view/) | `O(n)` | `O(h) recursion depth` |
| 515 | Find Largest Value in Each Tree Row | Medium | [x] Solved | [`0515_find_largest_value_in_each_tree_row.cpp`](./04_OA_Roadmap_Pack/0515_find_largest_value_in_each_tree_row.cpp) | [Open Problem](https://leetcode.com/problems/find-largest-value-in-each-tree-row/) | `O(n)` | `O(n)` |
| 637 | Average of Levels in Binary Tree | Easy | [x] Solved | [`0637_average_of_levels_in_binary_tree.cpp`](./04_OA_Roadmap_Pack/0637_average_of_levels_in_binary_tree.cpp) | [Open Problem](https://leetcode.com/problems/average-of-levels-in-binary-tree/) | `O(n)` | `O(n)` |
| 116 | Populating Next Right Pointers in Each Node | Medium | [x] Solved | [`0116_populating_next_right_pointers_in_each_node.cpp`](./04_OA_Roadmap_Pack/0116_populating_next_right_pointers_in_each_node.cpp) | [Open Problem](https://leetcode.com/problems/populating-next-right-pointers-in-each-node/) | `O(n)` | `O(1) auxiliary space` |

---

## 17. BST Problems
**Core Patterns:** BST Validation, Inorder Traversal, Node Deletion, LCA

| # | Problem | Difficulty | Status | Solution File | LeetCode Link | Time Complexity | Space Complexity |
|---|---------|:----------:|:------:|---------------|---------------|:---------------:|:----------------:|
| 98 | Validate Binary Search Tree | Medium | [x] Solved | [`0098_validate_binary_search_tree.cpp`](./04_OA_Roadmap_Pack/0098_validate_binary_search_tree.cpp) | [Open Problem](https://leetcode.com/problems/validate-binary-search-tree/) | `O(n)` | `O(h) where h is height of tree` |
| 99 | Recover Binary Search Tree | Medium | [x] Solved | [`0099_recover_binary_search_tree.cpp`](./04_OA_Roadmap_Pack/0099_recover_binary_search_tree.cpp) | [Open Problem](https://leetcode.com/problems/recover-binary-search-tree/) | `O(n)` | `O(h) recursion stack` |
| 230 | Kth Smallest Element in a BST | Medium | [x] Solved | [`0230_kth_smallest_element_in_a_bst.cpp`](./03_New_Questions/0230_kth_smallest_element_in_a_bst.cpp) | [Open Problem](https://leetcode.com/problems/kth-smallest-element-in-a-bst/) | `O(H + k)` | `O(H)` |
| 235 | Lowest Common Ancestor of a Binary Search Tree | Medium | [x] Solved | [`0235_lowest_common_ancestor_of_a_binary_search_tree.cpp`](./03_New_Questions/0235_lowest_common_ancestor_of_a_binary_search_tree.cpp) | [Open Problem](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/) | `O(h)` | `O(1)` |
| 450 | Delete Node in a BST | Medium | [x] Solved | [`0450_delete_node_in_a_bst.cpp`](./04_OA_Roadmap_Pack/0450_delete_node_in_a_bst.cpp) | [Open Problem](https://leetcode.com/problems/delete-node-in-a-bst/) | `O(h) where h is tree height` | `O(h) recursion stack` |
| 700 | Search in a Binary Search Tree | Easy | [x] Solved | [`0700_search_in_a_binary_search_tree.cpp`](./04_OA_Roadmap_Pack/0700_search_in_a_binary_search_tree.cpp) | [Open Problem](https://leetcode.com/problems/search-in-a-binary-search-tree/) | `O(h) where h is tree height` | `O(1) iterative` |

---

## 18. Backtracking Basics
**Core Patterns:** Permutations, Combinations, Subsets, Combination Sum

| # | Problem | Difficulty | Status | Solution File | LeetCode Link | Time Complexity | Space Complexity |
|---|---------|:----------:|:------:|---------------|---------------|:---------------:|:----------------:|
| 46 | Permutations | Medium | [x] Solved | [`0046_permutations.cpp`](./03_New_Questions/0046_permutations.cpp) | [Open Problem](https://leetcode.com/problems/permutations/) | `O(n * n!)` | `O(n)` |
| 47 | Permutations II | Medium | [x] Solved | [`0047_permutations_ii.cpp`](./04_OA_Roadmap_Pack/0047_permutations_ii.cpp) | [Open Problem](https://leetcode.com/problems/permutations-ii/) | `O(n! * n)` | `O(n) auxiliary recursion stack` |
| 77 | Combinations | Medium | [x] Solved | [`0077_combinations.cpp`](./04_OA_Roadmap_Pack/0077_combinations.cpp) | [Open Problem](https://leetcode.com/problems/combinations/) | `O(C(n, k) * k)` | `O(k) auxiliary recursion stack` |
| 78 | Subsets | Medium | [x] Solved | [`0078_subsets.cpp`](./03_New_Questions/0078_subsets.cpp) | [Open Problem](https://leetcode.com/problems/subsets/) | `O(n * 2^n)` | `O(n)` |
| 90 | Subsets II | Medium | [x] Solved | [`0090_subsets_ii.cpp`](./03_New_Questions/0090_subsets_ii.cpp) | [Open Problem](https://leetcode.com/problems/subsets-ii/) | `O(n * 2^n)` | `O(n)` |
| 39 | Combination Sum | Medium | [x] Solved | [`0039_combination_sum.cpp`](./03_New_Questions/0039_combination_sum.cpp) | [Open Problem](https://leetcode.com/problems/combination-sum/) | `O(2^(target / min(candidates)))` | `O(target / min(candidates)) recursion depth` |

---

## 19. Backtracking with Constraints
**Core Patterns:** Phone Mnemonics, Word Search, Palindrome Partitioning, N-Queens

| # | Problem | Difficulty | Status | Solution File | LeetCode Link | Time Complexity | Space Complexity |
|---|---------|:----------:|:------:|---------------|---------------|:---------------:|:----------------:|
| 40 | Combination Sum II | Medium | [x] Solved | [`0040_combination_sum_ii.cpp`](./03_New_Questions/0040_combination_sum_ii.cpp) | [Open Problem](https://leetcode.com/problems/combination-sum-ii/) | `O(2^n)` | `O(n)` |
| 17 | Letter Combinations of a Phone Number | Medium | [x] Solved | [`0017_letter_combinations_of_a_phone_number.cpp`](./04_OA_Roadmap_Pack/0017_letter_combinations_of_a_phone_number.cpp) | [Open Problem](https://leetcode.com/problems/letter-combinations-of-a-phone-number/) | `O(4^n * n)` | `O(n) auxiliary recursion stack` |
| 79 | Word Search | Medium | [x] Solved | [`0079_word_search.cpp`](./03_New_Questions/0079_word_search.cpp) | [Open Problem](https://leetcode.com/problems/word-search/) | `O(M * N * 3^L) where L = word length` | `O(L) recursion stack` |
| 131 | Palindrome Partitioning | Medium | [x] Solved | [`0131_palindrome_partitioning.cpp`](./03_New_Questions/0131_palindrome_partitioning.cpp) | [Open Problem](https://leetcode.com/problems/palindrome-partitioning/) | `O(n * 2^n)` | `O(n)` |
| 51 | N-Queens | Hard | [x] Solved | [`0051_n_queens.cpp`](./03_New_Questions/0051_n_queens.cpp) | [Open Problem](https://leetcode.com/problems/n-queens/) | `O(N!)` | `O(N)` |
| 52 | N-Queens II | Hard | [x] Solved | [`0052_n_queens_ii.cpp`](./04_OA_Roadmap_Pack/0052_n_queens_ii.cpp) | [Open Problem](https://leetcode.com/problems/n-queens-ii/) | `O(n!)` | `O(n) auxiliary recursion stack` |

---

## 20. Graph BFS / DFS
**Core Patterns:** Flood Fill, Island Counting, Rotting Oranges, Shortest Path Grid

| # | Problem | Difficulty | Status | Solution File | LeetCode Link | Time Complexity | Space Complexity |
|---|---------|:----------:|:------:|---------------|---------------|:---------------:|:----------------:|
| 200 | Number of Islands | Medium | [x] Solved | [`0200_number_of_islands.cpp`](./03_New_Questions/0200_number_of_islands.cpp) | [Open Problem](https://leetcode.com/problems/number-of-islands/) | `O(M * N)` | `O(M * N) worst case recursion depth` |
| 695 | Max Area of Island | Medium | [x] Solved | [`0695_max_area_of_island.cpp`](./03_New_Questions/0695_max_area_of_island.cpp) | [Open Problem](https://leetcode.com/problems/max-area-of-island/) | `O(M * N)` | `O(M * N) recursion stack` |
| 733 | Flood Fill | Easy | [x] Solved | [`0733_flood_fill.cpp`](./04_OA_Roadmap_Pack/0733_flood_fill.cpp) | [Open Problem](https://leetcode.com/problems/flood-fill/) | `O(m * n)` | `O(m * n) recursion stack` |
| 994 | Rotting Oranges | Medium | [x] Solved | [`0994_rotting_oranges.cpp`](./03_New_Questions/0994_rotting_oranges.cpp) | [Open Problem](https://leetcode.com/problems/rotting-oranges/) | `O(M * N)` | `O(M * N)` |
| 1091 | Shortest Path in Binary Matrix | Medium | [x] Solved | [`1091_shortest_path_in_binary_matrix.cpp`](./04_OA_Roadmap_Pack/1091_shortest_path_in_binary_matrix.cpp) | [Open Problem](https://leetcode.com/problems/shortest-path-in-binary-matrix/) | `O(n^2)` | `O(n^2)` |
| 1254 | Number of Closed Islands | Medium | [x] Solved | [`1254_number_of_closed_islands.cpp`](./04_OA_Roadmap_Pack/1254_number_of_closed_islands.cpp) | [Open Problem](https://leetcode.com/problems/number-of-closed-islands/) | `O(m * n)` | `O(m * n)` |

---

## 21. Topological Sort / DAG
**Core Patterns:** Kahn Algorithm, Course Schedule, Safe States, Group Dependencies

| # | Problem | Difficulty | Status | Solution File | LeetCode Link | Time Complexity | Space Complexity |
|---|---------|:----------:|:------:|---------------|---------------|:---------------:|:----------------:|
| 207 | Course Schedule | Medium | [x] Solved | [`0207_course_schedule.cpp`](./03_New_Questions/0207_course_schedule.cpp) | [Open Problem](https://leetcode.com/problems/course-schedule/) | `O(V + E)` | `O(V + E)` |
| 210 | Course Schedule II | Medium | [x] Solved | [`0210_course_schedule_ii.cpp`](./03_New_Questions/0210_course_schedule_ii.cpp) | [Open Problem](https://leetcode.com/problems/course-schedule-ii/) | `O(V + E)` | `O(V + E)` |
| 802 | Find Eventual Safe States | Medium | [x] Solved | [`0802_find_eventual_safe_states.cpp`](./04_OA_Roadmap_Pack/0802_find_eventual_safe_states.cpp) | [Open Problem](https://leetcode.com/problems/find-eventual-safe-states/) | `O(V + E)` | `O(V)` |
| 1462 | Course Schedule IV | Medium | [x] Solved | [`1462_course_schedule_iv.cpp`](./04_OA_Roadmap_Pack/1462_course_schedule_iv.cpp) | [Open Problem](https://leetcode.com/problems/course-schedule-iv/) | `O(V^3 + Q)` | `O(V^2)` |
| 1203 | Sort Items by Groups Respecting Dependencies | Hard | [x] Solved | [`1203_sort_items_by_groups_respecting_dependencies.cpp`](./04_OA_Roadmap_Pack/1203_sort_items_by_groups_respecting_dependencies.cpp) | [Open Problem](https://leetcode.com/problems/sort-items-by-groups-respecting-dependencies/) | `O(V + E)` | `O(V + E)` |
| 2115 | Find All Possible Recipes from Given Supplies | Medium | [x] Solved | [`2115_find_all_possible_recipes_from_given_supplies.cpp`](./04_OA_Roadmap_Pack/2115_find_all_possible_recipes_from_given_supplies.cpp) | [Open Problem](https://leetcode.com/problems/find-all-possible-recipes-from-given-supplies/) | `O(V + E)` | `O(V + E)` |

---

## 22. Union Find / DSU
**Core Patterns:** Connected Components, Cycle Detection, Redundant Connections

| # | Problem | Difficulty | Status | Solution File | LeetCode Link | Time Complexity | Space Complexity |
|---|---------|:----------:|:------:|---------------|---------------|:---------------:|:----------------:|
| 547 | Number of Provinces | Medium | [x] Solved | [`0547_number_of_provinces.cpp`](./04_OA_Roadmap_Pack/0547_number_of_provinces.cpp) | [Open Problem](https://leetcode.com/problems/number-of-provinces/) | `O(n^2)` | `O(n)` |
| 684 | Redundant Connection | Medium | [x] Solved | [`0684_redundant_connection.cpp`](./03_New_Questions/0684_redundant_connection.cpp) | [Open Problem](https://leetcode.com/problems/redundant-connection/) | `O(N * alpha(N)) via Union-Find with Path Compression` | `O(N)` |
| 1319 | Number of Operations to Make Network Connected | Medium | [x] Solved | [`1319_number_of_operations_to_make_network_connected.cpp`](./04_OA_Roadmap_Pack/1319_number_of_operations_to_make_network_connected.cpp) | [Open Problem](https://leetcode.com/problems/number-of-operations-to-make-network-connected/) | `O(V + E)` | `O(V)` |
| 1579 | Remove Max Number of Edges to Keep Graph Fully Traversable | Hard | [x] Solved | [`1579_remove_max_number_of_edges_to_keep_graph_fully_traversable.cpp`](./04_OA_Roadmap_Pack/1579_remove_max_number_of_edges_to_keep_graph_fully_traversable.cpp) | [Open Problem](https://leetcode.com/problems/remove-max-number-of-edges-to-keep-graph-fully-traversable/) | `O(E * alpha(V))` | `O(V)` |
| 990 | Satisfiability of Equality Equations | Medium | [x] Solved | [`0990_satisfiability_of_equality_equations.cpp`](./04_OA_Roadmap_Pack/0990_satisfiability_of_equality_equations.cpp) | [Open Problem](https://leetcode.com/problems/satisfiability-of-equality-equations/) | `O(n)` | `O(1) auxiliary space (26 characters)` |
| 1202 | Smallest String With Swaps | Medium | [x] Solved | [`1202_smallest_string_with_swaps.cpp`](./04_OA_Roadmap_Pack/1202_smallest_string_with_swaps.cpp) | [Open Problem](https://leetcode.com/problems/smallest-string-with-swaps/) | `O(n log n)` | `O(n)` |

---

## 23. Shortest Path
**Core Patterns:** Dijkstra, Bellman-Ford, Floyd-Warshall, Probabilistic Paths

| # | Problem | Difficulty | Status | Solution File | LeetCode Link | Time Complexity | Space Complexity |
|---|---------|:----------:|:------:|---------------|---------------|:---------------:|:----------------:|
| 743 | Network Delay Time | Medium | [x] Solved | [`0743_network_delay_time.cpp`](./04_OA_Roadmap_Pack/0743_network_delay_time.cpp) | [Open Problem](https://leetcode.com/problems/network-delay-time/) | `O((V + E) log V)` | `O(V + E)` |
| 787 | Cheapest Flights Within K Stops | Medium | [x] Solved | [`0787_cheapest_flights_within_k_stops.cpp`](./04_OA_Roadmap_Pack/0787_cheapest_flights_within_k_stops.cpp) | [Open Problem](https://leetcode.com/problems/cheapest-flights-within-k-stops/) | `O(k * E)` | `O(V)` |
| 1514 | Path with Maximum Probability | Medium | [x] Solved | [`1514_path_with_maximum_probability.cpp`](./04_OA_Roadmap_Pack/1514_path_with_maximum_probability.cpp) | [Open Problem](https://leetcode.com/problems/path-with-maximum-probability/) | `O((V + E) log V)` | `O(V + E)` |
| 1631 | Path With Minimum Effort | Medium | [x] Solved | [`1631_path_with_minimum_effort.cpp`](./04_OA_Roadmap_Pack/1631_path_with_minimum_effort.cpp) | [Open Problem](https://leetcode.com/problems/path-with-minimum-effort/) | `O(m * n log(m * n))` | `O(m * n)` |
| 1334 | Find the City With the Smallest Number of Neighbors at a Threshold Distance | Medium | [x] Solved | [`1334_find_the_city_with_the_smallest_number_of_neighbors_at_a_threshold_distance.cpp`](./04_OA_Roadmap_Pack/1334_find_the_city_with_the_smallest_number_of_neighbors_at_a_threshold_distance.cpp) | [Open Problem](https://leetcode.com/problems/find-the-city-with-the-smallest-number-of-neighbors-at-a-threshold-distance/) | `O(n^3)` | `O(n^2)` |
| 1976 | Number of Ways to Arrive at Destination | Medium | [x] Solved | [`1976_number_of_ways_to_arrive_at_destination.cpp`](./04_OA_Roadmap_Pack/1976_number_of_ways_to_arrive_at_destination.cpp) | [Open Problem](https://leetcode.com/problems/number-of-ways-to-arrive-at-destination/) | `O((V + E) log V)` | `O(V + E)` |

---

## 24. MST / Graph Greedy
**Core Patterns:** Kruskal, Prim, Virtual Nodes, Critical MST Edges

| # | Problem | Difficulty | Status | Solution File | LeetCode Link | Time Complexity | Space Complexity |
|---|---------|:----------:|:------:|---------------|---------------|:---------------:|:----------------:|
| 1584 | Min Cost to Connect All Points | Medium | [x] Solved | [`1584_min_cost_to_connect_all_points.cpp`](./04_OA_Roadmap_Pack/1584_min_cost_to_connect_all_points.cpp) | [Open Problem](https://leetcode.com/problems/min-cost-to-connect-all-points/) | `O(n^2) Prim's algorithm` | `O(n)` |
| 1135 | Connecting Cities With Minimum Cost | Medium | [x] Solved | [`1135_connecting_cities_with_minimum_cost.cpp`](./04_OA_Roadmap_Pack/1135_connecting_cities_with_minimum_cost.cpp) | [Open Problem](https://leetcode.com/problems/connecting-cities-with-minimum-cost/) | `O(E log E)` | `O(V)` |
| 1168 | Optimize Water Distribution in a Village | Hard | [x] Solved | [`1168_optimize_water_distribution_in_a_village.cpp`](./04_OA_Roadmap_Pack/1168_optimize_water_distribution_in_a_village.cpp) | [Open Problem](https://leetcode.com/problems/optimize-water-distribution-in-a-village/) | `O((V + E) log(V + E))` | `O(V + E)` |
| 1489 | Find Critical and Pseudo-Critical Edges in Minimum Spanning Tree | Hard | [x] Solved | [`1489_find_critical_and_pseudo_critical_edges_in_minimum_spanning_tree.cpp`](./04_OA_Roadmap_Pack/1489_find_critical_and_pseudo_critical_edges_in_minimum_spanning_tree.cpp) | [Open Problem](https://leetcode.com/problems/find-critical-and-pseudo-critical-edges-in-minimum-spanning-tree/) | `O(E^2 * alpha(V))` | `O(V + E)` |
| 778 | Swim in Rising Water | Hard | [x] Solved | [`0778_swim_in_rising_water.cpp`](./04_OA_Roadmap_Pack/0778_swim_in_rising_water.cpp) | [Open Problem](https://leetcode.com/problems/swim-in-rising-water/) | `O(n^2 log n)` | `O(n^2)` |
| 1102 | Path With Maximum Minimum Value | Medium | [x] Solved | [`1102_path_with_maximum_minimum_value.cpp`](./04_OA_Roadmap_Pack/1102_path_with_maximum_minimum_value.cpp) | [Open Problem](https://leetcode.com/problems/path-with-maximum-minimum-value/) | `O(R * C log(R * C))` | `O(R * C)` |

---

## 25. Trie
**Core Patterns:** Prefix Trees, Wildcard Search, Boggle / Word Search II, Autocomplete

| # | Problem | Difficulty | Status | Solution File | LeetCode Link | Time Complexity | Space Complexity |
|---|---------|:----------:|:------:|---------------|---------------|:---------------:|:----------------:|
| 208 | Implement Trie (Prefix Tree) | Medium | [x] Solved | [`0208_implement_trie_prefix_tree.cpp`](./03_New_Questions/0208_implement_trie_prefix_tree.cpp) | [Open Problem](https://leetcode.com/problems/implement-trie-prefix-tree/) | `O(L) per operation where L = string length` | `O(total characters inserted)` |
| 211 | Design Add and Search Words Data Structure | Medium | [x] Solved | [`0211_design_add_and_search_words_data_structure.cpp`](./03_New_Questions/0211_design_add_and_search_words_data_structure.cpp) | [Open Problem](https://leetcode.com/problems/design-add-and-search-words-data-structure/) | `O(m) insert, O(26^dots * m) worst case search` | `O(total characters)` |
| 212 | Word Search II | Hard | [x] Solved | [`0212_word_search_ii.cpp`](./03_New_Questions/0212_word_search_ii.cpp) | [Open Problem](https://leetcode.com/problems/word-search-ii/) | `O(M * N * 4 * 3^(L-1)) where L is maximum word length` | `O(total characters in words)` |
| 648 | Replace Words | Medium | [x] Solved | [`0648_replace_words.cpp`](./04_OA_Roadmap_Pack/0648_replace_words.cpp) | [Open Problem](https://leetcode.com/problems/replace-words/) | `O(d * l + s) where d is dictionary size, l is word length, s is sentence length` | `O(d * l)` |
| 677 | Map Sum Pairs | Medium | [x] Solved | [`0677_map_sum_pairs.cpp`](./04_OA_Roadmap_Pack/0677_map_sum_pairs.cpp) | [Open Problem](https://leetcode.com/problems/map-sum-pairs/) | `O(k) for insert and sum where k is key length` | `O(total key characters)` |
| 1268 | Search Suggestions System | Medium | [x] Solved | [`1268_search_suggestions_system.cpp`](./04_OA_Roadmap_Pack/1268_search_suggestions_system.cpp) | [Open Problem](https://leetcode.com/problems/search-suggestions-system/) | `O(n log n + l * log n)` | `O(1) auxiliary space (excluding result)` |

---

## 26. Bit Manipulation
**Core Patterns:** XOR Single Numbers, Hamming Weight, Counting Bits, Reverse Bits

| # | Problem | Difficulty | Status | Solution File | LeetCode Link | Time Complexity | Space Complexity |
|---|---------|:----------:|:------:|---------------|---------------|:---------------:|:----------------:|
| 136 | Single Number | Easy | [x] Solved | [`0136_single_number.cpp`](./01_Easy_Starter_Pack/0136_single_number.cpp) | [Open Problem](https://leetcode.com/problems/single-number/) | `O(n)` | `O(1)` |
| 137 | Single Number II | Medium | [x] Solved | [`0137_single_number_ii.cpp`](./04_OA_Roadmap_Pack/0137_single_number_ii.cpp) | [Open Problem](https://leetcode.com/problems/single-number-ii/) | `O(n)` | `O(1)` |
| 191 | Number of 1 Bits | Easy | [x] Solved | [`0191_number_of_1_bits.cpp`](./01_Easy_Starter_Pack/0191_number_of_1_bits.cpp) | [Open Problem](https://leetcode.com/problems/number-of-1-bits/) | `O(k), where k is the number of set bits` | `O(1)` |
| 338 | Counting Bits | Easy | [x] Solved | [`0338_counting_bits.cpp`](./01_Easy_Starter_Pack/0338_counting_bits.cpp) | [Open Problem](https://leetcode.com/problems/counting-bits/) | `O(n)` | `O(1) (excluding output array)` |
| 268 | Missing Number | Easy | [x] Solved | [`0268_missing_number.cpp`](./01_Easy_Starter_Pack/0268_missing_number.cpp) | [Open Problem](https://leetcode.com/problems/missing-number/) | `O(n)` | `O(1)` |
| 190 | Reverse Bits | Easy | [x] Solved | [`0190_reverse_bits.cpp`](./01_Easy_Starter_Pack/0190_reverse_bits.cpp) | [Open Problem](https://leetcode.com/problems/reverse-bits/) | `O(1)` | `O(1)` |

---

## 27. 1D DP Basics
**Core Patterns:** Climbing Stairs, House Robber, Coin Change, LIS

| # | Problem | Difficulty | Status | Solution File | LeetCode Link | Time Complexity | Space Complexity |
|---|---------|:----------:|:------:|---------------|---------------|:---------------:|:----------------:|
| 70 | Climbing Stairs | Easy | [x] Solved | [`0070_climbing_stairs.cpp`](./01_Easy_Starter_Pack/0070_climbing_stairs.cpp) | [Open Problem](https://leetcode.com/problems/climbing-stairs/) | `O(n)` | `O(1)` |
| 198 | House Robber | Medium | [x] Solved | [`0198_house_robber.cpp`](./03_New_Questions/0198_house_robber.cpp) | [Open Problem](https://leetcode.com/problems/house-robber/) | `O(n)` | `O(1)` |
| 213 | House Robber II | Medium | [x] Solved | [`0213_house_robber_ii.cpp`](./03_New_Questions/0213_house_robber_ii.cpp) | [Open Problem](https://leetcode.com/problems/house-robber-ii/) | `O(n)` | `O(1)` |
| 322 | Coin Change | Medium | [x] Solved | [`0322_coin_change.cpp`](./03_New_Questions/0322_coin_change.cpp) | [Open Problem](https://leetcode.com/problems/coin-change/) | `O(amount * len(coins))` | `O(amount)` |
| 279 | Perfect Squares | Medium | [x] Solved | [`0279_perfect_squares.cpp`](./04_OA_Roadmap_Pack/0279_perfect_squares.cpp) | [Open Problem](https://leetcode.com/problems/perfect-squares/) | `O(n * sqrt(n))` | `O(n)` |
| 300 | Longest Increasing Subsequence | Medium | [x] Solved | [`0300_longest_increasing_subsequence.cpp`](./03_New_Questions/0300_longest_increasing_subsequence.cpp) | [Open Problem](https://leetcode.com/problems/longest-increasing-subsequence/) | `O(n log n) via Patience Sorting / Binary Search` | `O(n)` |

---

## 28. Knapsack / Subset DP
**Core Patterns:** 0/1 Knapsack, Target Sum, Coin Change II, Profitable Schemes

| # | Problem | Difficulty | Status | Solution File | LeetCode Link | Time Complexity | Space Complexity |
|---|---------|:----------:|:------:|---------------|---------------|:---------------:|:----------------:|
| 416 | Partition Equal Subset Sum | Medium | [x] Solved | [`0416_partition_equal_subset_sum.cpp`](./03_New_Questions/0416_partition_equal_subset_sum.cpp) | [Open Problem](https://leetcode.com/problems/partition-equal-subset-sum/) | `O(n * target)` | `O(target)` |
| 494 | Target Sum | Medium | [x] Solved | [`0494_target_sum.cpp`](./04_OA_Roadmap_Pack/0494_target_sum.cpp) | [Open Problem](https://leetcode.com/problems/target-sum/) | `O(n * subsetSum)` | `O(subsetSum)` |
| 518 | Coin Change II | Medium | [x] Solved | [`0518_coin_change_ii.cpp`](./04_OA_Roadmap_Pack/0518_coin_change_ii.cpp) | [Open Problem](https://leetcode.com/problems/coin-change-ii/) | `O(n * amount)` | `O(amount)` |
| 474 | Ones and Zeroes | Medium | [x] Solved | [`0474_ones_and_zeroes.cpp`](./04_OA_Roadmap_Pack/0474_ones_and_zeroes.cpp) | [Open Problem](https://leetcode.com/problems/ones-and-zeroes/) | `O(l * m * n) where l is number of strings` | `O(m * n)` |
| 1049 | Last Stone Weight II | Medium | [x] Solved | [`1049_last_stone_weight_ii.cpp`](./04_OA_Roadmap_Pack/1049_last_stone_weight_ii.cpp) | [Open Problem](https://leetcode.com/problems/last-stone-weight-ii/) | `O(n * totalSum)` | `O(totalSum)` |
| 879 | Profitable Schemes | Hard | [x] Solved | [`0879_profitable_schemes.cpp`](./04_OA_Roadmap_Pack/0879_profitable_schemes.cpp) | [Open Problem](https://leetcode.com/problems/profitable-schemes/) | `O(m * n * minProfit) where m is number of crimes` | `O(n * minProfit)` |

---

## 29. Grid DP
**Core Patterns:** Unique Paths, Minimum Path Sum, Maximal Square, Falling Path Sum

| # | Problem | Difficulty | Status | Solution File | LeetCode Link | Time Complexity | Space Complexity |
|---|---------|:----------:|:------:|---------------|---------------|:---------------:|:----------------:|
| 62 | Unique Paths | Medium | [x] Solved | [`0062_unique_paths.cpp`](./03_New_Questions/0062_unique_paths.cpp) | [Open Problem](https://leetcode.com/problems/unique-paths/) | `O(m * n)` | `O(n)` |
| 63 | Unique Paths II | Medium | [x] Solved | [`0063_unique_paths_ii.cpp`](./04_OA_Roadmap_Pack/0063_unique_paths_ii.cpp) | [Open Problem](https://leetcode.com/problems/unique-paths-ii/) | `O(m * n)` | `O(n) auxiliary space` |
| 64 | Minimum Path Sum | Medium | [x] Solved | [`0064_minimum_path_sum.cpp`](./04_OA_Roadmap_Pack/0064_minimum_path_sum.cpp) | [Open Problem](https://leetcode.com/problems/minimum-path-sum/) | `O(m * n)` | `O(n) auxiliary space` |
| 221 | Maximal Square | Medium | [x] Solved | [`0221_maximal_square.cpp`](./04_OA_Roadmap_Pack/0221_maximal_square.cpp) | [Open Problem](https://leetcode.com/problems/maximal-square/) | `O(m * n)` | `O(n) auxiliary space` |
| 931 | Minimum Falling Path Sum | Medium | [x] Solved | [`0931_minimum_falling_path_sum.cpp`](./04_OA_Roadmap_Pack/0931_minimum_falling_path_sum.cpp) | [Open Problem](https://leetcode.com/problems/minimum-falling-path-sum/) | `O(n^2)` | `O(n) auxiliary space` |
| 120 | Triangle | Medium | [x] Solved | [`0120_triangle.cpp`](./04_OA_Roadmap_Pack/0120_triangle.cpp) | [Open Problem](https://leetcode.com/problems/triangle/) | `O(n^2)` | `O(n) auxiliary space` |

---

## 30. String DP / Sequence DP
**Core Patterns:** LCS, Edit Distance, Distinct Subsequences, Interleaving Strings

| # | Problem | Difficulty | Status | Solution File | LeetCode Link | Time Complexity | Space Complexity |
|---|---------|:----------:|:------:|---------------|---------------|:---------------:|:----------------:|
| 1143 | Longest Common Subsequence | Medium | [x] Solved | [`1143_longest_common_subsequence.cpp`](./03_New_Questions/1143_longest_common_subsequence.cpp) | [Open Problem](https://leetcode.com/problems/longest-common-subsequence/) | `O(m * n)` | `O(min(m, n))` |
| 72 | Edit Distance | Medium | [x] Solved | [`0072_edit_distance.cpp`](./03_New_Questions/0072_edit_distance.cpp) | [Open Problem](https://leetcode.com/problems/edit-distance/) | `O(m * n)` | `O(n)` |
| 115 | Distinct Subsequences | Hard | [x] Solved | [`0115_distinct_subsequences.cpp`](./04_OA_Roadmap_Pack/0115_distinct_subsequences.cpp) | [Open Problem](https://leetcode.com/problems/distinct-subsequences/) | `O(m * n)` | `O(n) auxiliary space` |
| 583 | Delete Operation for Two Strings | Medium | [x] Solved | [`0583_delete_operation_for_two_strings.cpp`](./04_OA_Roadmap_Pack/0583_delete_operation_for_two_strings.cpp) | [Open Problem](https://leetcode.com/problems/delete-operation-for-two-strings/) | `O(m * n)` | `O(n) auxiliary space` |
| 97 | Interleaving String | Medium | [x] Solved | [`0097_interleaving_string.cpp`](./04_OA_Roadmap_Pack/0097_interleaving_string.cpp) | [Open Problem](https://leetcode.com/problems/interleaving-string/) | `O(m * n)` | `O(n) auxiliary space` |
| 1312 | Minimum Insertion Steps to Make a String Palindrome | Hard | [x] Solved | [`1312_minimum_insertion_steps_to_make_a_string_palindrome.cpp`](./04_OA_Roadmap_Pack/1312_minimum_insertion_steps_to_make_a_string_palindrome.cpp) | [Open Problem](https://leetcode.com/problems/minimum-insertion-steps-to-make-a-string-palindrome/) | `O(n^2)` | `O(n) auxiliary space` |

---

