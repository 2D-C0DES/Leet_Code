# 31. Next Permutation

Problem:

Given an array of integers `nums`, rearrange the array into the lexicographically next greater permutation of numbers. If such an arrangement is not possible, rearrange it as the lowest possible order (i.e., sorted in ascending order). The replacement must be in-place and use only constant extra memory.

Examples:

- Input: `nums = [1,2,3]` → Output: `[1,3,2]`
- Input: `nums = [3,2,1]` → Output: `[1,2,3]`
- Input: `nums = [1,1,5]` → Output: `[1,5,1]`

Constraints:

- `1 <= nums.length <= 100`
- `0 <= nums[i] <= 100`

Solution approach (what the provided code does):

- The standard in-place algorithm to compute the next permutation:
  1. Find the longest non-increasing suffix and identify the pivot just before the suffix. If the entire array is non-increasing, reverse it to obtain the lowest order.
  2. Find the rightmost successor to the pivot in the suffix (the smallest element greater than the pivot), swap it with the pivot.
  3. Reverse the suffix to get it in ascending order — this yields the next permutation.

- The provided implementation follows these steps using index scanning, `swap`, and `reverse` from `<algorithm>`.

Complexity:

- Time: O(n) — each step is linear in the size of the array.
- Space: O(1) extra space (in-place).

Files:

- `next_permutation.cpp`: A complete, compilable program containing the original `Solution::nextPermutation` (left unchanged) plus a `main()` that runs example inputs and accepts a single line of space-separated integers to compute the next permutation interactively.

Compile and run:

```bash
g++ -std=c++17 next_permutation.cpp -o next_permutation
./next_permutation
```
