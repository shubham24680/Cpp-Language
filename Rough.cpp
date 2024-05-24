#include<iostream>
using namespace std;

class a {
    // public:
    int n1 = 10;
};
class B {
    public:
    int n1 = 11;
};
class C : public a {
    public:
    void display() {
        cout << n1;
    }
};

int main() {
    C c;
    // cout << c.B::n1;
    c.display();
    return 0;
}