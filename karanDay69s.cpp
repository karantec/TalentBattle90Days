#include <bits/stdc++.h>
using namespace std;

class Isosceles
{
public:
    void display1()
    {
        cout << "I am a isosceles traiangle\n";
    }
};

class Equilateral : public Isosceles
{
public:
    void display2()
    {
        cout << "I am a equilateral Traingle\n";
    }
};
class C : public Equilateral
{
public:
    void display3()
    {
        cout << "I am a triangle";
    }
};
int main()
{
    C obj;
    obj.display2();
    obj.display1();
    obj.display3();
    return 0;
}
