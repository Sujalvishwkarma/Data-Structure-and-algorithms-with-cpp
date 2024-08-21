#include <iostream>
using namespace std;

class Stack
{
private:
    int size, top, *arr;

public:
    Stack(int s)
    {
        top = -1 ;
        size = s;
        arr = new int[size];
    };
    bool isFull()
    {
        return top == size - 1;
    }
    bool isEmpty()
    {
        return top == -1;
    }
    void Push(int value)
    {
        if (isFull())
        {
            cout << "Stack is Full" << endl;
            return;
        }
        arr[++top] = value;
    }
    void Pop()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty" << endl;
            return;
        }
        top--;
    }
    void Display()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty" << endl;
            return;
        }
        for (int i = 0; i <= top; i++)
        {
            cout << arr[i] << "->" ;
        }
        cout << "NULL" ;
    }
    ~Stack()
    {
        delete[] arr;
    };
};
int main()
{
    Stack s(20);
    s.Push(21);
    s.Push(22);
    s.Push(23);
    s.Push(24);
    s.Push(25);
    s.Pop();
    s.Pop();
    s.Display();
}
