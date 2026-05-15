#include <iostream>
#include <string>

class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
            return false; // Negative numbers are not palindromes

        std::string s = std::to_string(x);
        int left = 0, right = static_cast<int>(s.size()) - 1;

        while (left < right)
        {
            if (s[left] != s[right])
                return false;
            left++;
            right--;
        }
        return true;
    }
};

int main()
{
    Solution sol;
    int examples[] = {121, -121, 10};
    for (int x : examples)
    {
        std::cout << "Input: " << x << "\n";
        std::cout << std::boolalpha << "Output: " << sol.isPalindrome(x) << "\n\n";
    }

    std::cout << "Enter integers to check (Ctrl+Z then Enter to end):\n";
    int n;
    while (std::cin >> n)
    {
        std::cout << std::boolalpha << sol.isPalindrome(n) << "\n";
    }

    return 0;
}
