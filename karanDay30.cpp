// Write a Program to concatenate a string
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cout << "Enter a string" << endl;
    getline(cin, a);
    string b;
    cout << "Enter a string" << endl;
    getline(cin, b);
    string ans = a + b;
    cout << ans << " " << endl;
}