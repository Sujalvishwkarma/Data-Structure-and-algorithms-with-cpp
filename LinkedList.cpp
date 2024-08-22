#include<iostream>
using namespace std;

struct Node
{
    int data ;
    Node *next;
};

class LinkedList
{
    private :
    Node *head ;
    public :
    LinkedList()
    {
        head = nullptr ;
    }
    void insert(int value)
    {
        Node* NewNode = new Node ;
        NewNode->data = value ;
        NewNode->next = head ;
        head = NewNode ;
    }
    void pop()
    {
        if(head==nullptr)
        {
            cout << "List is Empty" << endl ;
            return ;
        }
        Node *temp = head ;
        head = temp->next ;
        delete temp ;
    }
    void Display()
    {
        Node *temp = head ;
        while(temp!=nullptr)
        {
            cout << temp->data << "->" ;
            temp = temp->next ;
        }
        cout << "NULL" << endl ;       
    }
};

int main()
{
    LinkedList List ;
    List.insert(51);
    List.insert(52);
    List.insert(53);
    List.insert(54);
    List.insert(55);
    List.pop();
    List.Display();
    return 0 ;
}