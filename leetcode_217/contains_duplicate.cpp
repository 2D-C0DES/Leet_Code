#include <iostream>
#include <vector>
#include <map>
#include <sstream>

using std::map;
using std::vector;

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        map<int, int> frequency;

        for (int i = 0; i < nums.size(); i++)
        {
            frequency[nums[i]]++;
        }

        for (auto it : frequency)
        {
            if (it.second > 1)
            {
                return true;
            }
        }
        return false;
    }
};

int main()
{
    Solution sol;

    vector<int> ex1{1, 2, 3, 1};
    vector<int> ex2{1, 2, 3, 4};
    vector<int> ex3{1, 1, 1, 3, 3, 4, 3, 2, 4, 2};

    std::cout << std::boolalpha;
    std::cout << "Example 1 Output: " << sol.containsDuplicate(ex1) << "\n";
    std::cout << "Example 2 Output: " << sol.containsDuplicate(ex2) << "\n";
    std::cout << "Example 3 Output: " << sol.containsDuplicate(ex3) << "\n\n";

    std::cout << "Enter a line of space-separated integers (empty line or EOF to exit):\n";
    std::string line;
    while (std::getline(std::cin, line))
    {
        if (line.empty())
            break;
        std::istringstream iss(line);
        vector<int> nums;
        int x;
        while (iss >> x)
            nums.push_back(x);
        if (!nums.empty())
        {
            std::cout << sol.containsDuplicate(nums) << "\n";
        }
    }

    return 0;
}