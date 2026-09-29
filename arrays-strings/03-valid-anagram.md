## Problem: Valid Anagram
(Easy)

**Link:** https://leetcode.com/problems/valid-anagram/

### Approach
Count the frequency of each letter in the first string and subtract the frequency from the second string. If all counts return to zero, the strings are anagrams.

### Complexity
- Time: O(n)
- Space: O(1)

### Notes
This works efficiently for lowercase English letters and is a good example of using frequency counting instead of sorting.
