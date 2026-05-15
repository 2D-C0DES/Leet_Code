# 9. Palindrome Number (LeetCode Problem)

Problem:

Given an integer `x`, return `true` if `x` is a palindrome, and `false` otherwise.

Examples:

- Input: `121` → Output: `true` (reads the same forwards and backwards)
- Input: `-121` → Output: `false` (negative sign breaks palindrome)
- Input: `10` → Output: `false` (reads `01` backwards)

Constraints:

- -2^{31} <= x <= 2^{31} - 1

Solution approach:

- Simple and clear method: convert the integer to a string and check characters from both ends.
- Return `false` immediately for negative numbers since the `-` sign makes them non-palindromic.
- Time complexity: O(d) where d is the number of digits (string length).
- Space complexity: O(d) due to the string representation.

Files:

- `palindrome_number.cpp`: A complete, compilable program containing the `Solution` class and a `main()` that runs example inputs and accepts integers from stdin.

Compile and run:

```bash
g++ -std=c++17 palindrome_number.cpp -o palindrome_number
./palindrome_number
```
