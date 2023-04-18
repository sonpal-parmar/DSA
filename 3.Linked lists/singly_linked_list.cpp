#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};
//travarsal without recursion.
void printlist(Node *head){
    Node *curr=head;
    while(curr!=NULL)
    {
        cout<<(curr->data)<<" ";
        curr=curr->next;
    }
}
//travarsal with recursively
void travarsal_list(Node *head){
    if(head==NULL)
        return;
    cout<<(head->data)<<" ";
    travarsal_list(head->next);
}

int main()
{
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head->next = temp1;
    temp1->next = temp2;
    printlist(head);
    travarsal_list(head);    
    return 0;
}


