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

// Recursive function
void solve(TreeNode* root, int target, int sum,
           vector<int>& temp, vector<vector<int>>& ans) {
    
    if(root == NULL) {
        return;
    }

    // Current node
    sum = sum + root->val;
    temp.push_back(root->val);

    // Leaf node
    if(root->left == NULL && root->right == NULL) {
        if(sum == target) {
            ans.push_back(temp);
        }

        temp.pop_back();
        return;
    }

    // Recursion
    solve(root->left, target, sum, temp, ans);
    solve(root->right, target, sum, temp, ans);

    // Backtracking
    temp.pop_back();
}

// Main function
vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
    int sum = 0;
    vector<int> temp;
    vector<vector<int>> ans;

    solve(root, targetSum, sum, temp, ans);

    return ans;
}

int main() {
    /*
              5
            /   \
           4     8
          /     / \
         11    13  4
        /  \   /   / \
       7    2 5   1   4
    */

    TreeNode* root = new TreeNode(5);

    root->left = new TreeNode(4);
    root->right = new TreeNode(8);

    root->left->left = new TreeNode(11);
    root->left->left->left = new TreeNode(7);
    root->left->left->right = new TreeNode(2);

    root->right->left = new TreeNode(13);
    root->right->right = new TreeNode(4);

    root->right->right->left = new TreeNode(5);
    root->right->right->right = new TreeNode(1);

    int targetSum = 22;

    vector<vector<int>> ans = pathSum(root, targetSum);

    cout << "Valid Paths:\n";
    for(auto path : ans) {
        for(int x : path) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
 }