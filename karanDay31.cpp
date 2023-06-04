// Write a Program to print Length of the string without using strlen() function
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[1000];
    int length = 0;
    cout << "Enter string : ";
    cin >> s;
    for (int i = 0; s[i] != '\0'; i++)
    {
        length++;
    }
    cout << length << endl;
}