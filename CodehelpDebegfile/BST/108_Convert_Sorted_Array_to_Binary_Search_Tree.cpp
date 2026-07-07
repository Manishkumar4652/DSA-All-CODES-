// 108. Convert Sorted Array to Binary Search Tree
// Example 1:
// Input: nums = [-10,-3,0,5,9]
// Output: [0,-3,9,-10,null,5]
// Explanation: [0,-10,5,null,-3,null,9] is also accepted:
// Example 2:
// Input: nums = [1,3]
// Output: [3,1]
// Explanation: [1,null,3] and [3,1] are both height-balanced BSTs.

#include <iostream>
#include <limits.h>
#include <string>
#include <vector>
#include<queue>
using namespace std;

class Node{
public:
	int data;
	Node* left;
	Node* right;

	Node(int value) {
		data = value;
		left = NULL;
		right = NULL;
	}
};
Node* solve(vector<int> &inorder, int s, int e){
    if(s > e){
        return NULL;
    }

    int mid = (s + e) / 2;
    int element = inorder[mid];

    Node* root = new Node(element);

    root->left = solve(inorder, s, mid-1);
    root->right = solve(inorder, mid+1, e);

    return root;
}

void printinorder(Node* root){
	//LNR;
	//base case
	if(root == NULL) {
		return ;
	}
	//LNR
	printinorder(root->left);
	cout << root->data << " ";
	printinorder(root->right);
}

int main(){
    vector<int> nums = {-10,-3,0,5,9};
    int start = 0;
    int end = nums.size()-1;

    Node* root = solve(nums, start, end);

    printinorder(root);
}