#include <iostream>
#include <vector>

#define REP(i, j, k) for (int i = j; i < k; i++)
#define v vector<float>
#define PB push_back

using namespace std;

void solve(v x, v c, int n)
{
    REP(i, 0, n)
    {
        if (x[i] > c[i])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    v mean;
    v number;
    cin >> n;

    REP(i, 0, n)
    {
        float a, b, c;
        cin >> a >> b >> c;
        float x = (a + b) / 2;

        mean.PB(x);
        number.PB(c);
    }

    solve(mean, number, n);
}
