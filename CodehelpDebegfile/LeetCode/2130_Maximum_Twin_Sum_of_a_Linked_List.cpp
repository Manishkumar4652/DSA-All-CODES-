// 2130. Maximum Twin Sum of a Linked List
// Example 1:
// Input: head = [5,4,2,1]
// Output: 6
// Explanation:
// Nodes 0 and 1 are the twins of nodes 3 and 2, respectively. All have twin sum = 6.
// There are no other nodes with twins in the linked list.
// Thus, the maximum twin sum of the linked list is 6. 
// Example 2:
// Input: head = [4,2,2,3]
// Output: 7
// Explanation:
// The nodes with twins present in this linked list are:
// - Node 0 is the twin of node 3 having a twin sum of 4 + 3 = 7.
// - Node 1 is the twin of node 2 having a twin sum of 2 + 2 = 4.
// Thus, the maximum twin sum of the linked list is max(7, 4) = 7. 
// Example 3:
// Input: head = [1,100000]
// Output: 100001
// Explanation:
// There is only one node with a twin in the linked list having twin sum of 1 + 100000 = 100001.
#include<iostream>
#include<algorithm>
#include<vector>
#include <climits>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int valu){
        data = valu;
        next = NULL;
    }
};
int main(){
    vector<int> ans;

    Node* l1 = new Node(1);
    Node* l2 = new Node(2);
    Node* l3 = new Node(3);
    Node* l4 = new Node(4);
    Node* l5 = new Node(5);
    Node* l6 = new Node(6);
    Node* l7 = new Node(7);

    // linking
    l1->next = l2;
    l2->next = l3;
    l3->next = l4;
    l4->next = l5;
    l5->next = l6;
    l6->next = l7;

    Node* head = l1;
    Node* tail = l1;

    while(head != NULL){
        ans.push_back(head->data);
        head = head->next;
    }
    
    int n = ans.size();
    int i=0;
    int j=n-1;
    int maxi = INT_MIN;
    while(i < j){
        int sum = ans[i]+ans[j];
        maxi = max(maxi,sum);
        i++;
        j--;
    }
    cout<<maxi;
}