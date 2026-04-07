// USACO 2019 January Contest, Bronze
// Problem 1. Shell Game
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> shell_pos = {0, 1, 2};
    vector<int> counter(3, 0);

    for (int i = 0; i < n; i++)
    {
        int a, b, g;
        cin >> a >> b >> g;

        swap(shell_pos[a - 1], shell_pos[b - 1]);
        counter[shell_pos[g - 1]]++;
    }

    cout << max({counter[0], counter[1], counter[2]});

    return 0;
}