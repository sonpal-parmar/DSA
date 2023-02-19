#include<stdio.h>
#include<stdlib.h>
void beginsert(int);
struct Node
{
    int data;
    struct Node *next;
};
struct Node *head;

void beginsert(int item)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node *));
    if (ptr == NULL)
    {
        printf("\n overflow\n");
    }
    else
    {
        ptr->data = item;
        ptr->next = head;
        head = ptr;
        printf("\n node insert\n");
    }
}

int main()
{
    int choice,item;
    do{
        printf("\n enter thr item which you want to insert\n");
        scanf("%d",&item);
        beginsert(item);
        printf("\n press 0 to insert more \n");
        scanf("%d",&choice);
    }while(choice == 0);
    return 0;
}

