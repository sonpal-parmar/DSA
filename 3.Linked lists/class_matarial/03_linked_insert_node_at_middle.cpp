#include <iostream>

class Node
{
public:
    int data;
    Node *next;
};

class LinkedList
{
public:
    Node *head;

    LinkedList()
    {
        head = nullptr;
    }

    void insertAt(int data, int position)
    {
        Node *temp1 = new Node();
        temp1->data = data;
        temp1->next = nullptr;

        if (position == 1)
        {
            temp1->next = head;
            head = temp1;
            return;
        }

        Node *temp2 = head;
        for (int i = 0; i < position - 2; i++)
        {
            temp2 = temp2->next;
        }

        temp1->next = temp2->next;
        temp2->next = temp1;
    }

    void printList()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout << std::endl;
    }
};

int main()
{
    LinkedList linkedList;

    linkedList.insertAt(1, 1);
    linkedList.insertAt(2, 2);
    linkedList.insertAt(3, 3);
    linkedList.insertAt(4, 1);
    linkedList.insertAt(5, 2);

    linkedList.printList();

    return 0;
}