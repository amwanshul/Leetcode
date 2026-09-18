<h2><a href="https://leetcode.com/problems/maximum-depth-of-binary-tree/">Maximum Depth of Binary Tree</a></h2>

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-brightgreen)

Given the root of a binary tree, return its maximum depth.

### Approach
Use depth-first search recursively. The depth of an empty subtree is 0; otherwise the current node contributes 1 plus the larger depth of its left and right subtrees.

### Complexity
- Time: **O(n)** because every node is visited once.
- Space: **O(h)** for the recursion stack, where `h` is the tree height.
