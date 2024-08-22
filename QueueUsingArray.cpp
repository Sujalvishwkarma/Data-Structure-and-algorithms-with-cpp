#include <iostream>
using namespace std;

class Queue
{
private:
    int front, rear, size, *queue;

public:
    Queue(int n)
    {
        size = n;
        front = rear = -1;
        queue = new int[size];
    }
    ~Queue()
    {
        delete[] queue;
    }
    bool isEmpty()
    {
        return front == -1 || front > rear;
    }
    bool isFull()
    {
        return rear == size - 1;
    }
    void enqueue(int value)
    {
        if (isFull())
        {
            cout << "Queue Stack is Full" << endl;
            return;
        }
        if (front == -1)
            front = 0;
        queue[++rear] = value;
    }
    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue Stack is Empty" << endl;
            return;
        }
        if (front == rear)
            front = rear = -1;
        front++;
    }
    void Display()
    {
        if (isEmpty())
        {
            cout << "Queue Stack is Empty" << endl;
            return;
        }
        for (int i = front; i <= rear; i++)
        {
            cout << queue[i] << "->";
        }
        cout << "Null" << endl;
    }
};

int main()
{
    Queue Q(5);
    Q.enqueue(5);
    Q.enqueue(15);
    Q.enqueue(25);
    Q.enqueue(35);
    Q.enqueue(45);
    Q.dequeue();
    Q.dequeue();
    Q.Display();
    return 0 ;
}