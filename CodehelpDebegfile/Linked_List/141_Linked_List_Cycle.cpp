// 141. Linked List Cycle
// Example 1:
// Input: head = [3,2,0,-4], pos = 1
// Output: true
// Explanation: There is a cycle in the linked list, where the tail connects to the 1st node (0-indexed).
// Example 2:
// Input: head = [1,2], pos = 0
// Output: true
// Explanation: There is a cycle in the linked list, where the tail connects to the 0th node.
// Example 3:
// Input: head = [1], pos = -1
// Output: false
// Explanation: There is no cycle in the linked list.
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};
void checkCycle(Node* head){
    // use slow or fast pointer
    Node* slow = head;
    Node* fast = head;

    while(fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
            slow = slow->next;

            if(slow == fast){
                cout<<"True";
                return;
            }
        }
    }
    cout<<"False";
}
int main() {
    // Nodes create
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    Node* sixth = new Node(60);
    Node* seventh = new Node(70);

    // Linking
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;

    // Circular link (last node points to head)
    seventh->next = third;

    // Print first 10 elements to show cycle
    Node* temp = head;
    int count = 0;

    // while (count < 20) {
    //     cout << temp->data << " ";
    //     temp = temp->next;
    //     count++;
    // }
    checkCycle(head);

    return 0;
}