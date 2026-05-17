#include <iostream>
#include <vector>
#include <sstream>

using std::vector;

class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {

        int n = nums.size();

        vector<int> answer(n, 1);

        // Prefix products
        int prefix = 1;

        for (int i = 0; i < n; i++)
        {
            answer[i] = prefix;
            prefix *= nums[i];
        }

        // Suffix products
        int suffix = 1;

        for (int i = n - 1; i >= 0; i--)
        {
            answer[i] *= suffix;
            suffix *= nums[i];
        }

        return answer;
    }
};

int main()
{
    Solution sol;

    vector<int> ex1{1, 2, 3, 4};
    vector<int> ex2{-1, 1, 0, -3, 3};

    auto print_vec = [](const vector<int> &v)
    {
        for (size_t i = 0; i < v.size(); ++i)
        {
            if (i)
                std::cout << ", ";
            std::cout << v[i];
        }
        std::cout << '\n';
    };

    std::cout << "Example 1 Output: ";
    print_vec(sol.productExceptSelf(ex1));

    std::cout << "Example 2 Output: ";
    print_vec(sol.productExceptSelf(ex2));

    std::cout << "\nEnter a list of integers separated by spaces (one line). An empty line or EOF exits.\n";
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
            vector<int> res = sol.productExceptSelf(nums);
            print_vec(res);
        }
    }

    return 0;
}