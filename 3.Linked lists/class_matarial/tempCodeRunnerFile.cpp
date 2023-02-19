#include<iostream>
using namespace std;

class node{
    public:
    void node(){
        int data;
        node *next;
    }
    //friend biginsert(int);
};
node *head;
void biginsert(int item){
      node *obj;
      node *ptr;
      obj->data = item;
      obj->next = NULL;
      head=ptr;
}

int main()
{
    int choose,item;
    do{
    cout<<"\nenter the insert item: ";
    cin>>item;
    biginsert(item);
    cout<<"\nif you insert the another node then press : 0";
    cin>>choose;
    }while(choose==0);
}