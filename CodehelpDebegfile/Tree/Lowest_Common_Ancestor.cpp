// lowestCommonAncestor
#include <iostream>
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

// Lowest Common Ancestor Function
TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    if(root == NULL) {
        return NULL;
    }

    if(root == p) {
        return p;
    }

    if(root == q) {
        return q;
    }

    TreeNode* leftAns = lowestCommonAncestor(root->left, p, q);
    TreeNode* rightAns = lowestCommonAncestor(root->right, p, q);

    // Agar dono side null
    if(leftAns == NULL && rightAns == NULL) {
        return NULL;
    }
    // Agar left me mila
    else if(leftAns != NULL && rightAns == NULL) {
        return leftAns;
    }
    // Agar right me mila
    else if(leftAns == NULL && rightAns != NULL) {
        return rightAns;
    }
    // Dono side mila -> current node LCA
    else {
        return root;
    }
}

int main() {
    /*
             3
           /   \
          5     1
         / \   / \
        6   2 0   8
           / \
          7   4
    */

    TreeNode* root = new TreeNode(3);

    root->left = new TreeNode(5);
    root->right = new TreeNode(1);

    root->left->left = new TreeNode(6);
    root->left->right = new TreeNode(2);

    root->right->left = new TreeNode(0);
    root->right->right = new TreeNode(8);

    root->left->right->left = new TreeNode(7);
    root->left->right->right = new TreeNode(4);

    // p and q
    TreeNode* p = root->left;              // 5
    TreeNode* q = root->left->right->right; // 4

    TreeNode* ans = lowestCommonAncestor(root, p, q);

    cout << "LCA of " << p->val << " and " << q->val << " is: " << ans->val;

    return 0;
}