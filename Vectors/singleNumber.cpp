/*
Print Unique Element in an array which occurs only once in the array
*/
#include <iostream>
#include <vector>

using namespace std;

void solve(vector<int> myVector)
{
    int result = 0;

    for (int i = 0; i < myVector.size(); i++)
    {
        result = result ^ myVector[i];
    }
    cout << result;
}

int main()
{
    vector<int> nums = {4, 1, 2, 1, 2};
    solve(nums);
    return 0;
}