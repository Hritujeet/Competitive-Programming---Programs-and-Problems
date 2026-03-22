#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void brute_force(vector<int> nums, int n)
{
    for (int i = 0; i < n; i++)
    {
        int f = 0;
        for (int j = 0; j < n; j++)
        {
            if (nums[j] == nums[i])
            {
                f++;
            }
        }
        if (f > (n / 2))
        {
            cout << nums[i] << endl;
            break;
        }
    }
}

void sorting_method(vector<int> nums, int n)
{
    sort(nums.begin(), nums.end());
    int f = 1;

    for (int i = 1; i < n; i++)
    {
        if (nums[i] != nums[i - 1])
        {
            f = 0;
        }
        else
        {
            f++;
        }
        if (f > n / 2)
        {
            cout << nums[i] << endl;
            break;
        }
    }
}

void moores_algo(vector<int> nums, int n)
{
    int frequency = 0;
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (frequency == 0)
        {
            frequency++;
            ans = nums[i];
        }

        if (ans == nums[i])
        {
            frequency++;
        }
        else
        {
            frequency--;
        }
    }
    cout << ans;
}

int main()
{
    vector<int> nums = {1, 2, 2, 1, 1};
    int n = nums.size();

    brute_force(nums, n);
    sorting_method(nums, n);
    moores_algo(nums, n);
    return 0;
}