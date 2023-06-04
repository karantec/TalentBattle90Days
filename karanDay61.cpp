#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1;
    int n2;
    cout << "Enter the number" << endl;
    cin >> n1;
    cout << "Enter the number" << endl;
    cin >> n2;
    int sum = n1 + n2;
    if (sum > 3)
    {
        cout << "Bullet" << endl;
    }
    else if (sum > 3 && sum < 10)
    {
        cout << "Blitz" << endl;
    }
    else if (sum > 11 && sum < 60)
    {
        cout << "Rapid" << endl;
    }
    else
    {
        cout << "Classical " << endl;
    }
}