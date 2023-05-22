#include <iostream>

class MyStack {
private:
  int *data_;
  int capacity_;
  int top_;

public:
  MyStack(int capacity) {
    capacity_ = capacity;
    data_ = new int[capacity_];
    top_ = -1;
  }

  ~MyStack() {
    delete[] data_;
  }

  void push(int value) {
    if (top_ < capacity_ - 1) {
      top_++;
      data_[top_] = value;
    } else {
      std::cout << "Stack is full!" << std::endl;
    }
  }

  void pop() {
    if (top_ >= 0) {
      top_--;
    } else {
      std::cout << "Stack is empty!" << std::endl;
    }
  }

  int top() const {
    if (top_ >= 0) {
      return data_[top_];
    } else {
      std::cout << "Stack is empty!" << std::endl;
      return -1;
    }
  }

  bool empty() const {
    return top_ == -1;
  }

  size_t size() const {
    return top_ + 1;
  }
};

int main() {
  MyStack stack(3);

  stack.push(10);
  stack.push(20);
  stack.push(30);
  stack.push(40); // this will not be added as stack is full

  std::cout << "Stack size: " << stack.size() << std::endl;

  while (!stack.empty()) {
    std::cout << "Top element: " << stack.top() << std::endl;
    stack.pop();
  }

  std::cout << "Stack size after popping all elements: " << stack.size() << std::endl;

  return 0;
}
