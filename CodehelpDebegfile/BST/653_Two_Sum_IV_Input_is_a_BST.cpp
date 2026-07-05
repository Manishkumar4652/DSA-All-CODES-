// 653. Two Sum IV - Input is a BST
// Example 1:
// Input: root = [5,3,6,2,4,null,7], k = 9
// Output: true
// Example 2:
// Input: root = [5,3,6,2,4,null,7], k = 28
// Output: false

#include <iostream>
#include <vector>
using namespace std;

vector<int> order;

class Node {
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

Node* buildBST(Node* root, int value) {
    if (root == NULL) {
        return new Node(value);
    }

    if (value > root->data)
        root->right = buildBST(root->right, value);
    else
        root->left = buildBST(root->left, value);

    return root;
}

Node* createBST(Node* root) {
    cout << "Enter node values (-1 to stop): ";

    int val;
    cin >> val;

    while (val != -1) {
        root = buildBST(root, val);
        cin >> val;
    }

    return root;
}

void inorder(Node* root) {
    if (root == NULL)
        return;

    inorder(root->left);
    order.push_back(root->data);
    inorder(root->right);
}

int main() {

    int target;

    cout << "Enter Target: ";
    cin >> target;

    Node* root = NULL;
    root = createBST(root);

    inorder(root);

    int i = 0;
    int j = order.size() - 1;

    while (i < j) {

        int sum = order[i] + order[j];

        if (sum == target) {
            cout << "True";
            return 0;
        }
        else if (sum < target) {
            i++;
        }
        else {
            j--;
        }
    }

    cout << "False";

    return 0;
}