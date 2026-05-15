# 238. Product of Array Except Self

Problem:

Given an integer array `nums`, return an array `answer` such that `answer[i]` is equal to the product of all the elements of `nums` except `nums[i]`.

You must write an algorithm that runs in O(n) time and without using the division operation. The product of any prefix or suffix of `nums` is guaranteed to fit in a 32-bit integer.

Examples:

- Input: `nums = [1,2,3,4]` → Output: `[24,12,8,6]`
- Input: `nums = [-1,1,0,-3,3]` → Output: `[0,0,9,0,0]`

Constraints:

- `2 <= nums.length <= 10^5`
- `-30 <= nums[i] <= 30`
- The input is generated such that `answer[i]` is guaranteed to fit in a 32-bit integer.

Solution approach (what the provided code does):

- The algorithm computes prefix products and suffix products without using division:
  - First pass (left to right): fill `answer[i]` with the product of all elements to the left of index `i` (prefix product). Use a running `prefix` variable initialized to 1 and update it by multiplying with `nums[i]` as you go.
  - Second pass (right to left): maintain a running `suffix` product and multiply `answer[i]` by the product of all elements to the right of index `i`.
- This yields `answer[i] = (product of nums[0..i-1]) * (product of nums[i+1..n-1])`.

Complexity:

- Time: O(n) — two linear passes through the array.
- Space: O(1) additional space if the output array is not counted; the provided implementation uses the `answer` vector for output and a couple of scalar temporaries.

Files:

- `product_of_array_except_self.cpp`: A complete, compilable program containing the original `Solution` implementation (left untouched) plus a `main()` that runs example inputs and accepts a custom input line of integers.

Compile and run:

```bash
g++ -std=c++17 product_of_array_except_self.cpp -o product_of_array_except_self
./product_of_array_except_self
```

Usage notes:

- After running the program, you can enter a single line of space-separated integers to get the `answer` array printed. An empty line or EOF exits.
