#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node *prev;
    Node(int data)
    {
        this->data = data;
        left = right = prev = NULL;
    }
};

void insertion(Node **root, int data)
{
    Node *temp = *root;
    if (temp == NULL)
    {
        *temp = new Node(data);
        return;
    }

    if (data > temp->data)
    {
        insertion(&(*temp->right), data);
    }
}

void inOrder(Node **root)
{
    Node *temp = *root;
    cout << temp->data;
}

int main()
{
    Node *root = NULL;
    insertion(&root, 56);
    inOrder(&root);
}