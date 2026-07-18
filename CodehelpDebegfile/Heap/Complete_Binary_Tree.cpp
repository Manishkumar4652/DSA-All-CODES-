// Complete Binary Tree
#include <iostream>
#include <queue>
using namespace std;

// Binary Tree Node
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};

// Function to check Complete Binary Tree
bool isCompleteTree(TreeNode* root) {
    queue<TreeNode*> q;
    q.push(root);

    bool nullFound = false;

    while (!q.empty()) {
        TreeNode* front = q.front();
        q.pop();

        if (front == NULL) {
            nullFound = true;
        }
        else {
            if (nullFound == true) {
                return false;
            }

            q.push(front->left);
            q.push(front->right);
        }
    }

    return true;
}

int main() {
    // Fixed Tree
    //        1
    //      /   \
    //     2     3
    //    / \   /
    //   4   5 6

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);

    if (isCompleteTree(root))
        cout << "Complete Binary Tree";
    else
        cout << "Not a Complete Binary Tree";

    return 0;
}