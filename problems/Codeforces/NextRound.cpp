// problem/158/A
#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

void solve(int n, int k, vector<int> scores)
{
    int ans = 0;
    int kS = scores[k-1];
    int i = 0;

    while (i < n)
    {
        if (scores[i] >= kS && scores[i] > 0)
        {
            ans++;
        }
        i++;
    }
    printf("%d\n", ans);
}

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    vector<int> scores;

    for (int i = 0; i < n; i++)
    {
        int a;
        scanf("%d", &a);

        scores.push_back(a);
    }

    solve(n, k, scores);
    return 0;
}