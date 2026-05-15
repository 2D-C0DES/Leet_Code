# 1351. Count Negative Numbers in a Sorted Matrix

Problem:

Given an m x n matrix `grid` sorted in non-increasing order both row-wise and column-wise, return the number of negative numbers in `grid`.

Examples:

- Input: `[[4,3,2,-1],[3,2,1,-1],[1,1,-1,-2],[-1,-1,-2,-3]]` → Output: `8`
- Input: `[[3,2],[1,0]]` → Output: `0`

Constraints:

- `m == grid.length`
- `n == grid[i].length`
- `1 <= m, n <= 100`
- `-100 <= grid[i][j] <= 100`

Solution approach:

- Iterate through every element and count negatives. Because rows and columns are sorted non-increasingly, more efficient methods exist (e.g., scanning from top-right), but a simple O(m*n) scan suffices for the given constraints.
- Time complexity: O(m * n).
- Space complexity: O(1) additional space.

Files:

- `count _negative_numbers_in_sorted_matrix.cpp`: A complete, compilable program containing the `Solution` class and a `main()` that runs example inputs and accepts custom matrices from stdin.

Compile and run:

```bash
g++ -std=c++17 "count _negative_numbers_in_sorted_matrix.cpp" -o count_negatives
./count_negatives
```
