#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

#define REP(i, j, k) for (int i = j; i < k; i++)
#define vp vector<pair<int, int>>
#define PB push_back

using namespace std;

void solve(vp s, int t)
{
    for (int i = 0; i < t; i++)
    {
        int subscriptions = (s[i].first + 5) / 6;
        cout << (long long)s[i].second * subscriptions << "\n";
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    vp s;
    for (int i = 0; i < t; i++)
    {
        int n, x;
        cin >> n >> x;

        s.PB(make_pair(n, x));
    }

    solve(s, t);

    return 0;
}