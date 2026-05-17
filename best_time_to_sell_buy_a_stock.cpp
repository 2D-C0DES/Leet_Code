#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int min_price = prices[0];
        // contains the value for min_price
        // initializing with the price of the first element
        int profit = 0;
        // initializing "profit variiable" which actually
        // will give the max profit finally
        // as in the first day if we sell and buy the stock there
        // there will be no profit so initialized with 0

        for (int i = 1; i < prices.size(); i++)
        {

            int daily_profit = prices[i] - min_price;
            // calculates the value of daily profit
            // based on the previouslyy calculated min_price
            profit = max(daily_profit, profit);
            // maximum profit updates itself based on which one
            // is greaterbetween daily_profit and profit
            min_price = min(min_price, prices[i]);
            // updates the value of minimum price based on
            // the curent price and previous minimum
            // price
        }
        return profit;
    }
};

int main()
{
    Solution sol;

    vector<int> ex1{7, 1, 5, 3, 6, 4};
    vector<int> ex2{7, 6, 4, 3, 1};

    cout << "Example 1 Output: " << sol.maxProfit(ex1) << "\n";
    cout << "Example 2 Output: " << sol.maxProfit(ex2) << "\n\n";

    cout << "Enter prices as space-separated integers (one line). Empty line or EOF to exit:\n";
    string line;
    while (getline(cin, line))
    {
        if (line.empty())
            break;
        istringstream iss(line);
        vector<int> prices;
        int x;
        while (iss >> x)
            prices.push_back(x);
        if (!prices.empty())
            cout << sol.maxProfit(prices) << "\n";
    }

    return 0;
}