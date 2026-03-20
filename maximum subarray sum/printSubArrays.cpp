#include <iostream>
using namespace std;

void printSubarrays(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            cout << "[ ";
            for (int k = i; k <= j; k++)
            {
                cout << array[k] << " ";
            }
            cout << "]" << endl;
        }
        cout << "---" << endl;
    }
}

int main()
{
    int array[] = {3, -4, 5, 4, -1, 7, -8};
    int size = sizeof(array) / sizeof(array[0]);

    printSubarrays(array, size);
    return 0;
}