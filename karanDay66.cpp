#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    int Tablet, Budget;
    cin >> t;
    while (t--)
    {
        cin >> Tablet >> Budget;
        int max = -1; // meaning max value
        for (int i = 0; i < Tablet; i++)
        {
            int width, height, price;
            cin >> width >> height >> price;
            int area = width * height;
            if (price <= Budget)
            {
                if (area > max)
                    max = area;
            }
        }
        if (max == -1)
            cout << "No tablet\n";
        else
            cout << max << "\n";
        return 0;
    }
}
