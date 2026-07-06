// 230_Kth_Smallest_Element_in_a_BST
// Example 1:
// Input: root = [3,1,4,null,2], k = 1
// Output: 1
// Example 2:
// Input: root = [5,3,6,2,4,null,null,1], k = 3
// Output: 3

// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> order;

// class Node {
// public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int value) {
//         data = value;
//         left = NULL;
//         right = NULL;
//     }
// };

// Node* buildBST(Node* root, int value) {
//     if (root == NULL) {
//         return new Node(value);
//     }

//     if (value > root->data)
//         root->right = buildBST(root->right, value);
//     else
//         root->left = buildBST(root->left, value);

//     return root;
// }

// void inorder(Node* root) {
//     if (root == NULL)
//         return;

//     inorder(root->left);
//     order.push_back(root->data);
//     inorder(root->right);
// }

// int main() {

//     int target = 3;

//     Node* root = NULL;

//     root = buildBST(root, 50);
//     root = buildBST(root, 30);
//     root = buildBST(root, 70);
//     root = buildBST(root, 20);
//     root = buildBST(root, 40);
//     root = buildBST(root, 60);
//     root = buildBST(root, 80);

//     inorder(root);

//     cout<<order[target-1]<<endl;

//     return 0;
// }


//with recurison solution

#include <iostream>
#include <vector>
using namespace std;

//vector<int> order;

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

    void inorder(Node* root, int &k) {
        if (root == NULL || k == 0)
            return;

        inorder(root->left, k);
        if (k == 0) return;
        if (--k == 0) {
            cout << root->data;
            return;
        }
        inorder(root->right, k);
    }

int main() {

    int target = 3;

    Node* root = NULL;

    root = buildBST(root, 50);
    root = buildBST(root, 30);
    root = buildBST(root, 70);
    root = buildBST(root, 20);
    root = buildBST(root, 40);
    root = buildBST(root, 60);
    root = buildBST(root, 80);

    inorder(root, target);

    return 0;
}