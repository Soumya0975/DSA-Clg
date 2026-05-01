#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

// Create node
Node* createNode(int data) {
    Node* n = new Node();
    n->data = data;
    n->left = n->right = NULL;
    return n;
}

// Insert
Node* insert(Node* root, int data) {
    if (root == NULL) return createNode(data);

    if (data < root->data)
        root->left = insert(root->left, data);
    else
        root->right = insert(root->right, data);

    return root;
}

// Inorder
void inorder(Node* root) {
    if (root == NULL) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Search
bool search(Node* root, int key) {
    if (root == NULL) return false;
    if (root->data == key) return true;

    if (key < root->data)
        return search(root->left, key);
    else
        return search(root->right, key);
}

int main() {
    Node* root = NULL;

    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);

    inorder(root);

    cout << "\nFound: " << search(root, 20);
}
