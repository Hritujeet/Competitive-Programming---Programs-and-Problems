// Problem 112A
#include <iostream>
#include <algorithm>

typedef long long ll;

using namespace std;

void solve(string s1, string s2)
{
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

    if (s1 > s2)
    {
        cout << 1 << endl;
    }
    else if (s1 < s2)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    solve(s1, s2);
    return 0;
}