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
    reverse(exp.begin(), exp.end());

    for (char c : exp) {
        if (isalnum(c)) {
            prefix += c; 
        } else if (c == ')') {
            s.push(c);
        } else if (c == '(') {
           
            while (!s.empty() && s.top() != ')') {
                prefix += s.top();
                s.pop();
            }
            s.pop();
        } else {
           while (!s.empty() && precedence(c) < precedence(s.top())) {
                prefix += s.top();
                s.pop();
            }
            s.push(c);
        }
    }
    while (!s.empty()) {
        prefix += s.top();
        s.pop();
    }
    
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
