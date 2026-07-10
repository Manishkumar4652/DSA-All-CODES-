//Binary tree to dll
#include <iostream>
#include <limits.h>
#include <string>
#include <vector>
#include <queue>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int val) {
        data = val;
        prev = NULL;
        next = NULL;
    }
};

class TreeNode{
public:
	int data;
	TreeNode *left;
	TreeNode *right;

	TreeNode(int value){
		data = value;
		left = NULL;
		right = NULL;
	}
};
void insertAtTail(Node* &head, int val) {

    Node* newNode = new Node(val);

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;

    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;
}
void inorder(TreeNode *root, Node* &head) {

    if (root == NULL)
        return;

    inorder(root->left, head);

    insertAtTail(head, root->data);

    inorder(root->right, head);
}

void print(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}
int main() {

    TreeNode *root = new TreeNode(4);

    root->left = new TreeNode(2);
    root->right = new TreeNode(6);

    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);

    Node* head = NULL;

    inorder(root, head);

    print(head);
}