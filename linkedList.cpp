#include <iostream>
#include <conio.h>
using namespace std;

class Node
{
public:
	int data;
	Node *next;
};

void insertAtBeg(Node **head, int data)
{
	Node *insert = new Node();
	insert->data = data;
	insert->next = *head;
	*head = insert;
	cout << data << " is inserted at the Beginning." << endl;
}

void insertAtMid(Node **head, int pos, int data)
{
	Node *insert = new Node();
	Node *temp = *head;
	insert->data = data;
	insert->next = NULL;
	int count = 1;
	while (temp->next != NULL && count < pos)
	{
		count++;
		temp = temp->next;
	}
	if (temp->next == NULL)
	{
		cout << "This node cannot be NULL please check it properly." << endl;
		return;
	}
	insert->next = temp->next;
	temp->next = insert;
	cout << data << " is inserted at " << pos << " position." << endl;
}

void insertAtEnd(Node **head, int data)
{
	Node *insert = new Node();
	Node *temp = *head;
	insert->data = data;
	insert->next = NULL;
	if (*head == NULL)
	{
		*head = insert;
		cout << data << " is inserted at the End." << endl;
		return;
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = insert;
	cout << data << " is inserted at the End." << endl;
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
	cout << endl;
}

int main()
{
	Node *head = NULL;
	insertAtEnd(&head, 32);
	insertAtBeg(&head, 45);
	insertAtBeg(&head, 97);
	insertAtEnd(&head, 108);
	insertAtMid(&head, 2, 11);
	traverse(&head);
	getch();
	return 0;
}