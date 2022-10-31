#include <iostream>
#include <conio.h>
using namespace std;

class Queue
{
    int count, size, front, rear;
    int array[];
public:
    Queue(int size)
    {
        this->size = size;
        array[size];
        count = front = 0;
        rear = size - 1; 
    }
    void enqueue(int data)
    {
        if (count == size)
        {
            cout << "Queue is full." << endl;
            return;
        }
        rear = (rear + 1) % size;
        array[rear] = data;
        count += 1;
        cout << data << " is added in the Queue." << endl;
    }

    void dequeue() {
        if(count == 0)
        {
            cout << "Queue is empty." << endl;
            return;
        }
        cout << array[front] << " is removed from Queue." << endl;
        front = (front + 1)%size;
        count += 1;
    }
};

int main(int argc, char const *argv[])
{
    Queue q(100);
    q.enqueue(40);
    q.enqueue(50);
    q.dequeue();
    q.enqueue(60);
    q.enqueue(70);
    q.enqueue(80);
    q.dequeue();
    q.enqueue(90);
    q.dequeue();
    getch();
    return 0;
}
