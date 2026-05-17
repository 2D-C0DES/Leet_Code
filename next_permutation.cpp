#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {
        int index = -1;
        for (int i = (nums.size() - 2); i >= 0; i--)
        {
            if (nums[i] < nums[i + 1])
            {
                index = i;
                break;
            }
        }
        if (index == -1)
        {
            reverse(nums.begin(), nums.end());
            return;
        }

        for (int j = (nums.size() - 1); j > index; j--)
        {
            if (nums[j] > nums[index])
            {
                swap(nums[j], nums[index]);
                break;
            }
        }

        reverse(nums.begin() + (index + 1), nums.end());
    }
};

static void print_vec(const vector<int> &v)
{
    for (size_t i = 0; i < v.size(); ++i)
    {
        if (i)
            cout << ", ";
        cout << v[i];
    }
    cout << '\n';
}

int main()
{
    Solution sol;
    vector<int> ex1{1, 2, 3};
    vector<int> ex2{3, 2, 1};
    vector<int> ex3{1, 1, 5};

    sol.nextPermutation(ex1);
    cout << "Example 1 Output: ";
    print_vec(ex1);

    sol.nextPermutation(ex2);
    cout << "Example 2 Output: ";
    print_vec(ex2);

    sol.nextPermutation(ex3);
    cout << "Example 3 Output: ";
    print_vec(ex3);

    cout << "\nEnter a permutation as space-separated integers (one line). Empty line or EOF to exit:\n";
    string line;
    while (getline(cin, line))
    {
        if (line.empty())
            break;
        istringstream iss(line);
        vector<int> nums;
        int x;
        while (iss >> x)
            nums.push_back(x);
        if (!nums.empty())
        {
            sol.nextPermutation(nums);
            print_vec(nums);
        }
    }

    return 0;
}