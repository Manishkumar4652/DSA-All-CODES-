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

// Tree construct function (Inorder + Postorder)
TreeNode* constructTree(unordered_map<int,int> &valMap,
                        vector<int> &postorder,
                        int &postIndex,
                        int inorderStart,
                        int inorderEnd) {
    
    // Base case
    if(postIndex < 0 || inorderStart > inorderEnd) {
        return NULL;
    }

    // Root node (postorder ka last element)
    int element = postorder[postIndex--];
    TreeNode* root = new TreeNode(element);

    // Root ka index inorder me
    int index = valMap[element];

    // Important:
    // Pehle right subtree banta hai, fir left
    root->right = constructTree(valMap, postorder,
                                postIndex,
                                index + 1,
                                inorderEnd);

    root->left = constructTree(valMap, postorder,
                               postIndex,
                               inorderStart,
                               index - 1);

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
    // Example input
    vector<int> inorder = {9, 3, 15, 20, 7};
    vector<int> postorder = {9, 15, 7, 20, 3};

    unordered_map<int,int> valMap;
    createMapping(valMap, inorder);

    int postIndex = postorder.size() - 1;

    TreeNode* root = constructTree(valMap, postorder,
                                   postIndex,
                                   0,
                                   inorder.size() - 1);

    cout << "Constructed Tree Inorder Traversal: ";
    printInorder(root);

    return 0;
}