#include<bits/stdc++.h>
using namespace std;

class Stack{
private:
    vector<int> data;
public:
    bool empty_() {
        return data.empty();
    }

    void push(int x) {
        data.push_back(x);
    }

    void pop() {
        if (!empty_()) {
            data.pop_back();
        }
    }

    void print() {
        for (auto x : data) {
            cout << x << " ";
        }
        cout << endl;
    }

};


int main() {
    int n;
    cin >> n;
    Stack s;
    while(n--) {
        string method;
        int x;
        cin >> method;
        if (method == "push") {
            // insert integer number x at the top of the stack.
            cin >> x;
            s.push(x);
        }
        else if (method == "pop") {
            // remove the element at the top of the stack
            s.pop();
        }
    }
    s.print();
    return 0;
}
