#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val):data(val),next(nullptr){}
};

Node *front=nullptr;
Node *rear=nullptr;

void enQueue(int val)
{
    Node *newNode = new Node(val);
    if(front == nullptr)
        front=rear=newNode;
    else{
        rear->next=newNode;
        rear = newNode;
    }
}

void deQueue()
{
    if(front == nullptr)
        return;
    else{
        front=front->next;
    }
}
void print()
{
    Node *ptr =front;
    if(ptr == nullptr)
        return;
    while(ptr != nullptr)
    {
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
    cout<<endl;
}

int main()
{
    enQueue(10);
    enQueue(20);
    enQueue(30);
    enQueue(40);
    enQueue(50);
    print();      //10 20 30 40 50
    deQueue();
    print();     //20 30 40 50
    enQueue(60);
    print();     //20 30 40 50 60
    deQueue();
    print();     //30 40 50 60
}
