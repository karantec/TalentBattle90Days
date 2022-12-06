#include <bits/stdc++.h>
using namespace std;

int main()
{

    bool is_prime = true;
    int n;
    cout << "Enter the number";
    cin >> n;
    if (n == 0 || n == 1)
    {
        is_prime = false;
    }

    // loop to check if n is prime
    for (int i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            is_prime = false;
            break;
        }
    }

    if (is_prime)
        cout << n << " is a prime number";
    else
        cout << n << " is not a prime number";

    return 0;
}
