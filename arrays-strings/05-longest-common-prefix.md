## Problem: Longest Common Prefix
(Easy)

**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach
Compare characters from the first string with the corresponding characters of each remaining string until a mismatch is found.

### Complexity
- Time: O(n * m)
- Space: O(1)

### Notes
The prefix length shrinks as soon as a mismatch occurs, which keeps the logic simple and effective.
