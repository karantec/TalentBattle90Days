
// Take an input character from user and check whether it is an alphabet or not.
#include <iostream>
using namespace std;
int main()
{
    char ch;
    cin >> ch;
    if (ch >= 'a' && ch <= 'z' && ch >= 'A' && ch <= 'Z')
    {
        cout << "It is a Alphabet" << endl;
    }
    else
    {
        cout << "it is not a Alphabet" << endl;
    }
}