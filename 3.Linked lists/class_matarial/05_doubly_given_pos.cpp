#include <iostream>

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
};

class DoublyLinkedList
{
public:
    DoublyLinkedList() : head(nullptr), tail(nullptr) {}

    void addNode(int data, int pos)
    {
        Node *newNode = new Node;
        newNode->data = data;
        newNode->next = nullptr;
        newNode->prev = nullptr;

        if (head == nullptr)
        {
            head = tail = newNode;
            return;
        }

        if (pos == 0)
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
            return;
        }

        Node *temp = head;
        int i = 0;
        while (temp != nullptr && i < pos - 1)
        {
            temp = temp->next;
            i++;
        }

        if (temp == tail)
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
        else
        {
            newNode->next = temp->next;
            temp->next->prev = newNode;
            temp->next = newNode;
            newNode->prev = temp;
        }
    }

    void printList()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
    }

private:
    Node *head;
    Node *tail;
};

int main()
{
    DoublyLinkedList list;
    list.addNode(10, 0);
    list.addNode(20, 1);
    list.addNode(30, 2);
    list.addNode(40, 3);
    list.addNode(50, 2);
    list.printList();
    return 0;
}
