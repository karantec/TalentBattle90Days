#include <bits/stdc++.h>
using namespace std;
// Pyramid pattern
int main()
{
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    for (int row = 0; row <= n; row++)
    {
        for (int col = 0; col <= row; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
}