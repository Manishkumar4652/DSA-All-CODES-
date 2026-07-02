// Boundary traversal order
#include <iostream>
#include <vector>
using namespace std;

// Binary Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
};

// Left Boundary
void LeftBoundary(Node* root, vector<int>& ans) {
    if(root == NULL) return;

    // Leaf node skip
    if(root->left == NULL && root->right == NULL) {
        return;
    }

    ans.push_back(root->data);

    if(root->left != NULL) {
        LeftBoundary(root->left, ans);
    }
    else {
        LeftBoundary(root->right, ans);
    }
}

// Leaf Nodes
void LeafBoundary(Node* root, vector<int>& ans) {
    if(root == NULL) return;

    if(root->left == NULL && root->right == NULL) {
        ans.push_back(root->data);
        return;
    }

    LeafBoundary(root->left, ans);
    LeafBoundary(root->right, ans);
}

// Right Boundary
void RightBoundary(Node* root, vector<int>& ans) {
    if(root == NULL) return;

    // Leaf node skip
    if(root->left == NULL && root->right == NULL) {
        return;
    }

    if(root->right != NULL) {
        RightBoundary(root->right, ans);
    }
    else {
        RightBoundary(root->left, ans);
    }

    // Reverse order me add
    ans.push_back(root->data);
}

// Boundary Traversal
vector<int> boundary(Node* root) {
    vector<int> ans;

    if(root == NULL) {
        return ans;
    }

    // Root
    ans.push_back(root->data);

    // Left Boundary
    LeftBoundary(root->left, ans);

    // Leaf nodes
    LeafBoundary(root->left, ans);
    LeafBoundary(root->right, ans);

    // Right Boundary
    RightBoundary(root->right, ans);

    return ans;
}

int main() {
    /*
            1
          /   \
         2     3
        / \   / \
       4   5 6   7
          / \
         8   9
    */

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->left->right->left = new Node(8);
    root->left->right->right = new Node(9);

    root->right->left = new Node(6);
    root->right->right = new Node(7);

    vector<int> ans = boundary(root);

    cout << "Boundary Traversal: ";
    for(int x : ans) {
        cout << x << " ";
    }

    return 0;
}