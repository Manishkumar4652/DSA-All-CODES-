// // 109. Convert Sorted List to Binary Search Tree
// // Example 1:
// // Input: head = [-10,-3,0,5,9]
// // Output: [0,-3,9,-10,null,5]
// // Explanation: One possible answer is [0,-3,9,-10,null,5], which represents the shown height balanced BST.
// // Example 2:
// // Input: head = []
// // Output: []
// #include <iostream>
// #include <limits.h>
// #include <string>
// #include <vector>
// #include<queue>
// using namespace std;

// vector<int> nums;
// class Node{
// public:
// 	int data;
// 	Node* left;
// 	Node* right;
//     Node* next;

// 	Node(int value) {
// 		data = value;
// 		left = NULL;
// 		right = NULL;
//         next = NULL;
// 	}
// };
// void convertVector(Node* head){
//     Node* temp = head;

//     while(temp != NULL){
//         nums.push_back(temp->data);
//         temp = temp->next;
//     }
// }
// Node* solve(vector<int> &inorder, int s, int e){
//     if(s > e){
//         return NULL;
//     }

//     int mid = (s + e) / 2;
//     int element = inorder[mid];

//     Node* root = new Node(element);

//     root->left = solve(inorder, s, mid-1);
//     root->right = solve(inorder, mid+1, e);

//     return root;
// }

// void printinorder(Node* root){
// 	//LNR;
// 	//base case
// 	if(root == NULL) {
// 		return ;
// 	}
// 	//LNR
// 	printinorder(root->left);
// 	cout << root->data << " ";
// 	printinorder(root->right);
// }

// int main(){
    
//     Node* head = new Node(-10);
//     Node* second = new Node(-3);
//     Node* third = new Node(0);
//     Node* fourth = new Node(5);
//     Node* fifth = new Node(9);

//     head->next = second;
//     second->next = third;
//     third->next = fourth;
//     fourth->next = fifth;

//     convertVector(head);

//     int start = 0;
//     int end = nums.size()-1;

//     Node* root = solve(nums, start, end);

//     printinorder(root);
// }





// class Solution {
// public:
// vector<int> nums;
// int convertVector(ListNode* head){
//     ListNode* temp = head;
//     while(temp != nullptr){
//         nums.push_back(temp->val);
//         temp = temp->next;
//     }
//     return 0;
// }
// TreeNode* solve(vector<int> &inorder, int s, int e){
//     if(s > e){
//         return NULL;
//     }

//     int mid = (s + e) / 2;
//     int element = inorder[mid];

//     TreeNode* root = new TreeNode(element);

//     root->left = solve(inorder, s, mid-1);
//     root->right = solve(inorder, mid+1, e);

//     return root;
// }
//     TreeNode* sortedListToBST(ListNode* head) {
//     convertVector(head);

//     int start = 0;
//     int end = nums.size()-1;

//     TreeNode* root = solve(nums, start, end);

//     return root;   
//     }
// };


#include <iostream>
using namespace std;

// List Node
struct ListNode {
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

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

class Solution {
public:
    int getlen(ListNode* head) {
        ListNode* temp = head;
        int count = 0;

        while (temp != NULL) {
            count++;
            temp = temp->next;
        }

        return count;
    }

    TreeNode* solve(ListNode* &head, int n) {
        if (head == NULL || n <= 0)
            return NULL;

        // Left Subtree
        TreeNode* leftSubtree = solve(head, n / 2);

        // Root
        TreeNode* root = new TreeNode(head->val);
        root->left = leftSubtree;

        // Move linked list pointer
        head = head->next;

        // Right Subtree
        TreeNode* rightSubtree = solve(head, n - n / 2 - 1);
        root->right = rightSubtree;

        return root;
    }

    TreeNode* sortedListToBST(ListNode* head) {
        int len = getlen(head);
        return solve(head, len);
    }
};

// Inorder Traversal
void inorder(TreeNode* root) {
    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

int main() {

    // Linked List: 1 -> 2 -> 3 -> 4 -> 5

    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    Solution obj;

    TreeNode* root = obj.sortedListToBST(head);

    cout << "Inorder Traversal of BST: ";
    inorder(root);

    return 0;
}