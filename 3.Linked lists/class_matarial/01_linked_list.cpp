#include <iostream>
using namespace std;
void biginsert(int);
struct node
{
    int data;
    node *next;
};
struct node *head;
int main()
{
    int chose, item;
    do
    {
        cout << "enter the item" << endl;
        cin >> item;
        biginsert(item);
        cout << "if you insert another then chose: 0" << endl;
        cin >> chose;
    } while (chose == 0);
}

void biginsert(int item)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node *));
    if (ptr == NULL)
        cout << "\nnode is overflow\n";
    else
    {
        ptr->data = item;
        ptr->next = NULL;
        head = ptr;
        cout << "node is insert\n";
    }
}
