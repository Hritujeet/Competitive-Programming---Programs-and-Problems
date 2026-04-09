#include <iostream>
#include <vector>
using namespace std;

void solve(vector<pair<int, int>> buckets)
{
    int op = 1;
    for (int i = 0; i < 100; i++)
    {
        if (op == 1 || op == 2)
        {
            int amountEmpty = buckets[op].first - buckets[op].second;
            if (amountEmpty >= buckets[op - 1].second)
            {
                buckets[op].second += buckets[op - 1].second;
                buckets[op - 1].second = 0;
            }

            else
            {
                buckets[op - 1].second -= amountEmpty;
                buckets[op].second += amountEmpty;
            }
            op++;
        }
        else
        {
            int amountEmpty = buckets[0].first - buckets[0].second;

            if (amountEmpty >= buckets[2].second)
            {
                buckets[0].second += buckets[2].second;
                buckets[2].second = 0;
            }

            else
            {
                buckets[2].second -= amountEmpty;
                buckets[0].second += amountEmpty;
            }
            op = 1;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        cout << buckets[i].first << " " << buckets[i].second << endl;
    }
    
}

int main()
{
    vector<pair<int, int>> buckets;

    for (int i = 0; i < 3; i++)
    {
        int c, m;
        cin >> c >> m;
        buckets.push_back(make_pair(c, m));
    }

    solve(buckets);

    return 0;
}