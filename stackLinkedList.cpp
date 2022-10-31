#include <iostream>
#include <conio.h>
using namespace std;

class Stack
{
public:
    int data;
    Stack *next;
};

void push(Stack **head, int data)
{
    Stack *insert = new Stack();
    insert->data = data;
    insert->next = *head;
    *head = insert;
    cout << data << " is pushed into stack.\n";
}

void pop(Stack **head)
{
    Stack *temp = *head;
    if (temp == NULL)
    {
        cout << "Stack is empty.\n";
        return;
    }

    cout << temp->data << " is popped into stack.\n";
    *head = temp->next;
}

void traverse(Stack **head)
{
    Stack *temp = *head;
    cout << "Stack:- ";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Stack *head = NULL;
    push(&head, 45);
    push(&head, 67);
    push(&head, 111);
    pop(&head);
    push(&head, 23);
    push(&head, 56);
    pop(&head);
    traverse(&head);
    getch();
    return 0;
}