# LeetCode Solutions & Algorithmic Patterns

<p align="center">
  <img src="https://img.shields.io/badge/Language-C%2B%2B17%2F20-00599C?style=flat-square&logo=c%2B%2B&logoColor=white" alt="C++">
  <img src="https://img.shields.io/badge/Focus-Patterns_%26_Complexity-success?style=flat-square" alt="Patterns & Complexity">
  <img src="https://img.shields.io/badge/Platform-LeetCode-FFA116?style=flat-square&logo=leetcode&logoColor=white" alt="LeetCode">
</p>

A structured repository of **C++ data structures and algorithmic problem solutions**, organized around core problem-solving patterns rather than ad-hoc solutions.

---

## 🧠 Core Patterns Explored

- **Two Pointers / Scanning**: Reducing search space through sorted properties (e.g., 3Sum, Valid Palindrome).
- **Hashing & Frequency Mapping**: O(1) lookups, grouping, and frequency counters (e.g., Group Anagrams, Contains Duplicate).
- **Heaps & Priority Queues**: Top-K element tracking with optimal O(N log K) time complexity.
- **Tree Traversals**: Depth-First Search (DFS) & Breadth-First Search (BFS) using recursion, queues, and iterative traversal.
- **Dynamic Programming**: Building a solution from smaller overlapping subproblems and compressing state when only recent values are required (e.g., Climbing Stairs).
- **Greedy / Running State**: Maintaining the best state seen so far for one-pass optimization problems (e.g., Best Time to Buy and Sell Stock).

---

## 📋 Solved Problems Catalog

| # | Problem | Pattern / Technique | Time | Space | Directory |
|---|---|---|---|---|---|
| 15 | [3Sum](https://leetcode.com/problems/3sum/) | Sorting + Two Pointers | O(N^2) | O(1) | [`15-3sum/`](./15-3sum) |
| 49 | [Group Anagrams](https://leetcode.com/problems/group-anagrams/) | Hash Map (Sorted Key / Count) | O(N · K log K) | O(N · K) | [`49-group-anagrams/`](./49-group-anagrams) |
| 70 | [Climbing Stairs](https://leetcode.com/problems/climbing-stairs/) | Dynamic Programming / State Compression | O(N) | O(1) | [`0070-climbing-stairs/`](./0070-climbing-stairs) |
| 102 | [Binary Tree Level Order Traversal](https://leetcode.com/problems/binary-tree-level-order-traversal/) | Breadth-First Search / Queue | O(N) | O(W) | [`0102-binary-tree-level-order-traversal/`](./0102-binary-tree-level-order-traversal) |
| 104 | [Maximum Depth of Binary Tree](https://leetcode.com/problems/maximum-depth-of-binary-tree/) | Tree DFS / Recursion | O(N) | O(H) | [`0104-maximum-depth-of-binary-tree/`](./0104-maximum-depth-of-binary-tree) |
| 121 | [Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/) | Greedy / Running Minimum | O(N) | O(1) | [`0121-best-time-to-buy-and-sell-stock/`](./0121-best-time-to-buy-and-sell-stock) |
| 125 | [Valid Palindrome](https://leetcode.com/problems/valid-palindrome/) | Two Pointers | O(N) | O(1) | [`125-valid-palindrome/`](./125-valid-palindrome) |
| 217 | [Contains Duplicate](https://leetcode.com/problems/contains-duplicate/) | Hash Set | O(N) | O(N) | [`217-contains-duplicate/`](./217-contains-duplicate) |
| 242 | [Valid Anagram](https://leetcode.com/problems/valid-anagram/) | Frequency Array / Hash Table | O(N) | O(1) | [`0242-valid-anagram/`](./0242-valid-anagram) |
| 347 | [Top K Frequent Elements](https://leetcode.com/problems/top-k-frequent-elements/) | Min-Heap / Bucket Sort | O(N log K) | O(N) | [`347-top-k-frequent-elements/`](./347-top-k-frequent-elements) |
| 1470 | [Shuffle the Array](https://leetcode.com/problems/shuffle-the-array/) | Array Interleaving | O(N) | O(1) | [`1580-shuffle-the-array/`](./1580-shuffle-the-array) |
| 1971 | [Find if Path Exists in Graph](https://leetcode.com/problems/find-if-path-exists-in-graph/) | Graph DFS / Adjacency List | O(N + E) | O(N + E) | [`1971-find-if-path-exists-in-graph/`](./1971-find-if-path-exists-in-graph) |

---

## 🔥 Daily Streak

| Day | Date | Problem | Pattern |
|---:|---|---|---|
| 1 | 2026-09-18 | 104. Maximum Depth of Binary Tree | Tree DFS |
| 2 | 2026-09-19 | 70. Climbing Stairs | Dynamic Programming |
| 3 | 2026-09-20 | 102. Binary Tree Level Order Traversal | Tree BFS |
| 4 | 2026-09-21 | 1971. Find if Path Exists in Graph | Graph DFS |
| 5 | 2026-09-22 | 121. Best Time to Buy and Sell Stock | Greedy / Running Minimum |

---

## 🛠️ Build & Run Locally

Compile and run any solution using `g++` or `clang++`:

```bash
g++ -std=c++17 -O2 0242-valid-anagram/0242-valid-anagram.cpp -o solution
./solution
```

---

## 📜 License

MIT License.
