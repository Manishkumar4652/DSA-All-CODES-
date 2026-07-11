// 98. Validate Binary Search Tree
// Example 1:
// Input: root = [2,1,3]
// Output: true
// Example 2:
// Input: root = [5,1,4,null,null,3,6]
// Output: false
// Explanation: The root node's value is 5 but its right child's value is 4.
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
vector<int> order;
void inorder(TreeNode* root){
	//LNR;
	//base case
	if(root == NULL) {
		return ;
	}
	//LNR
	inorder(root->left);
	order.push_back(root->val);
	inorder(root->right);
}

int main() {

    /*
              6
            /   \
           2     8
          / \   / \
         0   4 7   9
            / \
           3   5
    */

    TreeNode* root = new TreeNode(6);

    root->left = new TreeNode(2);
    root->right = new TreeNode(8);

    root->left->left = new TreeNode(0);
    root->left->right = new TreeNode(4);

    root->left->right->left = new TreeNode(3);
    root->left->right->right = new TreeNode(5);

    root->right->left = new TreeNode(7);
    root->right->right = new TreeNode(9);

    inorder(root);

    for(int i=0;i<order.size()-1;i++){
        if(order[i]>=order[i+1]){
            cout<<"Not a valid BST"<<endl;
            return 0;
        }
        else{
            cout<<"Valid BST";
            return 0;
    }

}

}