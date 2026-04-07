// Problem 546A - A soldier and bananas (800)
#include <iostream>
using namespace std;

int main()
{
    int k, n, w;
    cin >> k >> n >> w;

    int totalCostOfBananas = k * (w * (w + 1) / 2);
    int borrowedAmount = totalCostOfBananas - n;
    
    if (borrowedAmount < 0)
    {
        cout << 0;
    }
    else {
        cout << borrowedAmount;
    }
    
    return 0;
}