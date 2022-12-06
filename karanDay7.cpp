#include <iostream>
#include <math
using namespace std;

int main()
{
    float x, y;
    cout << "Enter the point" << endl;
    cin >> x >> y;
    if (x == 0 && y == 0)
    {
        cout << "Point lies on the origin" << endl;
    }
    else if (y == 0 && x > 0)
    {
        cout << "Point lies on positive x-axis" << endl;
    }
    else if (x == 0 && y > 0)
    {
        cout << "Point lies on positve y-axis" << endl;
    }
    else if (y == 0 && x < 0)
    {
        cout << "Point lies on negative x-axis" << endl;
    }
    else if (x == 0 && y < 0)
    {
        cout << "Point lies on negative y-axis" << endl;
    }
    else if (x == 0 && y < 0)
    {
        cout << "Point lies on  negative y-axis" << endl;
    }
    else if (x > 0 && y > 0)
    {
        cout << "Point lies on first quadrants" << endl;
    }
    else if (x < 0 && y > 0)
    {
        cout << "point lies in second quadrants" << endl;
    }
    else if (x < 0 && y > 0)
    {
        cout << "Point lies in Third quadrants" << endl;
    }
    else if (x > 0 && y < 0)
    {
        cout << "Point lies in fourth quadrant" << endl;
    }
    return 0;
}
