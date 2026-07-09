//LeetCode 1373. Maximum Sum BST in Binary Tree
// LeetCode 1373. Maximum Sum BST in Binary Tree

#include <iostream>
#include <climits>
#include <algorithm>
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

// Info Structure
struct Info {
    int minVal;
    int maxVal;
    int sum;
    bool isBST;
};

// Function to find Maximum Sum BST
Info solve(TreeNode* root, int &sum) {

    if (root == NULL) {
        Info temp;
        temp.minVal = INT_MAX;
        temp.maxVal = INT_MIN;
        temp.sum = 0;
        temp.isBST = true;
        return temp;
    }

    // Left Subtree
    Info leftAns = solve(root->left, sum);

    // Right Subtree
    Info rightAns = solve(root->right, sum);

    // Current Node
    Info currentAns;

    currentAns.minVal = min(root->val, min(leftAns.minVal, rightAns.minVal));
    currentAns.maxVal = max(root->val, max(leftAns.maxVal, rightAns.maxVal));
    currentAns.sum = root->val + leftAns.sum + rightAns.sum;

    if (root->val > leftAns.maxVal &&
        root->val < rightAns.minVal &&
        leftAns.isBST &&
        rightAns.isBST) {

        currentAns.isBST = true;
        sum = max(sum, currentAns.sum);
    }
    else {
        currentAns.isBST = false;
    }

    return currentAns;
}

int maxSumBST(TreeNode* root) {
    int sum = 0;
    solve(root, sum);
    return sum;
}

int main() {

    /*
            1
           / \
          4   3
         / \ / \
        2  4 2  5
              / \
             4   6
    */

    TreeNode* root = new TreeNode(1);

    root->left = new TreeNode(4);
    root->right = new TreeNode(3);

    root->left->left = new TreeNode(2);
    root->left->right = new TreeNode(4);

    root->right->left = new TreeNode(2);
    root->right->right = new TreeNode(5);

    root->right->right->left = new TreeNode(4);
    root->right->right->right = new TreeNode(6);

    cout << "Maximum Sum BST = " << maxSumBST(root);

    return 0;
}