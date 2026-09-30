<h2><a href="https://leetcode.com/problems/reverse-string/">Reverse String</a></h2>

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-brightgreen)

Given a character array, reverse it in place.

### Approach
Use two pointers at the beginning and end of the array. Swap the characters at both pointers, then move them inward until they meet.

### Complexity
- Time: **O(n)** because each character is processed at most once.
- Space: **O(1)** auxiliary space.
