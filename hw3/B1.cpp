#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    vector<Node*> children;
};

Node *newNode(int data) {
    Node *temp = new Node;
    temp->data = data;
    return temp;
};

bool is_binary_tree(unordered_map<int, Node*> tree) {
    for (auto node : tree) {
        if ((node.second->children).size() > 2)
            return false;
    }
    return true;
}


int main() {
    int n;
    cin >> n;
    unordered_map<int, Node*> tree;

    for (int i = 0; i < n-1; i++) {
        int u, v;
        cin >> u >> v;

        if (tree.find(u) == tree.end()) {
            tree[u] = newNode(u);
        }

        if (tree.find(v) == tree.end()) {
            tree[v] = newNode(v);
        }

        tree[u]->children.push_back(tree[v]);

    }
    cout << (is_binary_tree(tree) ? "yes" : "no");
    Node *root = tree[0];
    return 0;
}
