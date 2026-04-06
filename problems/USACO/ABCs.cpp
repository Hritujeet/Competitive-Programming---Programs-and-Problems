// USACO 2020 December Contest, Bronze
// Problem 1. Do You Know Your ABCs?
#include <iostream>
#include <set>
using namespace std;

int main()
{
    int a, b, c, d, e, f, g;
    cin >> a >> b >> c >> d >> e >> f >> g;

    multiset<int> ms;

    ms.insert(a);
    ms.insert(b);
    ms.insert(c);
    ms.insert(d);
    ms.insert(e);
    ms.insert(f);
    ms.insert(g);

    auto it = ms.begin();
    int A = *it;
    int B = *(++it);
    int ABC = *ms.rbegin();
    int C = ABC - A - B;

    cout << A <<" " << B << " " << C;

    return 0;
}