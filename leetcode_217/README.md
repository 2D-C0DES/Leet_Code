# 217. Contains Duplicate

Problem:

Given an integer array `nums`, return `true` if any value appears at least twice in the array, and return `false` if every element is distinct.

Examples:

- Input: `nums = [1,2,3,1]` → Output: `true`
- Input: `nums = [1,2,3,4]` → Output: `false`
- Input: `nums = [1,1,1,3,3,4,3,2,4,2]` → Output: `true`

Constraints:

- `1 <= nums.length <= 10^5`
- `-10^9 <= nums[i] <= 10^9`

Solution approach (what the provided code does):

- The implementation builds a frequency `map<int,int>` counting occurrences of each element.
- After counting, it scans the map to see if any value's frequency is greater than 1. If so, it returns `true`; otherwise `false`.
- This is straightforward and correct. For slightly better performance and simpler code, a `unordered_set` can be used to detect duplicates in a single pass.

Complexity:

- Time: O(n log n) due to map insertions (balanced tree). Using `unordered_set` would give average O(n) time.
- Space: O(n) additional space for the frequency map or set.

Files:

- `contains_duplicate.cpp`: A complete, compilable program containing the original `Solution` implementation (left unchanged) plus a `main()` that runs example inputs and accepts a custom line of integers.

Compile and run:

```bash
g++ -std=c++17 contains_duplicate.cpp -o contains_duplicate
./contains_duplicate
```

Usage notes:

- After running, enter a single line of space-separated integers to check for duplicates; an empty line or EOF exits.
