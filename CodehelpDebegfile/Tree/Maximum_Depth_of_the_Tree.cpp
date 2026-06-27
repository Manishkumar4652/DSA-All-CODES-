#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

// 1. TreeNode Structure Definition
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// 2. Aapki Solution Class
class Solution {
public:
    int maxDepth(TreeNode* root) {
        // base case
        if(root == NULL) {
            return 0;
        }
        int leftheight = maxDepth(root->left) + 1;
        int rightheight = maxDepth(root->right) + 1;
        int ans = max(leftheight, rightheight);
        return ans;
    }
};

// 3. Helper Function: Tree me input lene ke liye
TreeNode* buildTreeFromInput() {
    cout << "Enter root data (ya NULL ke liye -1 dalei): ";
    int rootVal;
    cin >> rootVal;

    if (rootVal == -1) return NULL;

    TreeNode* root = new TreeNode(rootVal);
    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        TreeNode* current = q.front();
        q.pop();

        // Left child ke liye input
        cout << "Enter left child of " << current->val << " (ya NULL ke liye -1 dalei): ";
        int leftVal;
        cin >> leftVal;
        if (leftVal != -1) {
            current->left = new TreeNode(leftVal);
            q.push(current->left);
        }

        // Right child ke liye input
        cout << "Enter right child of " << current->val << " (ya NULL ke liye -1 dalei): ";
        int rightVal;
        cin >> rightVal;
        if (rightVal != -1) {
            current->right = new TreeNode(rightVal);
            q.push(current->right);
        }
    }
    return root;
}

// 4. Main Function
int main() {
    cout << "--- Binary Tree Max Depth Calculator ---" << endl;
    
    // Tree build karein
    TreeNode* root = buildTreeFromInput();

    // Solution ka object banakar function call karein
    Solution solver;
    int depth = solver.maxDepth(root);

    cout << "\n-----------------------------------" << endl;
    cout << "Maximum Depth of the Tree is: " << depth << endl;
    cout << "-----------------------------------" << endl;

    return 0;
}


// --- Binary Tree Max Depth Calculator ---
// Enter root data (ya NULL ke liye -1 dalei): 1
// Enter left child of 1 (ya NULL ke liye -1 dalei): 2
// Enter right child of 1 (ya NULL ke liye -1 dalei): 3
// Enter left child of 2 (ya NULL ke liye -1 dalei): -1
// Enter right child of 2 (ya NULL ke liye -1 dalei): -1
// Enter left child of 3 (ya NULL ke liye -1 dalei): 4
// Enter right child of 3 (ya NULL ke liye -1 dalei): -1
// Enter left child of 4 (ya NULL ke liye -1 dalei): -1
// Enter right child of 4 (ya NULL ke liye -1 dalei): -1

// -----------------------------------
// Maximum Depth of the Tree is: 3
// -----------------------------------