#include <iostream>
#include <stack>
using namespace std;

// Define a structure for the tree node
struct Node {
    int data;
    Node* L;
    Node* R;

    Node(int data) : data(data), L(nullptr), R(nullptr) {}
};

// Iterative in-order traversal
void inOrder(Node* root) {
    stack<Node*> s;
    Node* cur = root;

    while (cur != nullptr || !s.empty()) {
        while (cur != nullptr) {
            s.push(cur);
            cur = cur->L;
        }
        cur = s.top();
        s.pop();
        cout << cur->data << " ";
        cur = cur->R;
    }
}

// Iterative pre-order traversal
void preOrder(Node* root) {
    if (root == nullptr) return;

    stack<Node*> s;
    s.push(root);

    while (!s.empty()) {
        Node* node = s.top();
        s.pop();
        cout << node->data << " ";

        if (node->R) s.push(node->R);
        if (node->L) s.push(node->L);
    }
}

// Iterative post-order traversal
void postOrder(Node* root) {
    if (root == nullptr) return;

    stack<Node*> s1, s2;
    s1.push(root);

    while (!s1.empty()) {
        Node* node = s1.top();
        s1.pop();
        s2.push(node);

        if (node->L) s1.push(node->L);
        if (node->R) s1.push(node->R);
    }

    while (!s2.empty()) {
        Node* node = s2.top();
        s2.pop();
        cout << node->data << " ";
    }
}

int main() {
    // Construct the binary tree
    Node* root = new Node(1);
    root->L = new Node(2);
    root->R = new Node(3);
    root->L->L = new Node(4);
    root->L->R = new Node(5);

    // Perform in-order traversal
    cout << "In-order traversal: ";
    inOrder(root);
    cout << endl;

    // Perform pre-order traversal
    cout << "Pre-order traversal: ";
    preOrder(root);
    cout << endl;

    // Perform post-order traversal
    cout << "Post-order traversal: ";
    postOrder(root);
    cout << endl;

    // Clean up memory
    delete root->L->L;
    delete root->L->R;
    delete root->L;
    delete root->R;
    delete root;

    return 0;
}
