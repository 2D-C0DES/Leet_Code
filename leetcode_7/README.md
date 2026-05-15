# Reverse Integer (LeetCode Problem)

Problem:

Given a signed 32-bit integer `x`, return `x` with its digits reversed. If reversing `x` causes the value to go outside the signed 32-bit integer range `[-2^{31}, 2^{31}-1]`, then return `0`.

You may assume the environment does not allow storing 64-bit integers.

Examples:

- Input: `123` → Output: `321`
- Input: `-123` → Output: `-321`
- Input: `120` → Output: `21`

Solution approach:

- Process the input integer digit-by-digit by repeatedly taking `x % 10` (the last digit) and appending it to the result.
- Since 64-bit integers are not allowed, check for overflow before multiplying the current result by 10 and adding the next digit. Use `INT_MAX` and `INT_MIN` from `<climits>`.
- Overflow checks used:
  - If `result > INT_MAX / 10` or `result == INT_MAX / 10 && digit > 7`, return `0`.
  - If `result < INT_MIN / 10` or `result == INT_MIN / 10 && digit < -8`, return `0`.

These checks rely on the fact that `INT_MAX = 2147483647` and `INT_MIN = -2147483648`, so the last digit thresholds are `7` and `-8` respectively.

Files:

- `reverse_integer.cpp`: A complete, compilable program containing the `Solution` class and a `main()` that runs example inputs and accepts additional integers from stdin.

Compile and run (example commands):

```bash
g++ -std=c++17 reverse_integer.cpp -o reverse_integer
./reverse_integer
```
