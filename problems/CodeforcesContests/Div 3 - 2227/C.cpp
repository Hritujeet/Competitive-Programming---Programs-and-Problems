#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> t1, t2, t3, t6;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        bool div2 = (x % 2 == 0);
        bool div3 = (x % 3 == 0);

        if (div2 && div3)
            t6.push_back(x);
        else if (div2)
            t2.push_back(x);
        else if (div3)
            t3.push_back(x);
        else
            t1.push_back(x);
    }

    for (int x : t6) cout << x << " ";
    for (int x : t2) cout << x << " ";
    for (int x : t1) cout << x << " ";
    for (int x : t3) cout << x << " ";
    
    cout << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}