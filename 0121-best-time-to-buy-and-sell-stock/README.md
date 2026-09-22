# 121. Best Time to Buy and Sell Stock

**Pattern:** One-pass scan / running minimum

Track the lowest stock price seen so far and compare every later price against it to find the maximum possible profit. Because only the current minimum and best profit are needed, the solution avoids storing extra state.

- **Time:** O(N)
- **Space:** O(1)

[LeetCode](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/)
