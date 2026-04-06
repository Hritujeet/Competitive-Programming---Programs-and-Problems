// Problem 231A - Team (800)
#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, problems = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int readyStudents = 0;
        for (int j = 0; j < 3; j++)
        {
            int a;
            cin >> a;

            if (a == 1)
            {
                readyStudents++;
            }
        }
        if (readyStudents >= 2)
        {
            problems++;
        }
    }

    cout << problems;

    return 0;
}