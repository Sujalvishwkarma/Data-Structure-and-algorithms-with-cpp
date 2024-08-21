#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

class LinkedList
{
private:
    Node *head;

public:
    LinkedList() : head(nullptr) {};
    ~LinkedList()
    {
        while (head != nullptr)
        {
            Node *temp = head;
            head = head->next;
            delete temp;
        }
    }
    void Push(int value)
    {
        Node *NewNode = new Node;
        NewNode->data = value;
        NewNode->next = head;
        head = NewNode;
    }
    void Pop()
    {
        if (isEmpty())
        {
            cout << "linkedlist is empty !!" << endl;
            return;
        }
        Node *temp = head;
        head = temp->next;
        delete temp;
    }
    void Display()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
    }
    bool isEmpty()
    {
        return head == nullptr;
    }
};

int main()
{
    LinkedList List;
    List.Push(5);
    List.Push(15);
    List.Push(20);
    List.Push(25);
    List.Pop();
    List.Pop();
    List.Pop();
    List.isEmpty();
    List.Display();
    List.isEmpty();
    return 0;
}