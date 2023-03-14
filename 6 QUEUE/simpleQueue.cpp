#include <iostream>

class Queue {
private:
    int front, rear, size;
    int* queue;

public:
    Queue(int capacity) {
        front = 0;
        rear = -1;
        size = 0;
        queue = new int[capacity];
    }

    ~Queue() {
        delete[] queue;
    }

    bool isEmpty() {
        return size == 0;
    }

    bool isFull() {
        return size == capacity;
    }

    int getSize() {
        return size;
    }

    void enqueue(int value) {
        if (isFull()) {
            std::cout << "Queue is full!" << std::endl;
            return;
        }
        rear = (rear + 1) % capacity;
        queue[rear] = value;
        size++;
    }

    int dequeue() {
        if (isEmpty()) {
            std::cout << "Queue is empty!" << std::endl;
            return -1;
        }
        int value = queue[front];
        front = (front + 1) % capacity;
        size--;
        return value;
    }

    int peek() {
        if (isEmpty()) {
            std::cout << "Queue is empty!" << std::endl;
            return -1;
        }
        return queue[front];
    }
};

int main() {
    Queue queue(5);

    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);

    std::cout << "Front element: " << queue.peek() << std::endl;

    queue.dequeue();
    queue.dequeue();

    std::cout << "Front element: " << queue.peek() << std::endl;

    queue.enqueue(4);
    queue.enqueue(5);

    while (!queue.isEmpty()) {
        std::cout << queue.dequeue() << " ";
    }
    std::cout << std::endl;

    return 0;
}
