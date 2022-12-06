// Write a program to find Sum of digits of a number

#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum = 0;
    cout << "Enter the number";
    cin >> n;
    while (n != 0)
    {
        int rem = n % 10;
        sum = sum + rem;
        n = n / 10;
    }
    cout << sum << endl;
}