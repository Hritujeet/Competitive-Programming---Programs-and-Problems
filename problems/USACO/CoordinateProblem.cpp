/*
Alice and Bob are standing on a 2D plane. Alice starts at the point (0, 0), and Bob
starts at the point (R, S) (1  R, S  1000). Every second, Alice moves M units to the
right, and N units up. Every second, Bob moves P units to the left, and Q units down.
(1  M, N, P, Q  10). Determine
*/
#include <iostream>
#include <vector>
using namespace std;

int solve(int r, int s, int m, int n, int p, int q)
{
    pair<int, int> alice = {0, 0};
    pair<int, int> bob = {r, s};
    int counter = 0;

    while (!(alice.first > bob.first) || !(alice.second > bob.second))
    {
        counter++;
        alice.first += m;
        alice.second += n;

        bob.first -= p;
        bob.second -= q;

        if (alice.first == bob.first && alice.second == bob.second)
        {
            return counter;
        }
    }
    return -1;
}

int main()
{
    int r, s;
    cin >> r >> s;

    int m, n, p, q;
    cin >> m >> n >> p >> q;
    cout << solve(r, s, m, n, p, q);

    return 0;
}