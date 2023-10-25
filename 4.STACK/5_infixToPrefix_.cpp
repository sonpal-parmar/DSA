#include <bits/stdc++.h>
using namespace std;

int precedence(char op) {
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    return 0;
}

string infixToPrefix(string exp) {
    stack<char> s;
    string prefix = "";
    
    // Reverse the input expression to make it easier to convert to prefix.
    reverse(exp.begin(), exp.end());

    for (char c : exp) {
        if (isalnum(c)) {
            prefix += c; // If the character is an operand, add it to the prefix expression.
        } else if (c == ')') {
            s.push(c); // If it's a closing parenthesis, push it onto the stack.
        } else if (c == '(') {
            // If it's an opening parenthesis, pop and add operators from the stack to the prefix
            // expression until a closing parenthesis is encountered.
            while (!s.empty() && s.top() != ')') {
                prefix += s.top();
                s.pop();
            }
            s.pop(); // Pop the closing parenthesis.
        } else {
            // If it's an operator, pop and add operators from the stack to the prefix expression
            // until an operator with lower or equal precedence is encountered, then push the current
            // operator onto the stack.
            while (!s.empty() && precedence(c) < precedence(s.top())) {
                prefix += s.top();
                s.pop();
            }
            s.push(c);
        }
    }

    // Pop and add any remaining operators from the stack to the prefix expression.
    while (!s.empty()) {
        prefix += s.top();
        s.pop();
    }
    
    // Reverse the final prefix expression to get the correct order.
    reverse(prefix.begin(), prefix.end());

    return prefix;
}

int main() {
    string exp = "2+3*4";
    cout << infixToPrefix(exp) << endl; // Output: +2*34

    exp = "(5+3)*2";
    cout << infixToPrefix(exp) << endl; // Output: *+532

    exp = "3*5+2*6";
    cout << infixToPrefix(exp) << endl; // Output: +*356*26

    return 0;
}
