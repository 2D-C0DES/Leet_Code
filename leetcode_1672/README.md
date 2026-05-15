# 1672. Richest Customer Wealth

Problem:

You are given an m x n integer grid `accounts` where `accounts[i][j]` is the amount of money the i-th customer has in the j-th bank. Return the wealth that the richest customer has.

A customer's wealth is the sum of money in all their bank accounts. The richest customer is the one with the maximum wealth.

Examples:

- Input: `accounts = [[1,2,3],[3,2,1]]` → Output: `6`
- Input: `accounts = [[1,5],[7,3],[3,5]]` → Output: `10`
- Input: `accounts = [[2,8,7],[7,1,3],[1,9,5]]` → Output: `17`

Constraints:

- `m == accounts.length`
- `n == accounts[i].length`
- `1 <= m, n <= 50`
- `1 <= accounts[i][j] <= 100`

Solution approach:

- For each customer (row), compute the sum of their account balances.
- Track the maximum row-sum seen and return it.
- Time complexity: O(m * n).
- Space complexity: O(1) additional space (ignoring input storage).

Files:

- `richest_customer_wealth.cpp`: A complete, compilable program containing the `Solution` class and a `main()` that runs example inputs and can accept a custom matrix from stdin.

Compile and run:

```bash
g++ -std=c++17 richest_customer_wealth.cpp -o richest_customer_wealth
./richest_customer_wealth
```
