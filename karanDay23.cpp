#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int n2 = 0;
    cout << "Entre the number";
    cin >> n;
    if (n == 0)
    {
        n2 = 1;
        // convertint to a
    }
    while (n > 0)
    {
        int rem = n % 10;
        if (rem == 0)
            rem = 1;
        n = n / 10;
        n2 = n2 * 10 + rem;
    }
    n = 0;
    while (n2 > 0)
    {
        int r = n2 % 10;
        n = n * 10 + r;
        n2 = n2 / 10;
    }
    cout << n;
}