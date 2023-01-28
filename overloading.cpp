#include <iostream>
#include <conio.h>
using namespace std;

// Urinary Operators -> Overloading Possible
// Binary Operators -> Overloading Possible
// Terniry Operators -> Overloading Not Possible

class Number
{
public:
    int sum(int a, int b)
    {
        return (a + b);
    }

    float sum(float a, float b)
    {
        return (a + b);
    }
};

int main(int argc, char const *argv[])
{
    Number n;
    cout << "Integer's Sum: " << n.sum(3, 5) << endl;
    cout << "Double's Sum: " << n.sum((float)3.6, (float)2.41);
    getch();
    return 0;
}
