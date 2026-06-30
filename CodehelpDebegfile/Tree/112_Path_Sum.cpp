// 112. Path Sum
// Example 1:
// Input: root = [5,4,8,11,null,13,4,7,2,null,null,null,1], targetSum = 22
// Output: true
// Explanation: The root-to-leaf path with the target sum is shown.
// Example 2:
// Input: root = [1,2,3], targetSum = 5
// Output: false
// Explanation: There are two root-to-leaf paths in the tree:
// (1 --> 2): The sum is 3.
// (1 --> 3): The sum is 4.
// There is no root-to-leaf path with sum = 5.
// Example 3:
// Input: root = [], targetSum = 0
// Output: false
// Explanation: Since the tree is empty, there are no root-to-leaf paths.
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

// Tree build (Preorder)
Node* buildTree() {
    int data;
    cin >> data;

    if (data == -1) {
        return nullptr;
    }

    Node* root = new Node(data);
    root->left = buildTree();
    root->right = buildTree();

    return root;
}

// Path Sum function
bool hasPathSum(Node* root, int targetSum, int sum) {
    // base case
    if (root == nullptr) {
        return false;
    }

    sum += root->data;

    // leaf node check
    if (root->left == nullptr && root->right == nullptr) {
        return (sum == targetSum);
    }

    // recursion
    return hasPathSum(root->left, targetSum, sum) ||
           hasPathSum(root->right, targetSum, sum);
}

int main() {
    cout << "Enter tree nodes (Preorder, -1 for NULL):\n";
    Node* root = buildTree();

    int target = 22;
    int sum = 0;

    if (hasPathSum(root, target, sum)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}