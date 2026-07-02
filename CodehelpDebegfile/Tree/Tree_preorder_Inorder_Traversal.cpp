#include <iostream>
#include <vector>
#include <unordered_map>
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

// Mapping create karne ke liye
void createMapping(unordered_map<int,int> &valueToIndex, vector<int> inorder) {
    for(int i = 0; i < inorder.size(); i++) {
        valueToIndex[inorder[i]] = i;
    }
}

// Tree construct function
TreeNode* constructTree(unordered_map<int,int> &valMap,
                        vector<int>& preorder,
                        int &preOrderIndex,
                        int inorderStart,
                        int inorderEnd,
                        int size) {
    
    // Base case
    if(preOrderIndex >= size || inorderStart > inorderEnd) {
        return NULL;
    }

    // Root node create
    int element = preorder[preOrderIndex++];
    TreeNode* root = new TreeNode(element);

    // Root ka index inorder me find karo
    int pos = valMap[element];

    // Left subtree
    root->left = constructTree(valMap, preorder,
                               preOrderIndex,
                               inorderStart,
                               pos - 1,
                               size);

    // Right subtree
    root->right = constructTree(valMap, preorder,
                                preOrderIndex,
                                pos + 1,
                                inorderEnd,
                                size);

    return root;
}

// Inorder print for checking
void printInorder(TreeNode* root) {
    if(root == NULL) return;

    printInorder(root->left);
    cout << root->val << " ";
    printInorder(root->right);
}

int main() {
    // Example input (hardcoded)
    vector<int> preorder = {3, 9, 20, 15, 7};
    vector<int> inorder = {9, 3, 15, 20, 7};

    unordered_map<int,int> valMap;
    createMapping(valMap, inorder);

    int preIndex = 0;
    int size = inorder.size();

    TreeNode* root = constructTree(valMap, preorder,
                                   preIndex, 0, size - 1, size);

    cout << "Constructed Tree Inorder Traversal: ";
    printInorder(root);

    return 0;
}