#include <iostream>
using namespace std;

int linear_search(int array[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (x == array[i])
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int array[] = {1, 55, 66, 43, 26, 94};
    int size = (sizeof array) / (sizeof array[0]);

    cout << linear_search(array, size, 66) << endl;
    cout << linear_search(array, size, 5) << endl;
    return 0;
}