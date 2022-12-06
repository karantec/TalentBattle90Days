// get the input from the user and check whether that number is a perfect number or not.
#include <iostream>
using namespace std;
int main()
{
    int n;
    int sum = 0;
    int factors;
    cout << "Enter the number" << endl;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {

            sum = sum + i;
        }
    }
    if (sum == n)
    {
        cout << "it is a perfect number" << endl;
    }
    else
    {
        cout << "it is not a perfect number" << endl;
    }
}