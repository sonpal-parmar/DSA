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
    if(rear == nullptr){
         front=rear=newNode;
         rear->next = front;
    }
    else{
        rear->next=newNode;
        rear = newNode;
        rear->next = front;
    }
}

void deQueue()
{
    if(front == nullptr && rear == nullptr)
        return;
    else if(front == rear)
    {
        front=rear= nullptr;
    }
    else
    {
        front=front->next;
        rear->next = front;
    }
}
void print()
{
    Node *ptr =front;
    if(front == nullptr && rear == nullptr)
        return;
    while(ptr->next != front)
    {
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
    cout<<ptr->data;
    cout<<endl;
}

int main()
{
    enQueue(10);
    enQueue(20);
    enQueue(30);
    enQueue(40);
    enQueue(50);
    print();
    deQueue();
    print();
    enQueue(60);
    print();
    deQueue();
    print();
}
