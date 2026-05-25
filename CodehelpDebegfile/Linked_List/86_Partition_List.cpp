// 86. Partition List
// Given the head of a linked list and a value x, partition it such that all nodes less than x come before nodes greater than or equal to x.
// You should preserve the original relative order of the nodes in each of the two partitions.
// Example 1:
// Input: head = [1,4,3,2,5,2], x = 3
// Output: [1,2,2,4,3,5]
// Example 2:
// Input: head = [2,1], x = 2
// Output: [1,2]
#include <iostream>
using namespace std;

// Node class
class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Insert at tail
void insertAtTail(Node* &head, Node* &tail, int val) {

    Node* newNode = new Node(val);

    // list empty
    if(head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

// Print list
void printList(Node* head) {

    Node* temp = head;

    while(temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

// Separate function
void separateList(Node* head,
                  Node* &greaterHead,
                  Node* &greaterTail,
                  Node* &smallerHead,
                  Node* &smallerTail) {

    Node* temp = head;

    while(temp != NULL) {

        if(temp->data >= 3) {
            insertAtTail(greaterHead,
                         greaterTail,
                         temp->data);
        }
        else {
            insertAtTail(smallerHead,
                         smallerTail,
                         temp->data);
        }

        temp = temp->next;
    }
}

// Merge both lists
// Merge lists
// Merge lists: attach greater list after smaller list
Node* mergeList(Node* smallerTail,
                Node* greaterHead,
                Node* smallerHead) {

    if(smallerHead == NULL) return greaterHead;

    // attach
    smallerTail->next = greaterHead;
    return smallerHead;
}

int main() {

    // Original list
    Node* head = NULL;
    Node* tail = NULL;

    insertAtTail(head, tail, 1);
    insertAtTail(head, tail, 4);
    insertAtTail(head, tail, 3);
    insertAtTail(head, tail, 2);
    insertAtTail(head, tail, 5);
    insertAtTail(head, tail, 2);

    cout << "Original List: ";
    printList(head);

    // Greater list
    Node* greaterHead = NULL;
    Node* greaterTail = NULL;

    // Smaller list
    Node* smallerHead = NULL;
    Node* smallerTail = NULL;

    // Separate lists
    separateList(head,
                 greaterHead,
                 greaterTail,
                 smallerHead,
                 smallerTail);

    cout << "Greater List: ";
    printList(greaterHead);

    cout << "Smaller List: ";
    printList(smallerHead);

    // Merge lists
    Node* mergedHead =
        mergeList(smallerTail,
                  greaterHead,
                  smallerHead);

    cout << "Merged List: ";
    printList(mergedHead);

    return 0;
}




// class Solution {
// public:

//     ListNode* partition(ListNode* head, int x) {

//         // smaller list
//         ListNode* smallHead = new ListNode(0);
//         ListNode* smallTail = smallHead;

//         // greater/equal list
//         ListNode* largeHead = new ListNode(0);
//         ListNode* largeTail = largeHead;

//         ListNode* temp = head;

//         while(temp != NULL) {

//             // x se choti value
//             if(temp->val < x) {

//                 smallTail->next = temp;
//                 smallTail = temp;
//             }

//             // x se badi ya equal value
//             else {

//                 largeTail->next = temp;
//                 largeTail = temp;
//             }

//             temp = temp->next;
//         }

//         // important
//         largeTail->next = NULL;

//         // merge
//         smallTail->next = largeHead->next;

//         // final answer
//         return smallHead->next;
//     }
// };