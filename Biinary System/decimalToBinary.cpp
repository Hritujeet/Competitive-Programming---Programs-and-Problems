#include <iostream>
#include <math.h>

using namespace std;

void bullshit(int num)
{
    string binary = "";
    int currRes = num;
    while (currRes != 0)
    {
        string res = std::to_string(currRes % 2);
        binary.append(res);

        currRes = currRes / 2;
    }
    for (int i = binary.length() - 1; i >= 0; i--)
    {
        cout << binary.at(i);
    }
    cout << endl;
}

void solve(int num) {
    int ans = 0, i = 0;
    int currRes = num;
    while (currRes > 0)
    {
        ans += (currRes % 2) * pow(10, i);
        currRes = currRes / 2;
        i++;
    }
    cout << ans << endl;
}

int main()
{
    int num;

    cout << "Enter a number: \n";
    cin >> num;

    bullshit(num);
    solve(num);
    return 0;
}