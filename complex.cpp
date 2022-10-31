#include <iostream>
#include <conio.h>
using namespace std;

class complex
{
    int real, img;

public:
    void getdata(int a, int b)
    {
        real = a;
        img = b;
        cout << "Object has real and imaginary value is " << real << " and " << img << endl;
    }

    void calculate(complex x, complex y)
    {
        real = x.real + y.real;
        img = x.img + y.img;
        cout << "Complex number is " << real << " + i" << img;
    }
};

int main()
{
    complex o[3];
    o[0].getdata(4, 7);
    o[1].getdata(6, 2);
    o[2].calculate(o[0], o[1]);
    getch();
    return 0;
}