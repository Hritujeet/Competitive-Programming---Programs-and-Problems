#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;
#define v vector<ll>
#define RP(i, n, k) for (int i = k; i < n; i++)

void solve(v array, ll n)
{
    ll moves = 0;
    for (int i = 1; i < n; i++)
    {
        if (!(array[i] >= array[i - 1]))
        {
            while (array[i] != array[i - 1])
            {
                array[i]++;
                moves++;
            }
        }
    }
    cout << moves;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    v array;
    cin >> n;

    RP(i, n, 0)
    {
        ll a;
        cin >> a;
        array.push_back(a);
    }

    solve(array, n);

    return 0;
}