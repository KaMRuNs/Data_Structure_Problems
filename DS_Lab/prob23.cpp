#include <bits/stdc++.h>
using namespace std;

int main() {
    string expression;
    cout << "Enter a postfix expression (e.g., 53+62/*35*+): ";
    getline(cin, expression);

    stack<int> s;

    for (char ch : expression) {
        if (isdigit(ch)) {
            s.push(ch - '0');
        } else if (ch != ' ') {
            int val2 = s.top();
            s.pop();
            int val1 = s.top();
            s.pop();
            if (ch == '+') s.push(val1 + val2);
            else if (ch == '-') s.push(val1 - val2);
            else if (ch == '*') s.push(val1 * val2);
            else if (ch == '/') s.push(val1 / val2);
        }
    }

    cout << "Postfix Evaluation Result: " << s.top() << endl;
    return 0;
}
