#include <iostream>
#include <conio.h>
using namespace std;

// Uniary Operator
class Uniary
{
    int value;

public:
    Uniary(int data)
    {
        value = data;
    }

    void operator ++()
    {
        ++value;
    }

    int display()
    {
        return value;
    }
};

// class Binary
// {
//     int value;

// public:
//     Binary()
//     {
//         value = 0;
//     }

//     Binary(int data)
//     {
//         value = data;
//     }

//     Binary operator+(Binary obj)
//     {
//         Binary sum;
//         sum.value = value + obj.value;
//         return sum;
//     }

//     int display()
//     {
//         return value;
//     }
// };

int main(int argc, char const *argv[])
{
    Uniary u(4);
    ++u;
    cout << "The newest value of u is " << u.display();
    // Binary b1(7);
    // Binary b2(9);
    // Binary b = b1 + b2;
    // cout << "Sum of two objects is " << b.display();
    getch();
    return 0;
}
