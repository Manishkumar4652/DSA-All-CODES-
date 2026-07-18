// Valid Max Heap
#include <iostream>
#include <queue>
using namespace std;

// Node Structure
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

// Check Complete Binary Tree
bool isCompleteTree(Node* root) {
    queue<Node*> q;
    q.push(root);

    bool nullFound = false;

    while (!q.empty()) {
        Node* front = q.front();
        q.pop();

        if (front == NULL) {
            nullFound = true;
        } else {
            if (nullFound)
                return false;

            q.push(front->left);
            q.push(front->right);
        }
    }

    return true;
}

// Check Max Heap Property
bool checkMaxHeapProperty(Node* root) {
    if (root == NULL)
        return true;

    if (root->left == NULL && root->right == NULL)
        return true;

    bool leftAns = checkMaxHeapProperty(root->left);
    bool rightAns = checkMaxHeapProperty(root->right);

    bool leftCheck = true;
    bool rightCheck = true;

    if (root->left && root->left->data > root->data)
        leftCheck = false;

    if (root->right && root->right->data > root->data)
        rightCheck = false;

    return leftAns && rightAns && leftCheck && rightCheck;
}

// Check Heap
bool isHeap(Node* root) {
    return isCompleteTree(root) && checkMaxHeapProperty(root);
}

int main() {

    // Fixed Tree
    //        10
    //      /    \
    //     9      8
    //    / \    /
    //   7   6  5

    Node* root = new Node(10);
    root->left = new Node(9);
    root->right = new Node(8);
    root->left->left = new Node(7);
    root->left->right = new Node(6);
    root->right->left = new Node(5);

    if (isHeap(root))
        cout << "Valid Max Heap";
    else
        cout << "Not a Max Heap";

    return 0;
}