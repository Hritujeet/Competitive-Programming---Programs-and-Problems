#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> myVector(2);
    myVector[0] = 5;
    myVector[1] = 10;

    for (int i = 0; i < myVector.size(); i++)
    {
        cout << myVector[i] << endl;
    }

    for (int element: myVector) {
        cout << element << endl;
    }
    
    return 0;
}