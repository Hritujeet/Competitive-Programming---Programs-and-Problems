// USACO 2016 January Contest, Bronze
// Problem 1. Promotion Counting
#include <iostream>
using namespace std;

int main()
{
    int b1, b2, s1, s2, g1, g2, p1, p2;

    cin >> b1 >> b2;
    cin >> s1 >> s2;
    cin >> g1 >> g2;
    cin >> p1 >> p2;

    int gtp = p2 - p1;
    int stg = g2 - g1 + gtp;
    int bts = s2 - s1 + stg;

    cout << bts << endl << stg << endl << gtp << endl;

    return 0;
}