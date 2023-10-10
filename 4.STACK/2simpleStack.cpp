#include <iostream>

using namespace std;

// Define a Node structure
struct Node {
    int data;
    Node* next;
};

// Define a Stack class
class Stack {
private:
    Node* top;
public:
    Stack() {
        top = NULL;
    }
// clear memory 
    ~Stack() {
        Node* current = top;
        while (current != NULL) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
    }
    void push(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = top;
        top = newNode;
    }
    int pop() {
        if (top == NULL) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        int value = top->data;
        Node* temp = top;
        top = top->next;
        delete temp;
        return value;
    }
    void display() {
        Node* current = top;
        while (current != NULL) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    cout << "Popped element: " << s.pop() << endl;
    s.display();
    return 0;
}
