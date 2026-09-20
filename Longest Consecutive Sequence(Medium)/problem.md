# Longest Consecutive Sequence

## Problem

Given an array of integers `nums`, find the length of the longest sequence of consecutive integers.

The numbers in the sequence do not need to appear in consecutive positions in the array.

The solution must have an average time complexity of **O(n)**.

### Example 1

```text
Input:  [100, 4, 200, 1, 3, 2]
Output: 4
```

The longest consecutive sequence is:

```text
1 → 2 → 3 → 4
```

### Example 2

```text
Input:  [0, 3, 7, 2, 5, 8, 4, 6, 0, 1]
Output: 9
```

The longest consecutive sequence is:

```text
0 → 1 → 2 → 3 → 4 → 5 → 6 → 7 → 8
```

### Example 3

```text
Input:  [9, 1, 4, 7, 3, 2, 6, 5]
Output: 4
```

The longest consecutive sequence is:

```text
1 → 2 → 3 → 4
```

### Constraints

* `1 <= nums.length <= 100000`
* `-10^9 <= nums[i] <= 10^9`
* The array may contain duplicate values.
* The solution should have an average time complexity of **O(n)**.
* Sorting the array is not allowed, since it would result in `O(n log n)` complexity.