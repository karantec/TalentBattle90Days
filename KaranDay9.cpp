// Write a program to find Number of digits in an integer

#include <iostream>
using namespace std;

int main()
{
    int n;
    int count = 0;
    cout << "Enter the number" << endl;
    cin >> n;
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    cout << "Number of digit in a number is" << count << endl;
}