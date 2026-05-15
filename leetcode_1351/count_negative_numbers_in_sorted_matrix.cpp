#include <iostream>
#include <vector>

using std::vector;

class Solution
{
public:
    int countNegatives(vector<vector<int>> &grid)
    {
        int count = 0;
        for (int i = 0; i < static_cast<int>(grid.size()); i++)
        {
            for (int j = 0; j < static_cast<int>(grid[i].size()); j++)
            {
                if (grid[i][j] < 0)
                {
                    count++;
                }
            }
        }
        return count;
    }
};

int main()
{
    Solution sol;
    vector<vector<int>> ex1{{4, 3, 2, -1}, {3, 2, 1, -1}, {1, 1, -1, -2}, {-1, -1, -2, -3}};
    vector<vector<int>> ex2{{3, 2}, {1, 0}};

    std::cout << "Example 1 Output: " << sol.countNegatives(ex1) << "\n";
    std::cout << "Example 2 Output: " << sol.countNegatives(ex2) << "\n\n";

    std::cout << "Enter matrix m n followed by m rows (EOF to exit):\n";
    int m, n;
    while (std::cin >> m >> n)
    {
        vector<vector<int>> grid(m, vector<int>(n));
        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
                std::cin >> grid[i][j];
        }
        std::cout << sol.countNegatives(grid) << "\n";
    }

    return 0;
}
