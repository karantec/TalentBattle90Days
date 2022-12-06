#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    int number = 0;
    cout << "Enter the number";
    cin >> n;
    int newnum = n;
    while (n != 0)
    {
        int rem = n % 10;
        number = number * 10 + rem;
        n = n / 10;
    }
    if (newnum == number)
    {
        cout << "Pallindrome" << endl;
    }
    else
    {
        cout << "Not pallindrome" << endl;
    }

    return 0;
}
