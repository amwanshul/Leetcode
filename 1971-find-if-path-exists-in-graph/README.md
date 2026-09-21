<h2><a href="https://leetcode.com/problems/find-if-path-exists-in-graph/">Find if Path Exists in Graph</a></h2>

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-brightgreen)

Given an undirected graph, determine whether a path exists between `source` and `destination`.

### Approach
Build an adjacency list and run an iterative depth-first search from `source`. Mark each vertex when it is pushed so cycles cannot cause repeated work; reaching `destination` proves a path exists.

### Complexity
- Time: **O(n + e)**, where `n` is the number of vertices and `e` is the number of edges.
- Space: **O(n + e)** for the adjacency list, visited array, and DFS stack.
