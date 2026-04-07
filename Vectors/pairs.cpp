#include <iostream>
#include <vector>
using namespace std;

int main()
{
    pair<int, int> p;
    p = make_pair(3, 5);
    cout << "(" << p.first << ", " << p.second << ")" << endl;

    vector<pair<int, int>> triangle = {{1, 2}, {7, 2}, {1, 10}};

    cout << "The folowing are coordinates of triangle ABC:" << endl;
    for (pair<int, int> p : triangle)
    {
        cout << "(" << p.first << ", " << p.second << ")" << endl;
    }

    return 0;
}