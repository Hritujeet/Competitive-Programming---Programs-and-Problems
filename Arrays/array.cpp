#include <iostream>
using namespace std;

int min(int array[], int size) {
    int a = array[0];

    for (int i = 1; i < size; i++)
    {
        if (a > array[i])
        {
            a = array[i];
        }
        
    }
    return a;
}

int max(int array[], int size) {
    int a = array[0];

    for (int i = 1; i < size; i++)
    {
        if (a < array[i])
        {
            a = array[i];
        }
        
    }
    return a;
}

int main()
{
    int marks[5];
    marks[0] = 5;
    marks[1] = 75;
    marks[2] = 95;
    marks[3] = 72;
    marks[4] = 33;

    int array[5] = {1, 2, 3, 4, 5};

    for (int i : array)
    {
        cout << i << endl;
    }

    cout << min(marks, 5) << endl;
    cout << max(marks, 5) << endl;
    
    return 0;
}