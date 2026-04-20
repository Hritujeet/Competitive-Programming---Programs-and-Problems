// You are given N (3  N  5000) lleger polls on the coordinate plane. Find the square
// of the maximum Euclidean distance (aka length of the straight line) between any two of the
// polls.

#include <iostream>
#include <vector>
#include <cstdio>
#include <math.h>
#include <algorithm>

typedef long long ll;
#define vd vector<ll>

using namespace std;

void solve(vd x, vd y, ll n)
{
    ll maxD = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            ll dx = x[i] - x[j];
            ll dy = y[i] - y[j];
            maxD = max(maxD, dx * dx + dy * dy);
        }
    }
    printf("%lld", maxD);
}

int main()
{
    ll n;
    cin >> n;

    vd x;
    vd y;

    for (int i = 0; i < n; i++)
    {
        ll a;
        scanf("%lld", &a);
        x.push_back(a);
    }

    for (int i = 0; i < n; i++)
    {
        ll a;
        scanf("%lld", &a);
        y.push_back(a);
    }

    solve(x, y, n);

    return 0;
}