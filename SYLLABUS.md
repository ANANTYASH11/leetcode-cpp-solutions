# 100+ Master LeetCode Syllabus & Problem Tracker

**Author:** [Anant Yash](https://leetcode.com/u/ANANTYASH11/)  
**Target:** 120 Essential Coding Interview Problems (Blind 75 + NeetCode 150 + Top Interview Classics)  
**Language:** C++ (C++17 / C++20)  
**Total Problems:** 120+ | **Solved in Repo:** 152 | **Status:** ✅ Complete Master Pack  

---

## 📊 Summary Progress by Category

| # | Category | Total | In Repo | To Add | Target Patterns |
|---|----------|:-----:|:-------:|:------:|-----------------|
| 1 | **Arrays & Hashing** | 12 | 12 | 0 | Hash Maps, Frequency Arrays, Prefix / Suffix Products |
| 2 | **Two Pointers** | 10 | 10 | 0 | Opposite Ends, Dutch Flag, Fast/Slow Traversal |
| 3 | **Sliding Window** | 8 | 8 | 0 | Dynamic Window, Frequency Window, Shrink-Expand |
| 4 | **Stack & Monotonic Stack** | 10 | 10 | 0 | LIFO, Monotonic Increasing/Decreasing Stacks |
| 5 | **Binary Search** | 8 | 8 | 0 | Boundary Search, Rotated Arrays, Search on Answer |
| 6 | **Linked Lists** | 18 | 18 | 0 | Fast & Slow Pointers, Reversal, Dummy Nodes |
| 7 | **Trees & BST** | 18 | 18 | 0 | DFS Traversal, Level Order (BFS), LCA, Tree DP |
| 8 | **Tries (Prefix Trees)** | 3 | 3 | 0 | Prefix Trie, Wildcard Search |
| 9 | **Heap / Priority Queue** | 6 | 6 | 0 | Min/Max Heaps, Top-K Elements, Two Heaps Median |
| 10 | **Backtracking** | 8 | 8 | 0 | Subsets, Permutations, Pruning, State Space Tree |
| 11 | **Graphs (BFS & DFS)** | 10 | 10 | 0 | Flood Fill, Cycle Detection, Topological Sort |
| 12 | **Dynamic Programming (1D & 2D)** | 12 | 12 | 0 | Memoization, Tabulation, 0/1 Knapsack, LCS |
| 13 | **Greedy & Intervals & Matrix** | 9 | 9 | 0 | Greedy Choice, Interval Merging, Matrix Traversal |
| 14 | **Bit Manipulation & Math** | 11 | 11 | 0 | XOR Properties, Bit Shifting, Modular Arithmetic |
| **Total** | | **120+** | **152** | **0** | **100% Solved & Ready for Instant Acceptance** |

---

## 1. Arrays & Hashing

| # | Problem | Difficulty | Status | File / Target | LeetCode Link | Core Technique |
|---|---------|:----------:|:------:|---------------|---------------|----------------|
| 1 | Two Sum | Easy | [x] Solved | [`0001_two_sum.cpp`](./01_Easy_Starter_Pack/0001_two_sum.cpp) | [Open](https://leetcode.com/problems/two-sum/) | Hash map lookup |
| 217 | Contains Duplicate | Easy | [x] Solved | [`0217_contains_duplicate.cpp`](./01_Easy_Starter_Pack/0217_contains_duplicate.cpp) | [Open](https://leetcode.com/problems/contains-duplicate/) | Hash set |
| 242 | Valid Anagram | Easy | [x] Solved | [`0242_valid_anagram.cpp`](./01_Easy_Starter_Pack/0242_valid_anagram.cpp) | [Open](https://leetcode.com/problems/valid-anagram/) | Character frequency array |
| 169 | Majority Element | Easy | [x] Solved | [`0169_majority_element.cpp`](./01_Easy_Starter_Pack/0169_majority_element.cpp) | [Open](https://leetcode.com/problems/majority-element/) | Boyer-Moore Voting |
| 49 | Group Anagrams | Medium | [x] Solved | [`0049_group_anagrams.cpp`](./02_Medium_Pack/0049_group_anagrams.cpp) | [Open](https://leetcode.com/problems/group-anagrams/) | Hash map with sorted key |
| 347 | Top K Frequent Elements | Medium | [x] Solved | [`0347_top_k_frequent_elements.cpp`](./02_Medium_Pack/0347_top_k_frequent_elements.cpp) | [Open](https://leetcode.com/problems/top-k-frequent-elements/) | Bucket Sort / Min-Heap |
| 238 | Product of Array Except Self | Medium | [x] Solved | [`0238_product_of_array_except_self.cpp`](./02_Medium_Pack/0238_product_of_array_except_self.cpp) | [Open](https://leetcode.com/problems/product-of-array-except-self/) | Prefix & suffix products |
| 36 | Valid Sudoku | Medium | [x] Solved | [`0036_valid_sudoku.cpp`](./02_Medium_Pack/0036_valid_sudoku.cpp) | [Open](https://leetcode.com/problems/valid-sudoku/) | 2D Hash sets / bitmasks |
| 128 | Longest Consecutive Sequence | Medium | [x] Solved | [`0128_longest_consecutive_sequence.cpp`](./02_Medium_Pack/0128_longest_consecutive_sequence.cpp) | [Open](https://leetcode.com/problems/longest-consecutive-sequence/) | Unordered set sequence start check |
| 75 | Sort Colors | Medium | [x] Solved | [`0075_sort_colors.cpp`](./02_Medium_Pack/0075_sort_colors.cpp) | [Open](https://leetcode.com/problems/sort-colors/) | 3-way Dutch National Flag |
| 560 | Subarray Sum Equals K | Medium | [x] Solved | [`0560_subarray_sum_equals_k.cpp`](./02_Medium_Pack/0560_subarray_sum_equals_k.cpp) | [Open](https://leetcode.com/problems/subarray-sum-equals-k/) | Prefix sum + Hash map |
| 383 | Ransom Note | Easy | [x] Solved | [`0383_ransom_note.cpp`](./01_Easy_Starter_Pack/0383_ransom_note.cpp) | [Open](https://leetcode.com/problems/ransom-note/) | Frequency counting |

---

## 2. Two Pointers

| # | Problem | Difficulty | Status | File / Target | LeetCode Link | Core Technique |
|---|---------|:----------:|:------:|---------------|---------------|----------------|
| 125 | Valid Palindrome | Easy | [x] Solved | [`0125_valid_palindrome.cpp`](./01_Easy_Starter_Pack/0125_valid_palindrome.cpp) | [Open](https://leetcode.com/problems/valid-palindrome/) | Left/right converge |
| 26 | Remove Duplicates from Sorted Array | Easy | [x] Solved | [`0026_remove_duplicates.cpp`](./01_Easy_Starter_Pack/0026_remove_duplicates.cpp) | [Open](https://leetcode.com/problems/remove-duplicates-from-sorted-array/) | Fast/slow writer pointer |
| 27 | Remove Element | Easy | [x] Solved | [`0027_remove_element.cpp`](./01_Easy_Starter_Pack/0027_remove_element.cpp) | [Open](https://leetcode.com/problems/remove-element/) | In-place overwrite pointer |
| 283 | Move Zeroes | Easy | [x] Solved | [`0283_move_zeroes.cpp`](./01_Easy_Starter_Pack/0283_move_zeroes.cpp) | [Open](https://leetcode.com/problems/move-zeroes/) | Two pointers swap |
| 88 | Merge Sorted Array | Easy | [x] Solved | [`0088_merge_sorted_array.cpp`](./01_Easy_Starter_Pack/0088_merge_sorted_array.cpp) | [Open](https://leetcode.com/problems/merge-sorted-array/) | 3 pointers backwards fill |
| 167 | Two Sum II - Input Array Is Sorted | Medium | [x] Solved | [`0167_two_sum_ii_input_array_is_sorted.cpp`](./02_Medium_Pack/0167_two_sum_ii_input_array_is_sorted.cpp) | [Open](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/) | Shrinking window two pointers |
| 15 | 3Sum | Medium | [x] Solved | [`0015_3sum.cpp`](./02_Medium_Pack/0015_3sum.cpp) | [Open](https://leetcode.com/problems/3sum/) | Sort + Two Pointers |
| 11 | Container With Most Water | Medium | [x] Solved | [`0011_container_with_most_water.cpp`](./02_Medium_Pack/0011_container_with_most_water.cpp) | [Open](https://leetcode.com/problems/container-with-most-water/) | Greedy shrinking width |
| 42 | Trapping Rain Water | Hard | [x] Solved | [`0042_trapping_rain_water.cpp`](./02_Medium_Pack/0042_trapping_rain_water.cpp) | [Open](https://leetcode.com/problems/trapping-rain-water/) | Two pointers maxLeft/maxRight |
| 845 | Longest Mountain in Array | Medium | [x] Solved | [`0845_longest_mountain_in_array.cpp`](./02_Medium_Pack/0845_longest_mountain_in_array.cpp) | [Open](https://leetcode.com/problems/longest-mountain-in-array/) | Peak expansion two pointers |

---

## 3. Sliding Window

| # | Problem | Difficulty | Status | File / Target | LeetCode Link | Core Technique |
|---|---------|:----------:|:------:|---------------|---------------|----------------|
| 121 | Best Time to Buy and Sell Stock | Easy | [x] Solved | [`0121_best_time_to_buy_and_sell_stock.cpp`](./01_Easy_Starter_Pack/0121_best_time_to_buy_and_sell_stock.cpp) | [Open](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/) | Running minimum tracking |
| 3 | Longest Substring Without Repeating Characters | Medium | [x] Solved | [`0003_longest_substring_without_repeating_characters.cpp`](./02_Medium_Pack/0003_longest_substring_without_repeating_characters.cpp) | [Open](https://leetcode.com/problems/longest-substring-without-repeating-characters/) | Dynamic sliding window + set |
| 424 | Longest Repeating Character Replacement | Medium | [x] Solved | [`0424_longest_repeating_character_replacement.cpp`](./02_Medium_Pack/0424_longest_repeating_character_replacement.cpp) | [Open](https://leetcode.com/problems/longest-repeating-character-replacement/) | Max frequency window condition |
| 567 | Permutation in String | Medium | [x] Solved | [`0567_permutation_in_string.cpp`](./02_Medium_Pack/0567_permutation_in_string.cpp) | [Open](https://leetcode.com/problems/permutation-in-string/) | Fixed-length sliding window |
| 209 | Minimum Size Subarray Sum | Medium | [x] Solved | [`0209_minimum_size_subarray_sum.cpp`](./02_Medium_Pack/0209_minimum_size_subarray_sum.cpp) | [Open](https://leetcode.com/problems/minimum-size-subarray-sum/) | Variable window shrink |
| 904 | Fruit Into Baskets | Medium | [x] Solved | [`0904_fruit_into_baskets.cpp`](./02_Medium_Pack/0904_fruit_into_baskets.cpp) | [Open](https://leetcode.com/problems/fruit-into-baskets/) | At most 2 distinct elements |
| 76 | Minimum Window Substring | Hard | [x] Solved | [`0076_minimum_window_substring.cpp`](./02_Medium_Pack/0076_minimum_window_substring.cpp) | [Open](https://leetcode.com/problems/minimum-window-substring/) | Hash map match count window |
| 239 | Sliding Window Maximum | Hard | [x] Solved | [`0239_sliding_window_maximum.cpp`](./02_Medium_Pack/0239_sliding_window_maximum.cpp) | [Open](https://leetcode.com/problems/sliding-window-maximum/) | Monotonic decreasing deque |

---

## 4. Stack & Monotonic Stack

| # | Problem | Difficulty | Status | File / Target | LeetCode Link | Core Technique |
|---|---------|:----------:|:------:|---------------|---------------|----------------|
| 20 | Valid Parentheses | Easy | [x] Solved | [`0020_valid_parentheses.cpp`](./01_Easy_Starter_Pack/0020_valid_parentheses.cpp) | [Open](https://leetcode.com/problems/valid-parentheses/) | LIFO matching |
| 155 | Min Stack | Medium | [x] Solved | [`0155_min_stack.cpp`](./02_Medium_Pack/0155_min_stack.cpp) | [Open](https://leetcode.com/problems/min-stack/) | Auxiliary min tracking stack |
| 150 | Evaluate Reverse Polish Notation | Medium | [x] Solved | [`0150_evaluate_reverse_polish_notation.cpp`](./02_Medium_Pack/0150_evaluate_reverse_polish_notation.cpp) | [Open](https://leetcode.com/problems/evaluate-reverse-polish-notation/) | Operand stack evaluation |
| 22 | Generate Parentheses | Medium | [x] Solved | [`0022_generate_parentheses.cpp`](./02_Medium_Pack/0022_generate_parentheses.cpp) | [Open](https://leetcode.com/problems/generate-parentheses/) | Backtracking / Stack |
| 739 | Daily Temperatures | Medium | [x] Solved | [`0739_daily_temperatures.cpp`](./02_Medium_Pack/0739_daily_temperatures.cpp) | [Open](https://leetcode.com/problems/daily-temperatures/) | Monotonic decreasing stack |
| 853 | Car Fleet | Medium | [x] Solved | [`0853_car_fleet.cpp`](./02_Medium_Pack/0853_car_fleet.cpp) | [Open](https://leetcode.com/problems/car-fleet/) | Position sorting + Time stack |
| 503 | Next Greater Element II | Medium | [x] Solved | [`0503_next_greater_element_ii.cpp`](./02_Medium_Pack/0503_next_greater_element_ii.cpp) | [Open](https://leetcode.com/problems/next-greater-element-ii/) | Circular monotonic stack |
| 402 | Remove K Digits | Medium | [x] Solved | [`0402_remove_k_digits.cpp`](./02_Medium_Pack/0402_remove_k_digits.cpp) | [Open](https://leetcode.com/problems/remove-k-digits/) | Monotonic stack greedy removal |
| 394 | Decode String | Medium | [x] Solved | [`0394_decode_string.cpp`](./02_Medium_Pack/0394_decode_string.cpp) | [Open](https://leetcode.com/problems/decode-string/) | Nested count & string stacks |
| 84 | Largest Rectangle in Histogram | Hard | [x] Solved | [`0084_largest_rectangle_in_histogram.cpp`](./02_Medium_Pack/0084_largest_rectangle_in_histogram.cpp) | [Open](https://leetcode.com/problems/largest-rectangle-in-histogram/) | Monotonic increasing stack |

---

## 5. Binary Search

| # | Problem | Difficulty | Status | File / Target | LeetCode Link | Core Technique |
|---|---------|:----------:|:------:|---------------|---------------|----------------|
| 704 | Binary Search | Easy | [x] Solved | [`0704_binary_search.cpp`](./01_Easy_Starter_Pack/0704_binary_search.cpp) | [Open](https://leetcode.com/problems/binary-search/) | Standard low/high divide |
| 35 | Search Insert Position | Easy | [x] Solved | [`0035_search_insert_position.cpp`](./01_Easy_Starter_Pack/0035_search_insert_position.cpp) | [Open](https://leetcode.com/problems/search-insert-position/) | Lower bound binary search |
| 69 | Sqrt(x) | Easy | [x] Solved | [`0069_sqrtx.cpp`](./01_Easy_Starter_Pack/0069_sqrtx.cpp) | [Open](https://leetcode.com/problems/sqrtx/) | Range monotonic search |
| 74 | Search a 2D Matrix | Medium | [x] Solved | [`0074_search_a_2d_matrix.cpp`](./02_Medium_Pack/0074_search_a_2d_matrix.cpp) | [Open](https://leetcode.com/problems/search-a-2d-matrix/) | Flat index binary search |
| 875 | Koko Eating Bananas | Medium | [x] Solved | [`0875_koko_eating_bananas.cpp`](./02_Medium_Pack/0875_koko_eating_bananas.cpp) | [Open](https://leetcode.com/problems/koko-eating-bananas/) | Binary search on speed answer |
| 33 | Search in Rotated Sorted Array | Medium | [x] Solved | [`0033_search_in_rotated_sorted_array.cpp`](./02_Medium_Pack/0033_search_in_rotated_sorted_array.cpp) | [Open](https://leetcode.com/problems/search-in-rotated-sorted-array/) | Pivoted binary search |
| 153 | Find Minimum in Rotated Sorted Array | Medium | [x] Solved | [`0153_find_minimum_in_rotated_sorted_array.cpp`](./02_Medium_Pack/0153_find_minimum_in_rotated_sorted_array.cpp) | [Open](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/) | Inflection point binary search |
| 4 | Median of Two Sorted Arrays | Hard | [x] Solved | [`0004_median_of_two_sorted_arrays.cpp`](./02_Medium_Pack/0004_median_of_two_sorted_arrays.cpp) | [Open](https://leetcode.com/problems/median-of-two-sorted-arrays/) | Binary search on partition cut |

---

## 6. Linked Lists & Fast/Slow Pointers

| # | Problem | Difficulty | Status | File / Target | LeetCode Link | Core Technique |
|---|---------|:----------:|:------:|---------------|---------------|----------------|
| 206 | Reverse Linked List | Easy | [x] Solved | [`0206_reverse_linked_list.cpp`](./01_Easy_Starter_Pack/0206_reverse_linked_list.cpp) | [Open](https://leetcode.com/problems/reverse-linked-list/) | 3-pointer iterative reversal |
| 21 | Merge Two Sorted Lists | Easy | [x] Solved | [`0021_merge_two_sorted_lists.cpp`](./01_Easy_Starter_Pack/0021_merge_two_sorted_lists.cpp) | [Open](https://leetcode.com/problems/merge-two-sorted-lists/) | Dummy node comparison merge |
| 141 | Linked List Cycle | Easy | [x] Solved | [`0141_linked_list_cycle.cpp`](./01_Easy_Starter_Pack/0141_linked_list_cycle.cpp) | [Open](https://leetcode.com/problems/linked-list-cycle/) | Floyd's Tortoise and Hare |
| 876 | Middle of the Linked List | Easy | [x] Solved | [`0876_middle_of_the_linked_list.cpp`](./01_Easy_Starter_Pack/0876_middle_of_the_linked_list.cpp) | [Open](https://leetcode.com/problems/middle-of-the-linked-list/) | Fast 2x, Slow 1x pointers |
| 234 | Palindrome Linked List | Easy | [x] Solved | [`0234_palindrome_linked_list.cpp`](./01_Easy_Starter_Pack/0234_palindrome_linked_list.cpp) | [Open](https://leetcode.com/problems/palindrome-linked-list/) | Find mid + Reverse second half |
| 160 | Intersection of Two Linked Lists | Easy | [x] Solved | [`0160_intersection_of_two_linked_lists.cpp`](./01_Easy_Starter_Pack/0160_intersection_of_two_linked_lists.cpp) | [Open](https://leetcode.com/problems/intersection-of-two-linked-lists/) | Equalizing pointer traversal |
| 83 | Remove Duplicates from Sorted List | Easy | [x] Solved | [`0083_remove_duplicates_from_sorted_list.cpp`](./01_Easy_Starter_Pack/0083_remove_duplicates_from_sorted_list.cpp) | [Open](https://leetcode.com/problems/remove-duplicates-from-sorted-list/) | Skip adjacent duplicate nodes |
| 203 | Remove Linked List Elements | Easy | [x] Solved | [`0203_remove_linked_list_elements.cpp`](./01_Easy_Starter_Pack/0203_remove_linked_list_elements.cpp) | [Open](https://leetcode.com/problems/remove-linked-list-elements/) | Dummy node deletion |
| 2 | Add Two Numbers | Medium | [x] Solved | [`0002_add_two_numbers.cpp`](./02_Medium_Pack/0002_add_two_numbers.cpp) | [Open](https://leetcode.com/problems/add-two-numbers/) | Elementary school digit add + carry |
| 19 | Remove Nth Node From End of List | Medium | [x] Solved | [`0019_remove_nth_node_from_end_of_list.cpp`](./02_Medium_Pack/0019_remove_nth_node_from_end_of_list.cpp) | [Open](https://leetcode.com/problems/remove-nth-node-from-end-of-list/) | Gap pointer (n+1 offset) |
| 61 | Rotate List | Medium | [x] Solved | [`0061_rotate_list.cpp`](./02_Medium_Pack/0061_rotate_list.cpp) | [Open](https://leetcode.com/problems/rotate-list/) | Ring link & cut at length - k |
| 142 | Linked List Cycle II | Medium | [x] Solved | [`0142_linked_list_cycle_ii.cpp`](./02_Medium_Pack/0142_linked_list_cycle_ii.cpp) | [Open](https://leetcode.com/problems/linked-list-cycle-ii/) | Cycle detection + Head rendezvous |
| 143 | Reorder List | Medium | [x] Solved | [`0143_reorder_list.cpp`](./02_Medium_Pack/0143_reorder_list.cpp) | [Open](https://leetcode.com/problems/reorder-list/) | Find mid + Reverse + Interleave |
| 287 | Find the Duplicate Number | Medium | [x] Solved | [`0287_find_the_duplicate_number.cpp`](./02_Medium_Pack/0287_find_the_duplicate_number.cpp) | [Open](https://leetcode.com/problems/find-the-duplicate-number/) | Array treated as linked list cycle |
| 2095 | Delete Middle Node of Linked List | Medium | [x] Solved | [`2095_delete_the_middle_node_of_a_linked_list.cpp`](./02_Medium_Pack/2095_delete_the_middle_node_of_a_linked_list.cpp) | [Open](https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/) | Fast/Slow pointers prev track |
| 2130 | Maximum Twin Sum of a Linked List | Medium | [x] Solved | [`2130_maximum_twin_sum_of_a_linked_list.cpp`](./02_Medium_Pack/2130_maximum_twin_sum_of_a_linked_list.cpp) | [Open](https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list/) | Mid reverse + twin pair sum |
| 138 | Copy List with Random Pointer | Medium | [x] Solved | [`0138_copy_list_with_random_pointer.cpp`](./02_Medium_Pack/0138_copy_list_with_random_pointer.cpp) | [Open](https://leetcode.com/problems/copy-list-with-random-pointer/) | Interweaving nodes / Hash map |
| 23 | Merge k Sorted Lists | Hard | [x] Solved | [`0023_merge_k_sorted_lists.cpp`](./02_Medium_Pack/0023_merge_k_sorted_lists.cpp) | [Open](https://leetcode.com/problems/merge-k-sorted-lists/) | Priority Queue / Divide & Conquer |

---

## 7. Trees & Binary Search Trees

| # | Problem | Difficulty | Status | File / Target | LeetCode Link | Core Technique |
|---|---------|:----------:|:------:|---------------|---------------|----------------|
| 94 | Binary Tree Inorder Traversal | Easy | [x] Solved | [`0094_binary_tree_inorder_traversal.cpp`](./01_Easy_Starter_Pack/0094_binary_tree_inorder_traversal.cpp) | [Open](https://leetcode.com/problems/binary-tree-inorder-traversal/) | Morris Traversal / Stack DFS |
| 100 | Same Tree | Easy | [x] Solved | [`0100_same_tree.cpp`](./01_Easy_Starter_Pack/0100_same_tree.cpp) | [Open](https://leetcode.com/problems/same-tree/) | Structural DFS recursion |
| 101 | Symmetric Tree | Easy | [x] Solved | [`0101_symmetric_tree.cpp`](./01_Easy_Starter_Pack/0101_symmetric_tree.cpp) | [Open](https://leetcode.com/problems/symmetric-tree/) | Mirror DFS comparison |
| 104 | Maximum Depth of Binary Tree | Easy | [x] Solved | [`0104_maximum_depth_of_binary_tree.cpp`](./01_Easy_Starter_Pack/0104_maximum_depth_of_binary_tree.cpp) | [Open](https://leetcode.com/problems/maximum-depth-of-binary-tree/) | Height recursion DFS |
| 108 | Convert Sorted Array to BST | Easy | [x] Solved | [`0108_convert_sorted_array_to_binary_search_tree.cpp`](./01_Easy_Starter_Pack/0108_convert_sorted_array_to_binary_search_tree.cpp) | [Open](https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/) | Mid-element root partition |
| 110 | Balanced Binary Tree | Easy | [x] Solved | [`0110_balanced_binary_tree.cpp`](./01_Easy_Starter_Pack/0110_balanced_binary_tree.cpp) | [Open](https://leetcode.com/problems/balanced-binary-tree/) | Bottom-up height check |
| 111 | Minimum Depth of Binary Tree | Easy | [x] Solved | [`0111_minimum_depth_of_binary_tree.cpp`](./01_Easy_Starter_Pack/0111_minimum_depth_of_binary_tree.cpp) | [Open](https://leetcode.com/problems/minimum-depth-of-binary-tree/) | Leaf check DFS / BFS |
| 112 | Path Sum | Easy | [x] Solved | [`0112_path_sum.cpp`](./01_Easy_Starter_Pack/0112_path_sum.cpp) | [Open](https://leetcode.com/problems/path-sum/) | Target subtraction DFS |
| 144 | Binary Tree Preorder Traversal | Easy | [x] Solved | [`0144_binary_tree_preorder_traversal.cpp`](./01_Easy_Starter_Pack/0144_binary_tree_preorder_traversal.cpp) | [Open](https://leetcode.com/problems/binary-tree-preorder-traversal/) | Preorder traversal |
| 145 | Binary Tree Postorder Traversal | Easy | [x] Solved | [`0145_binary_tree_postorder_traversal.cpp`](./01_Easy_Starter_Pack/0145_binary_tree_postorder_traversal.cpp) | [Open](https://leetcode.com/problems/binary-tree-postorder-traversal/) | Postorder traversal |
| 226 | Invert Binary Tree | Easy | [x] Solved | [`0226_invert_binary_tree.cpp`](./01_Easy_Starter_Pack/0226_invert_binary_tree.cpp) | [Open](https://leetcode.com/problems/invert-binary-tree/) | Swap left/right pointers |
| 543 | Diameter of Binary Tree | Easy | [x] Solved | [`0543_diameter_of_binary_tree.cpp`](./01_Easy_Starter_Pack/0543_diameter_of_binary_tree.cpp) | [Open](https://leetcode.com/problems/diameter-of-binary-tree/) | Subtree height maximum sum |
| 572 | Subtree of Another Tree | Easy | [x] Solved | [`0572_subtree_of_another_tree.cpp`](./01_Easy_Starter_Pack/0572_subtree_of_another_tree.cpp) | [Open](https://leetcode.com/problems/subtree-of-another-tree/) | Same tree checker on each node |
| 102 | Binary Tree Level Order Traversal | Medium | [x] Solved | [`0102_binary_tree_level_order_traversal.cpp`](./02_Medium_Pack/0102_binary_tree_level_order_traversal.cpp) | [Open](https://leetcode.com/problems/binary-tree-level-order-traversal/) | BFS Queue level sizing |
| 199 | Binary Tree Right Side View | Medium | [x] Solved | [`0199_binary_tree_right_side_view.cpp`](./02_Medium_Pack/0199_binary_tree_right_side_view.cpp) | [Open](https://leetcode.com/problems/binary-tree-right-side-view/) | BFS last element / DFS right first |
| 236 | Lowest Common Ancestor of Binary Tree | Medium | [x] Solved | [`0236_lowest_common_ancestor_of_a_binary_tree.cpp`](./02_Medium_Pack/0236_lowest_common_ancestor_of_a_binary_tree.cpp) | [Open](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/) | Postorder DFS bubble-up |
| 235 | Lowest Common Ancestor of a BST | Medium | [x] Solved | [`0235_lowest_common_ancestor_of_a_binary_search_tree.cpp`](./02_Medium_Pack/0235_lowest_common_ancestor_of_a_binary_search_tree.cpp) | [Open](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/) | BST value comparison branch |
| 230 | Kth Smallest Element in a BST | Medium | [x] Solved | [`0230_kth_smallest_element_in_a_bst.cpp`](./02_Medium_Pack/0230_kth_smallest_element_in_a_bst.cpp) | [Open](https://leetcode.com/problems/kth-smallest-element-in-a-bst/) | Inorder traversal early stop |

---

## 8. Tries (Prefix Trees)

| # | Problem | Difficulty | Status | File / Target | LeetCode Link | Core Technique |
|---|---------|:----------:|:------:|---------------|---------------|----------------|
| 208 | Implement Trie (Prefix Tree) | Medium | [x] Solved | [`0208_implement_trie_prefix_tree.cpp`](./02_Medium_Pack/0208_implement_trie_prefix_tree.cpp) | [Open](https://leetcode.com/problems/implement-trie-prefix-tree/) | 26-way TrieNode tree |
| 211 | Design Add & Search Words Data Structure | Medium | [x] Solved | [`0211_design_add_and_search_words_data_structure.cpp`](./02_Medium_Pack/0211_design_add_and_search_words_data_structure.cpp) | [Open](https://leetcode.com/problems/design-add-and-search-words-data-structure/) | Trie + DFS Wildcard '.' Search |
| 212 | Word Search II | Hard | [x] Solved | [`0212_word_search_ii.cpp`](./02_Medium_Pack/0212_word_search_ii.cpp) | [Open](https://leetcode.com/problems/word-search-ii/) | Trie + Grid Backtracking DFS |

---

## 9. Heap / Priority Queue

| # | Problem | Difficulty | Status | File / Target | LeetCode Link | Core Technique |
|---|---------|:----------:|:------:|---------------|---------------|----------------|
| 703 | Kth Largest Element in a Stream | Easy | [x] Solved | [`0703_kth_largest_element_in_a_stream.cpp`](./02_Medium_Pack/0703_kth_largest_element_in_a_stream.cpp) | [Open](https://leetcode.com/problems/kth-largest-element-in-a-stream/) | Fixed size Min-Heap |
| 215 | Kth Largest Element in an Array | Medium | [x] Solved | [`0215_kth_largest_element_in_an_array.cpp`](./02_Medium_Pack/0215_kth_largest_element_in_an_array.cpp) | [Open](https://leetcode.com/problems/kth-largest-element-in-an-array/) | Min-Heap or Quickselect |
| 973 | K Closest Points to Origin | Medium | [x] Solved | [`0973_k_closest_points_to_origin.cpp`](./02_Medium_Pack/0973_k_closest_points_to_origin.cpp) | [Open](https://leetcode.com/problems/k-closest-points-to-origin/) | Max-Heap of size K |
| 621 | Task Scheduler | Medium | [x] Solved | [`0621_task_scheduler.cpp`](./02_Medium_Pack/0621_task_scheduler.cpp) | [Open](https://leetcode.com/problems/task-scheduler/) | Max-Heap + Cooldown Deque |
| 355 | Design Twitter | Medium | [x] Solved | [`0355_design_twitter.cpp`](./02_Medium_Pack/0355_design_twitter.cpp) | [Open](https://leetcode.com/problems/design-twitter/) | Hash map + Max-Heap merge |
| 295 | Find Median from Data Stream | Hard | [x] Solved | [`0295_find_median_from_data_stream.cpp`](./02_Medium_Pack/0295_find_median_from_data_stream.cpp) | [Open](https://leetcode.com/problems/find-median-from-data-stream/) | Dual Heaps (Small Max, Large Min) |

---

## 10. Backtracking

| # | Problem | Difficulty | Status | File / Target | LeetCode Link | Core Technique |
|---|---------|:----------:|:------:|---------------|---------------|----------------|
| 78 | Subsets | Medium | [x] Solved | [`0078_subsets.cpp`](./02_Medium_Pack/0078_subsets.cpp) | [Open](https://leetcode.com/problems/subsets/) | Pick / Don't pick recursive tree |
| 90 | Subsets II | Medium | [x] Solved | [`0090_subsets_ii.cpp`](./02_Medium_Pack/0090_subsets_ii.cpp) | [Open](https://leetcode.com/problems/subsets-ii/) | Sort + Duplicate level skip |
| 39 | Combination Sum | Medium | [x] Solved | [`0039_combination_sum.cpp`](./02_Medium_Pack/0039_combination_sum.cpp) | [Open](https://leetcode.com/problems/combination-sum/) | Unlimited choice backtracking |
| 40 | Combination Sum II | Medium | [x] Solved | [`0040_combination_sum_ii.cpp`](./02_Medium_Pack/0040_combination_sum_ii.cpp) | [Open](https://leetcode.com/problems/combination-sum-ii/) | Single-use duplicate skip |
| 46 | Permutations | Medium | [x] Solved | [`0046_permutations.cpp`](./02_Medium_Pack/0046_permutations.cpp) | [Open](https://leetcode.com/problems/permutations/) | Swapping / Visited tracking |
| 79 | Word Search | Medium | [x] Solved | [`0079_word_search.cpp`](./02_Medium_Pack/0079_word_search.cpp) | [Open](https://leetcode.com/problems/word-search/) | Grid DFS backtrack with in-place mark |
| 131 | Palindrome Partitioning | Medium | [x] Solved | [`0131_palindrome_partitioning.cpp`](./02_Medium_Pack/0131_palindrome_partitioning.cpp) | [Open](https://leetcode.com/problems/palindrome-partitioning/) | Substring palindrome backtrack |
| 51 | N-Queens | Hard | [x] Solved | [`0051_n_queens.cpp`](./02_Medium_Pack/0051_n_queens.cpp) | [Open](https://leetcode.com/problems/n-queens/) | Row placement + Column/Diag sets |

---

## 11. Graphs (BFS, DFS, Topological Sort)

| # | Problem | Difficulty | Status | File / Target | LeetCode Link | Core Technique |
|---|---------|:----------:|:------:|---------------|---------------|----------------|
| 200 | Number of Islands | Medium | [x] Solved | [`0200_number_of_islands.cpp`](./02_Medium_Pack/0200_number_of_islands.cpp) | [Open](https://leetcode.com/problems/number-of-islands/) | Grid DFS / BFS Flood Fill |
| 133 | Clone Graph | Medium | [x] Solved | [`0133_clone_graph.cpp`](./02_Medium_Pack/0133_clone_graph.cpp) | [Open](https://leetcode.com/problems/clone-graph/) | Node map DFS memoization |
| 695 | Max Area of Island | Medium | [x] Solved | [`0695_max_area_of_island.cpp`](./02_Medium_Pack/0695_max_area_of_island.cpp) | [Open](https://leetcode.com/problems/max-area-of-island/) | Recursive area summation |
| 417 | Pacific Atlantic Water Flow | Medium | [x] Solved | [`0417_pacific_atlantic_water_flow.cpp`](./02_Medium_Pack/0417_pacific_atlantic_water_flow.cpp) | [Open](https://leetcode.com/problems/pacific-atlantic-water-flow/) | Reverse flow ocean boundary DFS |
| 130 | Surrounded Regions | Medium | [x] Solved | [`0130_surrounded_regions.cpp`](./02_Medium_Pack/0130_surrounded_regions.cpp) | [Open](https://leetcode.com/problems/surrounded-regions/) | Border 'O' protection flood fill |
| 994 | Rotting Oranges | Medium | [x] Solved | [`0994_rotting_oranges.cpp`](./02_Medium_Pack/0994_rotting_oranges.cpp) | [Open](https://leetcode.com/problems/rotting-oranges/) | Multi-source BFS with minute steps |
| 207 | Course Schedule | Medium | [x] Solved | [`0207_course_schedule.cpp`](./02_Medium_Pack/0207_course_schedule.cpp) | [Open](https://leetcode.com/problems/course-schedule/) | Kahn's Algorithm / Cycle DFS |
| 210 | Course Schedule II | Medium | [x] Solved | [`0210_course_schedule_ii.cpp`](./02_Medium_Pack/0210_course_schedule_ii.cpp) | [Open](https://leetcode.com/problems/course-schedule-ii/) | Topological sort order output |
| 684 | Redundant Connection | Medium | [x] Solved | [`0684_redundant_connection.cpp`](./02_Medium_Pack/0684_redundant_connection.cpp) | [Open](https://leetcode.com/problems/redundant-connection/) | Disjoint Set Union (Union-Find) |
| 127 | Word Ladder | Hard | [x] Solved | [`0127_word_ladder.cpp`](./02_Medium_Pack/0127_word_ladder.cpp) | [Open](https://leetcode.com/problems/word-ladder/) | Shortest path BFS |

---

## 12. Dynamic Programming (1-D & 2-D)

| # | Problem | Difficulty | Status | File / Target | LeetCode Link | Core Technique |
|---|---------|:----------:|:------:|---------------|---------------|----------------|
| 70 | Climbing Stairs | Easy | [x] Solved | [`0070_climbing_stairs.cpp`](./01_Easy_Starter_Pack/0070_climbing_stairs.cpp) | [Open](https://leetcode.com/problems/climbing-stairs/) | Fibonacci state transition |
| 746 | Min Cost Climbing Stairs | Easy | [x] Solved | [`0746_min_cost_climbing_stairs.cpp`](./02_Medium_Pack/0746_min_cost_climbing_stairs.cpp) | [Open](https://leetcode.com/problems/min-cost-climbing-stairs/) | Min cost recurrence |
| 198 | House Robber | Medium | [x] Solved | [`0198_house_robber.cpp`](./02_Medium_Pack/0198_house_robber.cpp) | [Open](https://leetcode.com/problems/house-robber/) | Rob / Skip alternate DP |
| 213 | House Robber II | Medium | [x] Solved | [`0213_house_robber_ii.cpp`](./02_Medium_Pack/0213_house_robber_ii.cpp) | [Open](https://leetcode.com/problems/house-robber-ii/) | Circular array two-slice DP |
| 5 | Longest Palindromic Substring | Medium | [x] Solved | [`0005_longest_palindromic_substring.cpp`](./02_Medium_Pack/0005_longest_palindromic_substring.cpp) | [Open](https://leetcode.com/problems/longest-palindromic-substring/) | Expand around centers / 2D DP |
| 322 | Coin Change | Medium | [x] Solved | [`0322_coin_change.cpp`](./02_Medium_Pack/0322_coin_change.cpp) | [Open](https://leetcode.com/problems/coin-change/) | Unbounded knapsack bottom-up |
| 152 | Maximum Product Subarray | Medium | [x] Solved | [`0152_maximum_product_subarray.cpp`](./02_Medium_Pack/0152_maximum_product_subarray.cpp) | [Open](https://leetcode.com/problems/maximum-product-subarray/) | Dual max/min product tracker |
| 300 | Longest Increasing Subsequence | Medium | [x] Solved | [`0300_longest_increasing_subsequence.cpp`](./02_Medium_Pack/0300_longest_increasing_subsequence.cpp) | [Open](https://leetcode.com/problems/longest-increasing-subsequence/) | DP O(n^2) or Binary Search O(n log n) |
| 416 | Partition Equal Subset Sum | Medium | [x] Solved | [`0416_partition_equal_subset_sum.cpp`](./02_Medium_Pack/0416_partition_equal_subset_sum.cpp) | [Open](https://leetcode.com/problems/partition-equal-subset-sum/) | 0/1 Knapsack subset target sum |
| 62 | Unique Paths | Medium | [x] Solved | [`0062_unique_paths.cpp`](./02_Medium_Pack/0062_unique_paths.cpp) | [Open](https://leetcode.com/problems/unique-paths/) | 2D Grid path addition |
| 1143 | Longest Common Subsequence | Medium | [x] Solved | [`1143_longest_common_subsequence.cpp`](./02_Medium_Pack/1143_longest_common_subsequence.cpp) | [Open](https://leetcode.com/problems/longest-common-subsequence/) | 2D match / diagonal DP table |
| 72 | Edit Distance | Medium | [x] Solved | [`0072_edit_distance.cpp`](./02_Medium_Pack/0072_edit_distance.cpp) | [Open](https://leetcode.com/problems/edit-distance/) | 2D Insert/Delete/Replace DP |

---

## 13. Greedy, Intervals & Matrix

| # | Problem | Difficulty | Status | File / Target | LeetCode Link | Core Technique |
|---|---------|:----------:|:------:|---------------|---------------|----------------|
| 53 | Maximum Subarray | Medium | [x] Solved | [`0053_maximum_subarray.cpp`](./02_Medium_Pack/0053_maximum_subarray.cpp) | [Open](https://leetcode.com/problems/maximum-subarray/) | Kadane's Algorithm |
| 55 | Jump Game | Medium | [x] Solved | [`0055_jump_game.cpp`](./02_Medium_Pack/0055_jump_game.cpp) | [Open](https://leetcode.com/problems/jump-game/) | Greedy max reach pointer |
| 45 | Jump Game II | Medium | [x] Solved | [`0045_jump_game_ii.cpp`](./02_Medium_Pack/0045_jump_game_ii.cpp) | [Open](https://leetcode.com/problems/jump-game-ii/) | Greedy BFS window jumps |
| 56 | Merge Intervals | Medium | [x] Solved | [`0056_merge_intervals.cpp`](./02_Medium_Pack/0056_merge_intervals.cpp) | [Open](https://leetcode.com/problems/merge-intervals/) | Sort by start + merge overlaps |
| 57 | Insert Interval | Medium | [x] Solved | [`0057_insert_interval.cpp`](./02_Medium_Pack/0057_insert_interval.cpp) | [Open](https://leetcode.com/problems/insert-interval/) | Pre, overlap merge, post insertion |
| 435 | Non-overlapping Intervals | Medium | [x] Solved | [`0435_non_overlapping_intervals.cpp`](./02_Medium_Pack/0435_non_overlapping_intervals.cpp) | [Open](https://leetcode.com/problems/non-overlapping-intervals/) | Sort by end + greedy interval drop |
| 54 | Spiral Matrix | Medium | [x] Solved | [`0054_spiral_matrix.cpp`](./02_Medium_Pack/0054_spiral_matrix.cpp) | [Open](https://leetcode.com/problems/spiral-matrix/) | Boundary contraction simulation |
| 73 | Set Matrix Zeroes | Medium | [x] Solved | [`0073_set_matrix_zeroes.cpp`](./02_Medium_Pack/0073_set_matrix_zeroes.cpp) | [Open](https://leetcode.com/problems/set-matrix-zeroes/) | First row/column in-place markers |
| 48 | Rotate Image | Medium | [x] Solved | [`0048_rotate_image.cpp`](./02_Medium_Pack/0048_rotate_image.cpp) | [Open](https://leetcode.com/problems/rotate-image/) | Transpose + Reverse rows |

---

## 14. Bit Manipulation, Math & String Basics

| # | Problem | Difficulty | Status | File / Target | LeetCode Link | Core Technique |
|---|---------|:----------:|:------:|---------------|---------------|----------------|
| 136 | Single Number | Easy | [x] Solved | [`0136_single_number.cpp`](./01_Easy_Starter_Pack/0136_single_number.cpp) | [Open](https://leetcode.com/problems/single-number/) | XOR cancellation |
| 191 | Number of 1 Bits | Easy | [x] Solved | [`0191_number_of_1_bits.cpp`](./01_Easy_Starter_Pack/0191_number_of_1_bits.cpp) | [Open](https://leetcode.com/problems/number-of-1-bits/) | Brian Kernighan bit trick |
| 338 | Counting Bits | Easy | [x] Solved | [`0338_counting_bits.cpp`](./01_Easy_Starter_Pack/0338_counting_bits.cpp) | [Open](https://leetcode.com/problems/counting-bits/) | DP bit shift count |
| 190 | Reverse Bits | Easy | [x] Solved | [`0190_reverse_bits.cpp`](./01_Easy_Starter_Pack/0190_reverse_bits.cpp) | [Open](https://leetcode.com/problems/reverse-bits/) | Bit extraction & assembly |
| 268 | Missing Number | Easy | [x] Solved | [`0268_missing_number.cpp`](./01_Easy_Starter_Pack/0268_missing_number.cpp) | [Open](https://leetcode.com/problems/missing-number/) | XOR or Gauss sum |
| 9 | Palindrome Number | Easy | [x] Solved | [`0009_palindrome_number.cpp`](./01_Easy_Starter_Pack/0009_palindrome_number.cpp) | [Open](https://leetcode.com/problems/palindrome-number/) | Reverse half integer |
| 13 | Roman to Integer | Easy | [x] Solved | [`0013_roman_to_integer.cpp`](./01_Easy_Starter_Pack/0013_roman_to_integer.cpp) | [Open](https://leetcode.com/problems/roman-to-integer/) | Subtractive numeral lookup |
| 14 | Longest Common Prefix | Easy | [x] Solved | [`0014_longest_common_prefix.cpp`](./01_Easy_Starter_Pack/0014_longest_common_prefix.cpp) | [Open](https://leetcode.com/problems/longest-common-prefix/) | Horizontal / vertical scan |
| 58 | Length of Last Word | Easy | [x] Solved | [`0058_length_of_last_word.cpp`](./01_Easy_Starter_Pack/0058_length_of_last_word.cpp) | [Open](https://leetcode.com/problems/length-of-last-word/) | Reverse word scan |
| 66 | Plus One | Easy | [x] Solved | [`0066_plus_one.cpp`](./01_Easy_Starter_Pack/0066_plus_one.cpp) | [Open](https://leetcode.com/problems/plus-one/) | Digit carry propagation |
| 7 | Reverse Integer | Medium | [x] Solved | [`0007_reverse_integer.cpp`](./02_Medium_Pack/0007_reverse_integer.cpp) | [Open](https://leetcode.com/problems/reverse-integer/) | Integer overflow bounds check |
