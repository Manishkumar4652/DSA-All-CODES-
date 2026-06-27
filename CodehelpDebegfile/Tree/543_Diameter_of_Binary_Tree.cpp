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

// 2. Solution Class (Sirf Diameter Logic)
class Solution {
private:
    // Helper function: Node ki height/depth nikalne ke liye
    int maxDepth(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }
        return max(maxDepth(root->left), maxDepth(root->right)) + 1;
    }

public:
    int diameterOfBinaryTree(TreeNode* root) {
        // base case
        if (root == NULL) {
            return 0;
        }
        
        // Option 1: Diameter root node se hokar guzar raha hai (Left Height + Right Height)
        int option1 = maxDepth(root->left) + maxDepth(root->right);
        
        // Option 2: Diameter poora ka poora Left Subtree me hi hai
        int option2 = diameterOfBinaryTree(root->left);
        
        // Option 3: Diameter poora ka poora Right Subtree me hi hai
        int option3 = diameterOfBinaryTree(root->right);
        
        // Teeno me se jo maximum hoga, wahi hamara answer hai
        return max(option1, max(option2, option3));
    }
};

// 3. Helper Function: Tree me level-order input lene ke liye
TreeNode* buildTreeFromInput() {
    cout << "Enter root data (ya NULL ke liye -1 dalein): ";
    int rootVal;
    cin >> rootVal;

    if (rootVal == -1) return NULL;

    TreeNode* root = new TreeNode(rootVal);
    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        TreeNode* current = q.front();
        q.pop();

        // Left child input
        cout << "Enter left child of " << current->val << " (ya NULL ke liye -1 dalein): ";
        int leftVal;
        cin >> leftVal;
        if (leftVal != -1) {
            current->left = new TreeNode(leftVal);
            q.push(current->left);
        }

        // Right child input
        cout << "Enter right child of " << current->val << " (ya NULL ke liye -1 dalein): ";
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
    cout << "--- Diameter of Binary Tree Calculator ---" << endl;
    
    // Tree ka input lijiye
    TreeNode* root = buildTreeFromInput();

    // Solution ka object banakar diameter nikalye
    Solution solver;
    int diameter = solver.diameterOfBinaryTree(root);

    cout << "\n----------------------------------------" << endl;
    cout << "Diameter of the Binary Tree is: " << diameter << endl;
    cout << "----------------------------------------" << endl;

    return 0;
}



// --- Diameter of Binary Tree Calculator ---
// Enter root data (ya NULL ke liye -1 dalein): 1
// Enter left child of 1 (ya NULL ke liye -1 dalein): 2
// Enter right child of 1 (ya NULL ke liye -1 dalein): 3
// Enter left child of 2 (ya NULL ke liye -1 dalein): -1
// Enter right child of 2 (ya NULL ke liye -1 dalein): -1
// Enter left child of 3 (ya NULL ke liye -1 dalein): 4
// Enter right child of 3 (ya NULL ke liye -1 dalein): 5
// Enter left child of 4 (ya NULL ke liye -1 dalein): -1
// Enter right child of 4 (ya NULL ke liye -1 dalein): -1
// Enter left child of 5 (ya NULL ke liye -1 dalein): 6
// Enter right child of 5 (ya NULL ke liye -1 dalein): 7
// Enter left child of 6 (ya NULL ke liye -1 dalein): -1
// Enter right child of 6 (ya NULL ke liye -1 dalein): -1
// Enter left child of 7 (ya NULL ke liye -1 dalein): -1
// Enter right child of 7 (ya NULL ke liye -1 dalein): -1

// ----------------------------------------
// Diameter of the Binary Tree is: 4
// ----------------------------------------