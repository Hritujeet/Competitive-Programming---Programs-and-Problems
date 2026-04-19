// USACO 2021 January Contest, Bronze
// Problem 1. Uddered but not Herd

#include <iostream>
using namespace std;

void solve(string heard, string cw)
{
    int counter = 1;
    int i = 0, j = 0;

    while (j < heard.length())
    {
        if (cw[i] == heard[j])
        {
            j++;
        }
        i++;
        if (j == heard.length()) break;
        if (i == cw.length())
        {
            i = 0;
            counter++;
        }
    }
    cout << counter;
}

int main()
{
    string cw, heard;
    getline(cin, cw);
    getline(cin, heard);

    solve(heard, cw);
    return 0;
}