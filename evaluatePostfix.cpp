#include <iostream>
#include <stack>
#include <string>
#include <cctype>
#include <cmath>
using namespace std;

int evaluatePostfix(string postfix) {
    stack<int> s;

    for (char ch : postfix) {
        if (isdigit(ch)) {
            s.push(ch - '0');
        } else {
            int op2 = s.top(); s.pop();
            int op1 = s.top(); s.pop();

            switch (ch) {
                case '+': s.push(op1 + op2); break;
                case '-': s.push(op1 - op2); break;
                case '*': s.push(op1 * op2); break;
                case '/': s.push(op1 / op2); break;
                case '^': s.push(pow(op1, op2)); break;
                default: cout << "Invalid operator" << endl; return -1;
            }
        }
    }

    return s.top();
}

int main() {
    string postfix = "23*54*+9-";
    cout << "Result of postfix evaluation: " << evaluatePostfix(postfix) << endl;
    return 0;
}
