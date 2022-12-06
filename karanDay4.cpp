// Get an input character from the user and give the ASCII value of the given input as the output.
#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter the character" << endl;
    cin >> ch;
    int getasciii = int(ch); // typecasting
    cout << getasciii << endl;
}