#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    double d, l, v1, v2;
    cin >> d >> l >> v1 >> v2;

    double t = (l - d) / (v1 + v2);
    printf("%0.20lf", t);

    return 0;
}