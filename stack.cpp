#include <iostream>
#include <conio.h>
using namespace std;

class Stack
{
    int arr[100];
    int size = 0;
public:
    void push(int data);
    void pop();
    // int top();
    void print();
};

void Stack::push(int data)
{
    if (size == 100)
    {
        cout << "Stack Overflow\n";
        return;
    }
    arr[size++] = data;
    cout << data << " is pushed into stack.\n";
}

void Stack::pop()
{
    if (size == 0)
    {
        cout << "Stack is empty.\n";
        return;
    }
    cout << arr[size - 1] << " is popped into stack.\n";
    size--;
}

// int Stack::top()
// {
//     if (size == 0)
//     {
//         cout << "Stack is empty.\n";
//         return -1;
//     }
//     return arr[size-1];
// }

void Stack::print()
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}

int main()
{
    Stack s;
    s.push(56);
    s.push(39);
    s.pop();
    s.push(23);
    s.push(45);
    s.pop();
    s.push(108);
    s.pop();
    s.print();
    getch();
    return 0;
}