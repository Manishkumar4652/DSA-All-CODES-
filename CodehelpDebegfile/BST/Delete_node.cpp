#include <iostream>
using namespace std;

// Binary Tree Node
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};

// Left subtree ka maximum value
int getMax(TreeNode* root) {
    if (root == NULL)
        return -1;

    while (root->right != NULL)
        root = root->right;

    return root->val;
}

// Delete Node Function
TreeNode* deleteNode(TreeNode* root, int key) {

    if (root == NULL)
        return NULL;

    if (root->val == key) {

        // Case 1 : No Child
        if (root->left == NULL && root->right == NULL) {
            delete root;
            return NULL;
        }

        // Case 2 : Only Left Child
        if (root->left != NULL && root->right == NULL) {
            TreeNode* child = root->left;
            delete root;
            return child;
        }

        // Case 3 : Only Right Child
        if (root->left == NULL && root->right != NULL) {
            TreeNode* child = root->right;
            delete root;
            return child;
        }

        // Case 4 : Two Children
        int replaceValue = getMax(root->left);
        root->val = replaceValue;
        root->left = deleteNode(root->left, replaceValue);

        return root;
    }

    if (key > root->val)
        root->right = deleteNode(root->right, key);
    else
        root->left = deleteNode(root->left, key);

    return root;
}

// Inorder Traversal
void inorder(TreeNode* root) {
    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

int main() {

    // BST
    //         5
    //       /   \
    //      3     7
    //     / \   / \
    //    2   4 6   8

    TreeNode* root = new TreeNode(5);

    root->left = new TreeNode(3);
    root->right = new TreeNode(7);

    root->left->left = new TreeNode(2);
    root->left->right = new TreeNode(4);

    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(8);

    cout << "Before Deletion: ";
    inorder(root);
    cout << endl;

    int key = 3;      // Is value ko delete karna hai

    root = deleteNode(root, key);

    cout << "After Deletion: ";
    inorder(root);
    cout << endl;

    return 0;
}