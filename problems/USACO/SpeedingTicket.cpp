// USACO 2015 December Contest, Bronze
// Problem 2. Speeding Ticket
#include <iostream>
#include <vector>
using namespace std;

int compareSpeedExceeded(int cow, int limit)
{
    if (cow <= limit)
    {
        return 0;
    }
    else
    {
        return cow - limit;
    }
}

void solve(int m, int n, vector<pair<int, int>> cow, vector<pair<int, int>> road)
{
    // i is for cow and j is road
    int i, j = 0;
    int answer = 0;

    while (i < m || j < n)
    {
        if (cow[i].first == road[j].first)
        {
            answer = max(answer, compareSpeedExceeded(cow[i].second, road[j].second));
            i++;
            j++;
        }
        else if (cow[i].first > road[j].first)
        {
            answer = max(answer, compareSpeedExceeded(cow[i].second, road[j].second));
            cow[i]
                .first -= road[j].first;
            j++;
        }
        else if (cow[i].first < road[j].first)
        {
            answer = max(answer, compareSpeedExceeded(cow[i].second, road[j].second));
            road[i]
                .first -= cow[j].first;
            i++;
        }
    }
    cout << answer;
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<pair<int, int>> road;
    vector<pair<int, int>> cow;

    for (int i = 0; i < n; i++)
    {
        int l, v;
        cin >> l >> v;
        road.push_back(make_pair(l, v));
    }
    for (int i = 0; i < m; i++)
    {
        int l, v;
        cin >> l >> v;
        cow.push_back(make_pair(l, v));
    }

    solve(m, n, cow, road);

    return 0;
}
