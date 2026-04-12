// problem/791/A
#include <iostream>
#include <cstdio>
using namespace std;

void solve(int a, int b)
{
    int years = 0;
    bool run = true;

    while (run)
    {
        years++;
        a *= 3;
        b *= 2;

        if (a > b)
        {
            run = false;
        }  
    }

    printf("%d\n", years);
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    solve(a, b);
    return 0;
}