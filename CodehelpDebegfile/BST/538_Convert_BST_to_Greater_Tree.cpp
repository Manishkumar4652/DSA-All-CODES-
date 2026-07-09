// 538. Convert BST to Greater Tree
// Example 1:
// Input: root = [4,1,6,0,2,5,7,null,null,null,3,null,null,null,8]
// Output: [30,36,21,36,35,26,15,null,null,null,33,null,null,null,8]
// Example 2:
// Input: root = [0,null,1]
// Output: [1,null,1]
#include <iostream>
#include <vector>
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

// Store Inorder
void storeInorder(TreeNode* root, vector<int>& arr) {
    if (root == NULL)
        return;

    storeInorder(root->left, arr);
    arr.push_back(root->val);
    storeInorder(root->right, arr);
}

// Populate Inorder
void populateInorder(TreeNode* root, vector<int>& arr, int &index) {
    if (root == NULL)
        return;

    populateInorder(root->left, arr, index);

    root->val = arr[index];
    index++;

    populateInorder(root->right, arr, index);
}

// Convert BST to Greater Sum Tree
TreeNode* convertBST(TreeNode* root) {

    vector<int> arr;

    // Store inorder
    storeInorder(root, arr);

    // Update array
    for (int i = arr.size() - 2; i >= 0; i--) {
        arr[i] = arr[i] + arr[i + 1];
    }

    // Populate tree
    int index = 0;
    populateInorder(root, arr, index);

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

    //      4
    //     / \
    //    1   6

    TreeNode* root = new TreeNode(4);
    root->left = new TreeNode(1);
    root->right = new TreeNode(6);

    cout << "Before Conversion: ";
    inorder(root);

    convertBST(root);

    cout << "\nAfter Conversion: ";
    inorder(root);

    return 0;
}