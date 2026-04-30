#include <iostream>
#include <vector>
#include <algorithm>

typedef long long ll;

using namespace std;

void solve(vector<string> s, ll t)
{
    for (ll i = 0; i < t; i++)
    {
        if (s[i].length() % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            ll arr[] = {0, 0};
            for (ll j = 0; j < s[i].length(); j++)
            {
                if (s[i][j] == ')')
                {
                    arr[0]++;
                }
                else
                {
                    arr[1]++;
                }
            }

            if (arr[0] == arr[1])
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin >> t;

    vector<string> s;

    for (ll i = 0; i < t; i++)
    {
        ll n;
        cin >> n;

        string x;
        cin >> x;

        s.push_back(x);
    }

    solve(s, t);

    return 0;
}