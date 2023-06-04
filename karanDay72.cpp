#include <bits/stdc++.h>
using namespace stdl

    int
    main()
{
    long n;
    cin >> n;
    while (n--)
    {
        char ch;
        int i;
        string str;
        cin >> ch >> i >> str;
        if (ch == '+')
        {
            if (i == 0)
            {
                s = str + s;
            }
            else
            {
                s.insert(i, str);
            }
        }
        else
        {
            cout << s.substr(i - 1, stoi(str)) << endl;
        }
        }
    return 0;
}