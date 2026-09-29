## Problem: Best Time to Buy and Sell Stock
(Easy)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach
Track the minimum price seen so far and compare it with each later price to compute the best profit.

### Complexity
- Time: O(n)
- Space: O(1)

### Notes
This is the single-pass solution and is more efficient than checking every pair of days.
