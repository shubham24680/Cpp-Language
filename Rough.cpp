#include<iostream>
using namespace std;

int main() {
    int i = 1;
    // cout << ++i + ++i + ++i + ++i + ++i + ++i;
    int a = ++i;
    int b = ++i;
    cout << a + b;
    return 0;
}