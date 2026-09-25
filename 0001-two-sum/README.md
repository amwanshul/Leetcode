<h2><a href="https://leetcode.com/problems/two-sum/">Two Sum</a></h2>

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-brightgreen)

Given an integer array and a target value, return the indices of two distinct elements whose values add up to the target.

### Approach
Scan the array once while storing each value's index in a hash map. For the current value, look up its complement (target - value) before inserting the current element.

### Complexity
- Time: **O(n)** average, with constant-time hash lookups.
- Space: **O(n)** for the complement lookup table.
