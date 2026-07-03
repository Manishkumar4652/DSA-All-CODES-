// Balanced Binary Tree
#include <iostream>
#include <cmath>
using namespace std;

// Tree Node
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

// Height function
int getheight(TreeNode* root) {
    if(root == NULL) {
        return 0;
    }

    int leftDepth = getheight(root->left);
    int rightDepth = getheight(root->right);

    return max(leftDepth, rightDepth) + 1;
}

// Check if balanced
bool isBalanced(TreeNode* root) {
    if(root == NULL) {
        return true;
    }

    int leftHeight = getheight(root->left);
    int rightHeight = getheight(root->right);

    int absDiff = abs(leftHeight - rightHeight);

    if(absDiff > 1) {
        return false;
    }

    bool leftAns = isBalanced(root->left);
    bool rightAns = isBalanced(root->right);

    return (leftAns && rightAns);
}

int main() {
    /*
            1
          /   \
         2     3
        / \
       4   5
      /
     8
    */

    TreeNode* root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    root->left->left->left = new TreeNode(8);

    if(isBalanced(root)) {
        cout << "Tree is Balanced";
    } else {
        cout << "Tree is Not Balanced";
    }

    return 0;
}