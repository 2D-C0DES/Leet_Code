#include <iostream>
#include <vector>
#include <algorithm>

using std::vector;

class Solution
{
public:
    int maximumWealth(vector<vector<int>> &accounts)
    {
        int highest_bal = 0;
        for (int i = 0; i < static_cast<int>(accounts.size()); i++)
        {
            int summation = 0;
            for (int j = 0; j < static_cast<int>(accounts[i].size()); j++)
            {
                summation += accounts[i][j];
            }
            highest_bal = std::max(highest_bal, summation);
        }
        return highest_bal;
    }
};

int main()
{
    Solution sol;

    vector<vector<int>> ex1{{1, 2, 3}, {3, 2, 1}};
    vector<vector<int>> ex2{{1, 5}, {7, 3}, {3, 5}};
    vector<vector<int>> ex3{{2, 8, 7}, {7, 1, 3}, {1, 9, 5}};

    std::cout << "Example 1 Output: " << sol.maximumWealth(ex1) << "\n";
    std::cout << "Example 2 Output: " << sol.maximumWealth(ex2) << "\n";
    std::cout << "Example 3 Output: " << sol.maximumWealth(ex3) << "\n\n";

    std::cout << "Enter a custom matrix (m n followed by m rows of n integers), or EOF to exit:\n";
    int m, n;
    while (std::cin >> m >> n)
    {
        vector<vector<int>> accounts(m, vector<int>(n));
        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
                std::cin >> accounts[i][j];
        }
        std::cout << sol.maximumWealth(accounts) << "\n";
        std::cout << "---\n";
    }

    return 0;
}
