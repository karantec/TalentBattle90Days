// Get an input number from the user and check whether it is a positive or negative number.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    if (n > 0)
    {
        cout << "Positive";
    }
    else
    {
        cout << "Negative";
    }
}