#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printArray (vector<int> v) {
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;    

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;

        v.push_back(a);
    }

    do {
        printArray(v);
    } while (next_permutation(v.begin(), v.end()));
    
    return 0;
}