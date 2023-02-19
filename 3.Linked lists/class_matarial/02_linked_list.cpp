#include <iostream>
using namespace std;

class node
{
    public:
    int data;
    node *next;
   // friend int biginsert(int);
};
node *head;
int biginsert(int item)
{
    node *obj;
    obj->data = item;
    obj->next = NULL;
    head = obj;
    return 0;
}

int main()
{
    int choose, item;
    do
    {
        cout << "\nenter the insert item: ";
        cin >> item;
        biginsert(item);
        cout << "\nif you insert the another node then press zeero : ";
        cin >> choose;
    } while (choose == 0);
}