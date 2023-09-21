#include<bits/stdc++.h>
using namespace std;

bool validExpression(string exp) {
    stack<char> tmp;
    for (int i = 0; i < int(exp.length()); i++) {
        if (tmp.empty()) {
            tmp.push(exp[i]);
        }
        else if ((tmp.top() == '(' && exp[i] == ')')
                || (tmp.top() == '[' && exp[i] == ']')

                || (tmp.top() == '{' && exp[i] == '}')
                ) {
            tmp.pop();
        }
        else {
            tmp.push(exp[i]);
        }
    }
    if (tmp.empty()) {
        return true;
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        if (validExpression(s)) {
            cout << "yes\n";
        }
        else cout << "no\n";
    }
    return 0;
}
