// Bottom View
#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
#include <climits>
using namespace std;

// Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
};

// Bottom View Function
vector<int> bottomView(Node *root) {
    queue<pair<Node*, int>> q;
    q.push({root, 0});

    unordered_map<int, Node*> distMap;

    int minDist = 0;
    int maxDist = 0;

    while(!q.empty()) {
        auto frontPair = q.front();
        q.pop();

        Node* frontNode = frontPair.first;
        int hd = frontPair.second;

        minDist = min(minDist, hd);
        maxDist = max(maxDist, hd);

        // Har baar overwrite karenge
        distMap[hd] = frontNode;

        // Left child
        if(frontNode->left != NULL) {
            q.push({frontNode->left, hd - 1});
        }

        // Right child
        if(frontNode->right != NULL) {
            q.push({frontNode->right, hd + 1});
        }
    }

    vector<int> ans;

    for(int i = minDist; i <= maxDist; i++) {
        ans.push_back(distMap[i]->data);
    }

    return ans;
}

int main() {
    /*
             1
           /   \
          2     3
         / \   / \
        4   5 6   7
             \
              8
    */

    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->left = new Node(6);
    root->right->right = new Node(7);

    root->left->right->right = new Node(8);

    vector<int> ans = bottomView(root);

    cout << "Bottom View: ";
    for(int x : ans) {
        cout << x << " ";
    }

    return 0;
}