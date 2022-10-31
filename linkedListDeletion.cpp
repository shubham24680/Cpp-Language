#include <iostream>
#include <conio.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void insert(Node **head, int data)
{
    Node *insert = new Node();
    insert->data = data;
    insert->next = *head;
    *head = insert;
    cout << data << " is inserted." << endl;
}

void deleteAtBeg(Node **head)
{
    Node *temp = *head;
    cout << temp->data << " is deleted from the Beginning." << endl;
    *head = temp->next;
}

void deleteAtPos(Node **head, int pos)
{
    Node *temp = *head;
    int count = 1;
    while (temp->next != NULL && count != pos)
    {
        count++;
        temp = temp->next;
    }

    cout << temp->next->data << " is deleted form " << pos << " position." << endl;
    temp->next = temp->next->next;
}

void deleteAtEnd(Node **head)
{
    Node *temp = *head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }

    cout << temp->next->data << " is deleted from the End." << endl;
    temp->next = NULL;
}

void traverse(Node **head)
{
    Node *temp = *head;
    cout << "LinkedList:- ";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\n";
}

int main()
{
    Node *head = NULL;
    insert(&head, 32);
    insert(&head, 98);
    insert(&head, 111);
    deleteAtBeg(&head);
    insert(&head, 67);
    deleteAtEnd(&head);
    insert(&head, 65);
    insert(&head, 1001);
    deleteAtPos(&head, 2);
    insert(&head, 108);
    traverse(&head);
    getch();
}