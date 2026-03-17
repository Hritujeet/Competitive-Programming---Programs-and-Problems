#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reverseArray(int *array, int size)
{
    int x = 0, y = size - 1;

    while (x < y)
    {
        swap(array[x], array[y]);

        x++;
        y--;
    }
}

int main()
{
    int array[] = {1, 55, 66, 43, 26, 94};
    int size = (sizeof array) / (sizeof array[0]);

    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }

    cout << endl;
    reverseArray(array, size);

    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}