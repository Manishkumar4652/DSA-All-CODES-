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

// Recursive function
bool solve(TreeNode* root, int target, int sum) {
    // Base case
    if(root == NULL) {
        return false;
    }

    // Current node add
    sum = sum + root->val;

    // Leaf node check
    if(root->left == NULL && root->right == NULL) {
        return (sum == target);
    }

    // Recursion
    bool leftAns = solve(root->left, target, sum);
    bool rightAns = solve(root->right, target, sum);

    return leftAns || rightAns;
}

// Main function
bool hasPathSum(TreeNode* root, int targetSum) {
    int sum = 0;
    return solve(root, targetSum, sum);
}

int main() {
    /*
              5
            /   \
           4     8
          /     / \
         11    13  4
        /  \        \
       7    2        1
    */

    TreeNode* root = new TreeNode(5);

    root->left = new TreeNode(4);
    root->right = new TreeNode(8);

    root->left->left = new TreeNode(11);

    root->left->left->left = new TreeNode(7);
    root->left->left->right = new TreeNode(2);

    root->right->left = new TreeNode(13);
    root->right->right = new TreeNode(4);

    root->right->right->right = new TreeNode(1);

    int targetSum = 22;

    if(hasPathSum(root, targetSum)) {
        cout << "Path exists";
    } else {
        cout << "Path does not exist";
    }

    return 0;
}