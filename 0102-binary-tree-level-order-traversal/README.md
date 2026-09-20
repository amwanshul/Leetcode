# 102. Binary Tree Level Order Traversal

[LeetCode problem](https://leetcode.com/problems/binary-tree-level-order-traversal/)

## Approach

Use breadth-first search with a queue. Process exactly the number of nodes currently in the queue for each level, collecting their values before enqueuing the next level's children.

## Complexity

- **Time:** O(n), because every node is visited once.
- **Space:** O(w), where `w` is the maximum width of the tree; the returned result itself also stores O(n) values.
