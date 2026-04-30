#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void solve(vector<pair<int, int>> points, int t)
{
    for (int i = 0; i < t; i++)
    {
        if (points[i].first % 2 == 0 && points[i].second % 2 == 0)
        {
            cout << "YES" << endl;
        }

        else if (points[i].first % 2 != 0 && points[i].second % 2 != 0)
        {
            cout << "NO" << endl;
        }

        else
        {
            cout << "YES" << endl;
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<pair<int, int>> points;

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int x, y;
        cin >> x >> y;
        points.push_back(make_pair(x, y));
    }

    solve(points, t);

    return 0;
}