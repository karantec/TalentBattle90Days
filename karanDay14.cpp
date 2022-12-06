// Get an input from the user and the print the reverse of the given number as the output
#include <iostream>
using namespace std;

int main()
{
    int num;
    int rem;
    int reverse = 0;
    cout << "Enter the number" << endl;
    cin >> num;
    while (num > 0)
    {
        rem = num % 10;
        reverse = reverse * 10 + rem;
        num = num / 10;
    }
    cout << reverse << endl;
}