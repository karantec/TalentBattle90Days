// Get a number from user for which you need to fin the factorial, then calculate the factorial and give it as the output.
#include <iostream>
using namespace std;

int main()
{
    int n;
    int fact = 1;
    cout << "Enter the number" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    cout << fact << endl;
}