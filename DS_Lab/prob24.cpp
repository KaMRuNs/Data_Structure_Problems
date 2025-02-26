#include <bits/stdc++.h>
using namespace std;

int main() {
    string infix;
    cout << "Enter an infix expression (e.g., ((5+3)*6/2)+(3*5)): ";
    getline(cin, infix);

    stack<char> s;
    string postfix;

    for (char ch : infix) {
        if (isalnum(ch)) {
            postfix += ch;
        } else if (ch == '(') {
            s.push(ch);
        } else if (ch == ')') {
            while (!s.empty() && s.top() != '(') {
                postfix += s.top();
                s.pop();
            }
            if (!s.empty() && s.top() == '(') s.pop();
        } else if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            while (!s.empty() &&
                  ((s.top() == '*' || s.top() == '/') ||
                  ((s.top() == '+' || s.top() == '-') && (ch == '+' || ch == '-')))) {
                postfix += s.top();
                s.pop();
            }
            s.push(ch);
        }
    }

    while (!s.empty()) {
        postfix += s.top();
        s.pop();
    }

    cout << "Postfix Expression: " << postfix << endl;
    return 0;
}

