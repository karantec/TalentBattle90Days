#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a1, a2, x1, x2, m;
        cin >> a1 >> a2 >> x1 >> x2 >> m;
        if (a2 - a1 >= (x1 * m) && a2 - a1 <= x2 * m)
            cout << "1" << endl;
        else
            cout << "0" << endl;
    }

    return 0;
}