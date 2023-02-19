#include <iostream>

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

class DoublyLinkedList
{
private:
    Node *head;
    Node *tail;

public:
    DoublyLinkedList()
    {
        head = NULL;
        tail = NULL;
    }

    void insert_at_head(int data)
    {
        Node *new_node = new Node(data);
        if (head == NULL)
        {
            head = new_node;
            tail = new_node;
            return;
        }
        head->prev = new_node;
        new_node->next = head;
        head = new_node;
    }

    void insert_at_tail(int data)
    {
        Node *new_node = new Node(data);
        if (head == NULL)
        {
            head = new_node;
            tail = new_node;
            return;
        }
        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;
    }

    void delete_at_head()
    {
        if (head == NULL)
        {
            return;
        }
        if (head == tail)
        {
            delete head;
            head = NULL;
            tail = NULL;
            return;
        }
        head = head->next;
        delete head->prev;
        head->prev = NULL;
    }

    void delete_at_tail()
    {
        if (tail == NULL)
        {
            return;
        }
        if (head == tail)
        {
            delete tail;
            head = NULL;
            tail = NULL;
            return;
        }
        tail = tail->prev;
        delete tail->next;
        tail->next = NULL;
    }

    void print_list()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout << std::endl;
    }
};

int main()
{
    DoublyLinkedList dll;
    dll.insert_at_head(5);
    dll.insert_at_head(4);
    dll.insert_at_tail(6);
    dll.print_list(); // 4 5 6
    dll.delete_at_head();
    dll.print_list(); // 5 6
    dll.delete_at_tail();
    dll.print_list(); // 5
    return 0;
}
