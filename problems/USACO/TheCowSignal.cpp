#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    ifstream fin("cowsignal.in");
    ofstream fout("cowsignal.out");
    
    int m, n, k;
    fin >> m >> n >> k;
    
    vector<string> signal(m);
    for (int i = 0; i < m; i++)
    {
        fin >> signal[i];
    }
    
    // For each row in the original signal
    for (int i = 0; i < m; i++)
    {
        // Create the amplified version of this row
        string amplifiedRow = "";
        for (int j = 0; j < n; j++)
        {
            // Each character gets repeated K times horizontally
            for (int l = 0; l < k; l++)
            {
                amplifiedRow += signal[i][j];
            }
        }
        
        // Print this amplified row K times (vertical amplification)
        for (int l = 0; l < k; l++)
        {
            fout << amplifiedRow << endl;
        }
    }
    
    return 0;
}