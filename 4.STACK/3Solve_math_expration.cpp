#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

class Stack {
private:
    int top;
    int data[MAX_SIZE];
public:
    Stack() {
        top = -1;
    }
    bool isEmpty() {
        return top == -1;
    }
    bool isFull() {
        return top == MAX_SIZE - 1;
    }
    void push(int val) {
        if (isFull()) {
            cout << "Error: Stack is full" << endl;
            return;
        }
        top++;
        data[top] = val;
    }
    void pop() {
        if (isEmpty()) {
            cout << "Error: Stack is empty" << endl;
            return;
        }
        top--;
    }
    int peek() {
        if (isEmpty()) {
            cout << "Error: Stack is empty" << endl;
            return -1;
        }
        return data[top];
    }
};

int precedence(char op) {
    if (op == '+' || op == '-') {
        return 1;
    }
    else if (op == '*' || op == '/') {
        return 2;
    }
    else {
        return 0;
    }
}

int applyOp(int a, int b, char op) {
    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return a / b;
    }
    return 0;
}

int evaluate(string exp) {
    Stack values;
    Stack ops;

    for (int i = 0; i < exp.length(); i++) {
        if (exp[i] == ' ') {
            continue;
        }
        else if (isdigit(exp[i])) {
            int num = 0;
            while (i < exp.length() && isdigit(exp[i])) {
                num = num * 10 + (exp[i] - '0');
                i++;
            }
            i--;
            values.push(num);
        }
        else if (exp[i] == '(') {
            ops.push(exp[i]);
        }
        else if (exp[i] == ')') {
            while (!ops.isEmpty() && ops.peek() != '(') {
                int val2 = values.peek();
                values.pop();
                int val1 = values.peek();
                values.pop();
                char op = ops.peek();
                ops.pop();
                values.push(applyOp(val1, val2, op));
            }
            if (!ops.isEmpty() && ops.peek() == '(') {
                ops.pop();
            }
        }
        else {
            while (!ops.isEmpty() && precedence(ops.peek()) >= precedence(exp[i])) {
                int val2 = values.peek();
                values.pop();
                int val1 = values.peek();
                values.pop();
                char op = ops.peek();
                ops.pop();
                values.push(applyOp(val1, val2, op));
            }
            ops.push(exp[i]);
        }
    }

    while (!ops.isEmpty()) {
        int val2 = values.peek();
        values.pop();
        int val1 = values.peek();
        values.pop();
        char op = ops.peek();
        ops.pop();
        values.push(applyOp(val1, val2, op));
    }

    return values.peek();
}

int main() {
    string exp = "2 + 3 * 4 - 5";
    cout << evaluate(exp) << endl;
    return 0;
}
