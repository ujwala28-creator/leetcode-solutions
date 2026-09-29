## Problem: Valid Parentheses
(Easy)

**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach
Use a stack to keep track of opening brackets. When a closing bracket appears, it is checked against the most recent opening bracket.

### Complexity
- Time: O(n)
- Space: O(n)

### Notes
The stack approach mirrors the nesting structure of valid expressions and is the standard way to solve this problem.
