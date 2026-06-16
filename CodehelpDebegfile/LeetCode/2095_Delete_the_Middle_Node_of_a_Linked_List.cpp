// // 2095. Delete the Middle Node of a Linked List
// Example 1:
// Input: head = [1,3,4,7,1,2,6]
// Output: [1,3,4,1,2,6]
// Explanation:
// The above figure represents the given linked list. The indices of the nodes are written below.
// Since n = 7, node 3 with value 7 is the middle node, which is marked in red.
// We return the new list after removing this node. 
// Example 2:
// Input: head = [1,2,3,4]
// Output: [1,2,4]
// Explanation:
// The above figure represents the given linked list.
// For n = 4, node 2 with value 3 is the middle node, which is marked in red.
// Example 3:
// Input: head = [2,1]
// Output: [2]
// Explanation:
// The above figure represents the given linked list.
// For n = 2, node 1 with value 1 is the middle node, which is marked in red.
// Node 0 with value 2 is the only node remaining after removing node 1.
#include<iostream>
#include<vector>
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

    Node* l1 = new Node(1);
    Node* l2 = new Node(3);
    Node* l3 = new Node(4);
    Node* l4 = new Node(7);
    Node* l5 = new Node(1);
    Node* l6 = new Node(2);
    Node* l7 = new Node(6);

    l1->next = l2;
    l2->next = l3;
    l3->next = l4;
    l4->next = l5;
    l5->next = l6;
    l6->next = l7;

    Node* head = l1;

    // Single node case
    if(head == NULL || head->next == NULL){
        return 0;
    }

    // Find node before middle
    Node* slow = head;
    Node* fast = head->next->next;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }

    // Delete middle node
    Node* del = slow->next;
    slow->next = del->next;
    delete del;

    // Print list
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data;
        if(temp->next) cout << "->";
        temp = temp->next;
    }

    return 0;
}