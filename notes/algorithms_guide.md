# Algorithm & Data Structure Notes

Reference patterns for DFS, BFS, Sliding Window, and Dynamic Programming.

<!-- update 2026-03-27T21:05:10+05:30: test: add boundary test cases for empty arrays and single elements -->

<!-- update 2026-04-03T12:06:00+05:30: feat: solve climbing stairs using bottom-up dynamic programming -->

<!-- update 2026-04-03T15:29:28+05:30: feat: solve single number using bitwise XOR cancellation -->

<!-- update 2026-04-07T10:55:56+05:30: feat: solve climbing stairs using bottom-up dynamic programming -->

<!-- update 2026-04-07T11:40:54+05:30: fix: address integer overflow edge cases in reverse integer -->

<!-- update 2026-04-10T11:36:25+05:30: refactor: iteratively reverse linked list with three pointers -->

<!-- update 2026-04-14T22:34:18+05:30: refactor: optimize string prefix comparison in longest common prefix -->

<!-- update 2026-04-16T15:49:35+05:30: refactor: clean up variable names and helper functions -->

<!-- update 2026-04-17T21:39:55+05:30: feat: solve two sum using unordered_map for O(n) lookup -->

<!-- update 2026-04-18T16:24:41+05:30: fix: handle edge case with single-node list in merge sorted lists -->

<!-- update 2026-04-21T11:51:30+05:30: perf: optimize memory allocations by pre-reserving vector capacity -->

<!-- update 2026-04-23T15:55:52+05:30: refactor: optimize string prefix comparison in longest common prefix -->

<!-- update 2026-04-24T17:17:15+05:30: feat: solve two sum using unordered_map for O(n) lookup -->

<!-- update 2026-04-25T14:52:45+05:30: feat: invert binary tree using postorder swap -->

<!-- update 2026-04-25T17:22:59+05:30: perf: reduce space complexity to O(1) in Fibonacci transition -->

<!-- update 2026-04-28T15:55:56+05:30: test: add boundary test cases for empty arrays and single elements -->

<!-- update 2026-04-28T16:32:29+05:30: perf: optimize memory allocations by pre-reserving vector capacity -->

<!-- update 2026-04-29T16:31:37+05:30: feat: solve valid anagram with frequency array -->

<!-- update 2026-05-04T23:56:10+05:30: docs: update problem catalog and topic categorization in README -->

<!-- update 2026-05-08T23:31:39+05:30: fix: address integer overflow edge cases in reverse integer -->

<!-- update 2026-05-13T22:23:00+05:30: feat: solve two sum using unordered_map for O(n) lookup -->

<!-- update 2026-05-14T17:18:43+05:30: feat: solve best time to buy and sell stock with single pass greedy -->

<!-- update 2026-05-14T19:49:24+05:30: feat: implement recursive symmetric tree check -->

<!-- update 2026-05-14T23:53:51+05:30: docs: document Kadane algorithm intuition for maximum subarray -->

<!-- update 2026-05-15T21:57:36+05:30: feat: invert binary tree using postorder swap -->

<!-- update 2026-05-17T22:53:16+05:30: feat: solve two sum using unordered_map for O(n) lookup -->

<!-- update 2026-05-19T21:00:22+05:30: feat: solve maximum depth of binary tree with DFS traversal -->

<!-- update 2026-05-21T23:25:47+05:30: docs: add time and space complexity notes for palindrome number -->

<!-- update 2026-05-22T10:11:39+05:30: feat: solve climbing stairs using bottom-up dynamic programming -->

<!-- update 2026-05-22T11:54:58+05:30: feat: implement in-place duplicate removal with two pointers -->

<!-- update 2026-05-22T19:55:21+05:30: feat: solve valid anagram with frequency array -->

<!-- update 2026-05-26T17:08:03+05:30: feat: implement in-place duplicate removal with two pointers -->

<!-- update 2026-05-31T16:30:05+05:30: feat: solve climbing stairs using bottom-up dynamic programming -->

<!-- update 2026-06-01T12:05:46+05:30: feat: solve best time to buy and sell stock with single pass greedy -->

<!-- update 2026-06-03T11:45:12+05:30: feat: implement recursive symmetric tree check -->

<!-- update 2026-06-03T19:58:09+05:30: feat: implement binary search with lower bound predicate -->

<!-- update 2026-06-05T10:08:14+05:30: fix: address integer overflow edge cases in reverse integer -->

<!-- update 2026-06-15T15:58:32+05:30: refactor: iteratively reverse linked list with three pointers -->

<!-- update 2026-06-18T19:56:40+05:30: feat: solve binary tree inorder traversal using Morris Traversal -->

<!-- update 2026-06-22T14:02:33+05:30: feat: implement recursive symmetric tree check -->

<!-- update 2026-06-22T19:55:28+05:30: docs: document Kadane algorithm intuition for maximum subarray -->

<!-- update 2026-06-22T19:59:04+05:30: fix: handle edge case with single-node list in merge sorted lists -->

<!-- update 2026-06-22T21:04:44+05:30: docs: document Kadane algorithm intuition for maximum subarray -->

<!-- update 2026-06-23T21:21:41+05:30: feat: implement in-place duplicate removal with two pointers -->

<!-- update 2026-06-26T12:15:24+05:30: refactor: iteratively reverse linked list with three pointers -->

<!-- update 2026-06-26T12:57:02+05:30: feat: solve two sum using unordered_map for O(n) lookup -->

<!-- update 2026-07-01T17:30:34+05:30: feat: detect linked list cycle using Floyd Tortoise and Hare algorithm -->

<!-- update 2026-07-03T20:20:26+05:30: feat: solve climbing stairs using bottom-up dynamic programming -->

<!-- update 2026-07-04T21:24:08+05:30: feat: solve valid anagram with frequency array -->

<!-- update 2026-07-05T14:51:10+05:30: feat: implement in-place duplicate removal with two pointers -->

<!-- update 2026-07-05T20:14:51+05:30: feat: solve climbing stairs using bottom-up dynamic programming -->

<!-- update 2026-07-08T10:40:52+05:30: test: add boundary test cases for empty arrays and single elements -->

<!-- update 2026-07-08T12:44:55+05:30: feat: solve valid anagram with frequency array -->

<!-- update 2026-07-12T23:39:34+05:30: fix: handle edge case with single-node list in merge sorted lists -->

<!-- update 2026-07-13T12:14:56+05:30: feat: implement in-place duplicate removal with two pointers -->

<!-- update 2026-07-14T12:43:25+05:30: feat: solve maximum depth of binary tree with DFS traversal -->

<!-- update 2026-07-15T23:06:59+05:30: docs: add time and space complexity notes for palindrome number -->

<!-- update 2026-07-16T11:02:37+05:30: fix: handle edge case with single-node list in merge sorted lists -->

<!-- update 2026-07-17T12:25:19+05:30: test: add boundary test cases for empty arrays and single elements -->

<!-- update 2026-07-21T10:48:38+05:30: docs: add time and space complexity notes for palindrome number -->

<!-- update 2026-07-25T23:10:48+05:30: fix: handle edge case with single-node list in merge sorted lists -->

<!-- update 2026-07-29T19:00:25+05:30: feat: implement recursive symmetric tree check -->

<!-- update 2026-07-31T10:57:04+05:30: feat: implement binary search with lower bound predicate -->

<!-- update 2026-08-04T10:52:59+05:30: feat: solve valid anagram with frequency array -->

<!-- update 2026-08-04T12:33:09+05:30: feat: solve best time to buy and sell stock with single pass greedy -->

<!-- update 2026-08-04T19:23:44+05:30: refactor: iteratively reverse linked list with three pointers -->

<!-- update 2026-08-05T17:40:20+05:30: fix: address integer overflow edge cases in reverse integer -->
