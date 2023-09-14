#include<bits/stdc++.h>
using namespace std;

class Queue {
private:
    vector<int> data;
public:
    bool empty_() {
        return data.empty();
    }

    void enqueue(int x) {
        data.push_back(x);
    }

    void dequeue() {
        if (!empty_()) {
            data.erase(data.begin());
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
    Queue q;
    while(n--) {
        string method;
        int x;
        cin >> method;
        if (method == "enqueue") {
            // insert integer number x at the tail the queue.
            cin >> x;
            q.enqueue(x);
        }
        else if (method == "dequeue") {
            // remove the element at the head of the queue.
            q.dequeue();
        }
    }
    q.print();
    return 0;
}
