#include <iostream>
#include <stack>
#include <string>

using namespace std;

int precedence(char op) {
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    return 0;
}

string infixToPostfix(string exp) {
    stack<char> s;
    string postfix = "";

    for (char c : exp) {
        if (isalnum(c)) {
            postfix += c;
        } else if (c == '(') {
            s.push(c);
        } else if (c == ')') {
            while (!s.empty() && s.top() != '(') {
                postfix += s.top();
                s.pop();
            }
            s.pop();
        } else {
            while (!s.empty() && precedence(c) <= precedence(s.top())) {
                postfix += s.top();
                s.pop();
            }
            s.push(c);
        }
    }

    while (!s.empty()) {
        postfix += s.top();
        s.pop();
    }

    return postfix;
}

int main() {
    string exp = "2+3*4";
    cout << infixToPostfix(exp) << endl; // Output: 234*+

    exp = "(5+3)*2";
    cout << infixToPostfix(exp) << endl; // Output: 53+2*

    exp = "3*5+2*6";
    cout << infixToPostfix(exp) << endl; // Output: 35*26*+

    return 0;
}
