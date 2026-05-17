#include <iostream>
#include <climits>

class Solution
{
public:
    int reverse(int x)
    {
        int reverse_num = 0;

        while (x != 0)
        {
            int remainder = x % 10;
            x /= 10;
            if (reverse_num > INT_MAX / 10 || (reverse_num == INT_MAX / 10 && remainder > 7))
                return 0;
            if (reverse_num < INT_MIN / 10 || (reverse_num == INT_MIN / 10 && remainder < -8))
                return 0;

            reverse_num = (reverse_num * 10) + remainder;
        }
        return reverse_num;
    }
};

int main()
{
    Solution sol;
    int examples[] = {123, -123, 120};
    for (int x : examples)
    {
        std::cout << "Input: " << x << "\n";
        std::cout << "Output: " << sol.reverse(x) << "\n\n";
    }

    std::cout << "Enter integers to reverse (Ctrl+Z then Enter to end):\n";
    int n;
    while (std::cin >> n)
    {
        std::cout << sol.reverse(n) << "\n";
    }

    return 0;
}
