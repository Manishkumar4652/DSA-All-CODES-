// 235. Lowest Common Ancestor of a Binary Search Tree
// Example 1:
// Input: root = [6,2,8,0,4,7,9,null,null,3,5], p = 2, q = 8
// Output: 6
// Explanation: The LCA of nodes 2 and 8 is 6.
// Example 2:
// Input: root = [6,2,8,0,4,7,9,null,null,3,5], p = 2, q = 4
// Output: 2
// Explanation: The LCA of nodes 2 and 4 is 2, since a node can be a descendant of itself according to the LCA definition.
// Example 3:
// Input: root = [2,1], p = 2, q = 1
// Output: 2

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

// Lowest Common Ancestor in BST
TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

    if (root == NULL)
        return NULL;

    if (root == p)
        return p;

    if (root == q)
        return q;

    // Both nodes are in left subtree
    if (p->val < root->val && q->val < root->val)
        return lowestCommonAncestor(root->left, p, q);

    // Both nodes are in right subtree
    if (p->val > root->val && q->val > root->val)
        return lowestCommonAncestor(root->right, p, q);

    // One node is on left and the other is on right
    return root;
}

int main() {

    /*
              6
            /   \
           2     8
          / \   / \
         0   4 7   9
            / \
           3   5
    */

    TreeNode* root = new TreeNode(6);

    root->left = new TreeNode(2);
    root->right = new TreeNode(8);

    root->left->left = new TreeNode(0);
    root->left->right = new TreeNode(4);

    root->left->right->left = new TreeNode(3);
    root->left->right->right = new TreeNode(5);

    root->right->left = new TreeNode(7);
    root->right->right = new TreeNode(9);

    // Test Case: LCA of 2 and 8
    TreeNode* p = root->left;   // Node 2
    TreeNode* q = root->right;  // Node 8

    TreeNode* ans = lowestCommonAncestor(root, p, q);

    cout << "Lowest Common Ancestor = " << ans->val << endl;

    return 0;
}