#include <iostream>
using namespace std;

class Stack
{
private:
    int top, *arr, size;

public:
    Stack(int size)
    {
        this->size = size;
        top = -1;
        arr = new int[size];
    }
    ~Stack()
    {
        delete[] arr;
    }
    bool isFull()
    {
        return top == size - 1;
    }
    bool isEmpty()
    {
        return top == -1;
    }
    void push(int value)
    {
        if (isFull())
        {
            cout << "Stack Overflow" << endl;
            return;
        }
        arr[++top] = value;
    }
    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack Underflow" << endl;
            return;
        }
        top--;
    }
    int peek()
    {
        if (isEmpty())
        {
            cout << "Empty Stack" << endl;
            return -1;
        }
        return arr[top];
    }
    void Display()
    {
        if (isEmpty())
        {
            cout << "Empty Stack" << endl;
            return;
        }
        for (int i = top; i >= 0; i--)
        {
            cout << arr[i] << "->";
        }
        cout << "NULL" << endl;
    }
};

int main()
{
    Stack S(5);
    S.push(5);
    S.push(15);
    S.push(25);
    S.push(35);
    S.Display();
}
