#include <iostream>
using namespace std;
typedef long long ll;
 
void weird_algorithm(ll n)
{
    cout << n << " ";
    if (n == 1)
    {
        return;
    }
 
    if (n % 2 == 0)
    {
        weird_algorithm(n / 2);
    }
 
    if (n % 2 != 0)
    {
        weird_algorithm(3 * n + 1);
    }
}
 
int main()
{
    ll n;
    cin >> n;
    weird_algorithm(n);
    return 0;
}