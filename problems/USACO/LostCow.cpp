// USACO 2017 US Open Contest, Bronze
// Problem 1. The Lost Cow
#include <iostream>
using namespace std;

int solve(int x, int y)
{
    if (x == y)
        return 0;

    int totalDistance = 0;
    int currentPosition = x;
    int factor = 1;    // This will be 1, 2, 4, 8...
    int direction = 1; // 1 for right, -1 for left

    while (true)
    {
        int targetPosition = x + (factor * direction);

        // CHECK: Is the cow (y) between where I am now and where I'm going?
        // If moving right: currentPosition <= y <= targetPosition
        // If moving left:  targetPosition <= y <= currentPosition
        if ((direction == 1 && y >= currentPosition && y <= targetPosition) ||
            (direction == -1 && y <= currentPosition && y >= targetPosition))
        {

            // If yes, just add the distance to the cow and BAIL.
            totalDistance += abs(y - currentPosition);
            return totalDistance;
        }

        // If no, add the distance to the full target and turn around
        totalDistance += abs(targetPosition - currentPosition);
        currentPosition = targetPosition;

        factor *= 2;     // Double the reach
        direction *= -1; // Flip the side
    }
}

int main()
{
    int x, y;
    cin >> x >> y;

    cout << solve(x, y) << endl;
    return 0;
}