#include <iostream>
#include <conio.h>
using namespace std;

class Number
{
public:
    double sum(double a, double b)
    {
        return (a + b);
    }
};

class Rational : Number
{
public:
    double sum(double a, double b, double c)
    {
        return (a + b + c);
    }
};

int main(int argc, char const *argv[])
{
    Number n;
    cout << "Double's Sum: " << n.sum(3.6, 2.41) << endl;
    Rational r;
    cout << "Double's Sum: " << r.sum(3.6, 2.41, 4.87) << endl;
    getch();
    return 0;
}
