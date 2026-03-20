#include <iostream>
using namespace std;

int maximum_subarray_sum(int array[], int size)
{
    int currSum = 0;
    int maxSum = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        currSum += array[i];
        maxSum = max(currSum, maxSum);

        if (currSum < 0)
        {
            currSum = 0;
        }
    }
    return maxSum;
}

int main()
{
    int array[] = {3, -4, 5, 4, -1, 7, -8};
    int size = (sizeof array) / (sizeof array[0]);

    cout << maximum_subarray_sum(array, size);
    return 0;
}