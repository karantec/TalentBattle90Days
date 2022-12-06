#include <iostream>
using namespace std;
// Write a program to find the Factors of a number int main()
int main()
{
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            cout << i << endl;
    }
}