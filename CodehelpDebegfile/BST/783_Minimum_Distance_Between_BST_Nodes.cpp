// 783. Minimum Distance Between BST Nodes
// Example 1:
// Input: root = [4,2,6,1,3]
// Output: 1
// Example 2:
// Input: root = [1,0,48,null,null,12,49]
// Output: 1
#include <iostream>
#include <limits.h>
#include <string>
#include <vector>
#include <queue>
using namespace std;

class Node
{
public:
	int data;
	Node *left;
	Node *right;

	Node(int value)
	{
		data = value;
		left = NULL;
		right = NULL;
	}
};
vector<int> diff;
void inorder(Node *root)
{
	if (root == NULL)
	{
		return;
	}
	inorder(root->left);
	diff.push_back(root->data);
	inorder(root->right);
}

int main(){
	Node *root = new Node(2);

	root->left = new Node(2);
	root->right = new Node(6);

	root->left->left = new Node(1);
	root->left->right = new Node(3);

	inorder(root);

	int mini = INT_MAX;
	for (int i = 0; i < diff.size() - 1; i++){
		mini = min(mini, diff[i + 1] - diff[i]);
		cout<<mini<<" ";
	}
	cout << mini;
}






/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */

 /*
class Solution {
public:
    vector<int> diff;
    void inorder(TreeNode* root) {
        if (root == NULL) {
            return;
        }
        inorder(root->left);
        diff.push_back(root->val);
        inorder(root->right);
    }
    int minDiffInBST(TreeNode* root) {
        inorder(root);
        int mini = INT_MAX;
        for (int i = 0; i < diff.size() - 1; i++) {
            mini = min(mini, diff[i + 1] - diff[i]);
        }
        return mini;
    }
};
*/