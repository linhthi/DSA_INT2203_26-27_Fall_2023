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

void preorderTraversal(Node* node) {
    if (node != NULL) {
        cout << node->data << " ";
        for (auto child : node->children) {
            preorderTraversal(child);
        }
    }
}

void postorderTraversal(Node* node) {
    if (node != NULL) {
        for (auto child : node->children) {
            postorderTraversal(child);
        }
        cout << node->data << " ";
    }
}

// If the tree is a binary tree, inorder traversal
void inorderTraversal(Node* node) {
    if (node != NULL) {
        int n = (node->children).size();
        if (n >= 1) {
            inorderTraversal((node->children)[0]);
        }

        cout << node->data << " ";

        if (n == 2) {
            inorderTraversal((node->children)[1]);
        }
    }
}

int calculateHeight(Node* node) {
    if (node == NULL)
        return 0;
    else {
        int maxHeight = 0;
        for (auto child : node->children) {
            int childHeight = calculateHeight(child);
            maxHeight = max(maxHeight, childHeight);
        }
        return maxHeight + 1;
    }
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
    cout << (is_binary_tree(tree) ? "yes" : "no") << endl;
    Node *root = tree[0];
    cout << "Preorder Traversal: ";
    preorderTraversal(root) ;
    cout << endl;
    cout << "Postorder Traversal: ";
    postorderTraversal(root);
    cout << endl;
    cout << "Inorder Traversal: ";
    inorderTraversal(root);
    cout << endl;
    cout << "Height of the tree: " << calculateHeight(root);
    return 0;
}
