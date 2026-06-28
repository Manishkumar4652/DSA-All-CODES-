#include <iostream>
using namespace std;

// Node structure definition
struct Node {
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

// Function to build the tree recursively
Node* buildTree() {
    int data;
    cin >> data;

    // Base case: agar user -1 enter kare, toh matlab wahan koi node nahi hai
    if (data == -1) {
        return nullptr;
    }

    // Current node create karein
    Node* root = new Node(data);

    // Left subtree build karein
    cout << "Enter left child of " << data << " (or -1 for NULL): ";
    root->left = buildTree();

    // Right subtree build karein
    cout << "Enter right child of " << data << " (or -1 for NULL): ";
    root->right = buildTree();

    return root;
}

// Ek simple function tree ko print karke verify karne ke liye (Inorder Traversal)
void inorderTraversal(Node* root) {
    if (root == nullptr) return;
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

int main() {
    cout << "Enter root node data (or -1 for NULL): ";
    Node* root = buildTree();

    cout << "\nInorder Traversal of the built tree: ";
    inorderTraversal(root);
    cout << endl;

    return 0;
}