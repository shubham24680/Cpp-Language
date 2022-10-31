#include <iostream>
#include <conio.h>
using namespace std;

class Number
{
    int a, b;
public:
    Number(int x, int y)
    {
        a = x;
        b = y;
    }
    Number(const Number &n)
    {
        a = n.a;
        b = n.b;
    }
    int getA() { return a; }
    int getB() { return b; }
};

int main(int argc, char const *argv[])
{
    Number n1(10, 15);
    Number n2 = n1;
    cout << "First: A = " << n1.getA() << ", B = " << n1.getB() << endl;
    cout << "Second: A = " << n2.getA() << ", B = " << n2.getB() << endl;
    getch();
    return 0;
}
