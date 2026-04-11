// USACO 2016 December Contest, Bronze
// Problem 2. Block Game
#include <iostream>
#include <vector>
using namespace std;

void solve(vector<pair<string, string>> boards, int n)
{
    int alphabets[26] = {0};
    for (int i = 0; i < n; i++)
    {
        int count1[26] = {0};
        int count2[26] = {0};

        for (char c : boards[i].first)
            count1[c - 'a']++;
        for (char c : boards[i].second)
            count2[c - 'a']++;

        for (int i = 0; i < 26; i++)
        {
            alphabets[i] += max(count1[i], count2[i]);
        }
    }

    for (int i = 0; i < 26; i++)
    {
        cout << alphabets[i] << endl;
    }
}

int main()
{
    int n;
    cin >> n;

    vector<pair<string, string>> boards;

    for (int i = 0; i < n; i++)
    {
        string a, b;
        cin >> a >> b;

        boards.push_back(make_pair(a, b));
    }

    solve(boards, n);

    return 0;
}