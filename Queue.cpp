#include<iostream>
using namespace std;

class Queue{
    private:
    int size,front,rear ;
    int *queue;
    public:
    Queue(int s){
        size = s ;
        front = rear = -1 ;
        queue = new int[size] ;
    }
    bool isEmpty(){
        return front == -1 ;
    }
    bool isFull(){
        return rear == size
    }
}

int main(){

}