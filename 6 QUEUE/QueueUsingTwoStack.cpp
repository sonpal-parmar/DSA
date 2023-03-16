#include <iostream>
#include <stack>
using namespace std;

class Queue {
    stack<int> in, out;
public:
    void enqueue(int x) {
        in.push(x);
    }
    void dequeue() {
        if (out.empty()) {
            while (!in.empty()) {
                out.push(in.top());
                in.pop();
            }
        }
        if (out.empty()) {
            cout << "Queue is empty\n";
            return;
        }
        out.pop();
    }
    int getFront() {
        if (out.empty()) {
            while (!in.empty()) {
                out.push(in.top());
                in.pop();
            }
        }
        if (out.empty()) {
            cout << "Queue is empty\n";
            return -1;
        }
        return out.top();
    }
    bool isEmpty() {
        return in.empty() && out.empty();
    }
};

int main() {
    Queue q;

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);

    cout << "Front element: " << q.getFront() << endl;

    q.dequeue();
    q.dequeue();

    cout << "Front element after dequeue: " << q.getFront() << endl;

    return 0;
}
