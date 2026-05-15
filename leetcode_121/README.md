# 121. Best Time to Buy and Sell Stock

Problem:

You are given an array `prices` where `prices[i]` is the price of a given stock on the `i`-th day. You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock. Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return `0`.

Examples:

- Input: `prices = [7,1,5,3,6,4]` → Output: `5` (buy at 1, sell at 6)
- Input: `prices = [7,6,4,3,1]` → Output: `0` (no profitable transaction)

Constraints:

- `1 <= prices.length <= 10^5`
- `0 <= prices[i] <= 10^4`

Solution approach (what the provided code does):

- Perform a single pass over the array tracking the minimum price seen so far (`minPrice`) and the maximum profit achievable (`maxProfit`). For each price `p`:
  - Update `minPrice = min(minPrice, p)`.
  - Compute potential profit `p - minPrice` and update `maxProfit` if this is larger.
- This yields an O(n) time solution with O(1) extra space.

Why this works:

- The optimal transaction buys at the smallest price before the sell day. By tracking the smallest price encountered so far and computing the profit for each day as if selling that day, we consider all valid buy-sell pairs where buy < sell.

Complexity:

- Time: O(n) — single pass over `prices`.
- Space: O(1) additional space.

Files:

- `best_time_to_sell_buy_a_stock.cpp`: A complete, compilable program with `Solution::maxProfit` and a `main()` that runs examples and accepts a line of prices from stdin.

Compile and run:

```bash
g++ -std=c++17 best_time_to_sell_buy_a_stock.cpp -o best_time
./best_time
```

Usage notes:

- After running, input a single line of space-separated integers to compute the maximum profit for that sequence. An empty line or EOF exits.
