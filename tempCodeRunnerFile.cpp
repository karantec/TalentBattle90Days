#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cout << "Enter the number";
    cin >> n;
    int newnum = n;
    while (newnum != 0)
    {
        int rem = newnum % 10;
        int number = newnum * 10 + rem;
        newnum = newnum / 10;
    }
    if (newnum == n)
    {
        cout << "Pallindrom" << endl;
    }
    else
    {
        cout << "Not pallindrome" << endl;
    }

    return 0;
}
