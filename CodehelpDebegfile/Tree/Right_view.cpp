#include <iostream>
#include <vector>
using namespace std;

// Tree Node
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

// Right View Logic
void solve(Node* root, int level, vector<int>& ans) {
    if(root == NULL) {
        return;
    }

    // Agar ye level pe first node hai
    if(level == ans.size()) {
        ans.push_back(root->data);
    }

    // Pehle right fir left
    solve(root->right, level + 1, ans);
    solve(root->left, level + 1, ans);
}

vector<int> rightView(Node* root) {
    vector<int> ans;
    solve(root, 0, ans);
    return ans;
}

int main() {
    /*
            1
          /   \
         2     3
        / \   / \
       4   5 6   7
          /
         8
    */

    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->left = new Node(6);
    root->right->right = new Node(7);

    root->left->right->left = new Node(8);

    // Right View
    vector<int> ans = rightView(root);

    cout << "Right View: ";
    for(int x : ans) {
        cout << x << " ";
    }

    return 0;
}