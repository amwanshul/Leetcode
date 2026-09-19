<h2><a href="https://leetcode.com/problems/climbing-stairs/">Climbing Stairs</a></h2>

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-brightgreen)

You are climbing a staircase with `n` steps. Each move can climb either 1 or 2 steps. Return the number of distinct ways to reach the top.

### Approach
This follows the Fibonacci recurrence: `ways[n] = ways[n - 1] + ways[n - 2]`. Only the previous two states are needed, so the dynamic-programming state is compressed to constant space.

### Complexity
- Time: **O(n)** because each step is computed once.
- Space: **O(1)** because only two previous DP states are stored.
