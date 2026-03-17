#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> marks = {95, 99, 43, 23, 86};

    cout << marks.size() << endl;
    cout << marks.front() << endl;
    cout << marks.back() << endl;

    for (int element : marks)
    {
        cout << element << " ";
    }
    cout << endl;

    marks.push_back(83);

    for (int element : marks)
    {
        cout << element << " ";
    }
    cout << endl;

    marks.pop_back();
    marks.pop_back();

    for (int element : marks)
    {
        cout << element << " ";
    }
    return 0;
}