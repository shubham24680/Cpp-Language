#include <iostream>
#include <conio.h>
using namespace std;

class Queue
{
public:
    int data;
    Queue *next;
};

void enqueue(Queue **head, int data)
{
    Queue *insert = new Queue();
    insert->data = data;
    insert->next = *head;
    *head = insert;
    cout << data << " is enqueued in Queue." << endl;
}

void dequeue(Queue ** head)
{
    Queue *temp = *head;
    if (temp == NULL)
    {
        cout << "Queue is empty." << endl;
        return;
    }

    if (temp->next == NULL)
    {
        cout << temp->data << " is dequeued from Queue.";
        temp->next = NULL;
        return;
    }

    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }

    cout << temp->next->data << " is dequeued from Queue." << endl;
    temp->next = NULL;
}

void traverse(Queue **head)
{
    Queue *temp = *head;
    cout << "Queue:- ";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\n";
}

int main(int argc, char const *argv[])
{
    Queue *head = NULL;
    enqueue(&head, 45);
    enqueue(&head, 111);
    dequeue(&head);
    enqueue(&head, 98);
    enqueue(&head, 108);
    dequeue(&head);
    traverse(&head);
    getch();
    return 0;
}
