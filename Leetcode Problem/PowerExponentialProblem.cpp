#include <iostream>
using namespace std;

int pow_brute_force(int x, int n)
{
    int ans = 1;
    for (int i = 0; i < n; i++)
    {
        ans = ans * x;
    }
    return ans;
}

int pow_oh_yeah(int x, int n)
{
    int ans = 1;

    while (n > 0)
    {
        if (n % 2 == 1)
        {
            ans = ans * x;
        }
        x = x * x;
        n = n / 2;
    }
    return ans;
}

int main()
{
    int x, n;

    cout << "Enter a base:" << endl;
    cin >> x;

    cout << "Enter the exponent: " << endl;
    cin >> n;

    cout << pow_brute_force(x, n);
    cout << pow_oh_yeah(x, n);
    return 0;
}