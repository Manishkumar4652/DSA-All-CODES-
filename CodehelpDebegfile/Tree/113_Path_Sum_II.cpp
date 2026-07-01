// 113. Path Sum II
// Example 1:
// Input: root = [5,4,8,11,null,13,4,7,2,null,null,5,1], targetSum = 22
// Output: [[5,4,11,2],[5,8,4,5]]
// Explanation: There are two paths whose sum equals targetSum:
// 5 + 4 + 11 + 2 = 22
// 5 + 8 + 4 + 5 = 22
// Example 2:
// Input: root = [1,2,3], targetSum = 5
// Output: []
// Example 3:
// Input: root = [1,2], targetSum = 0
// Output: []
 
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
#include <vector>
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

Node* buildTree() {
    int data;
    cin >> data;
    if (data == -1) return nullptr;
    Node* root = new Node(data);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}

void hasPathSum(Node* root, int target, int sum, vector<int>& temp, vector<vector<int>>& ans) {
    if (root == nullptr) return;

    sum += root->data;
    temp.push_back(root->data);

    if (root->left == nullptr && root->right == nullptr) {
        if (sum == target) {
            ans.push_back(temp);
        }
        temp.pop_back();
        return;
    }

    hasPathSum(root->left, target, sum, temp, ans);
    hasPathSum(root->right, target, sum, temp, ans);

    temp.pop_back();
}

int main() {
    //5,4,8,11,-1,13,4,7,2,-1,-1,5,1
    cout << "Enter tree nodes (Preorder, -1 for NULL):\n";
    Node* root = buildTree();

    int target = 22;
    int sum = 0;
    vector<int> temp;
    vector<vector<int>> ans;

    hasPathSum(root, target, sum, temp, ans);

    if (ans.empty()) {
        cout << "[]" << endl;
    } else {
        for (auto& path : ans) {
            cout << "[";
            for (int i = 0; i < path.size(); i++) {
                cout << path[i];
                if (i != path.size() - 1) cout << ",";
            }
            cout << "]\n";
        }
    }

    return 0;
}
