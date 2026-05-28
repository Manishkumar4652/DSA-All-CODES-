// 2. Add Two Numbers
// You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.
// You may assume the two numbers do not contain any leading zero, except the number 0 itself.
// Example 1:
// Input: l1 = [2,4,3], l2 = [5,6,4]
// Output: [7,0,8]
// Explanation: 342 + 465 = 807.
// Example 2:
// Input: l1 = [0], l2 = [0]
// Output: [0]
// Example 3:
// Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
// Output: [8,9,9,9,0,0,0,1]
#include<iostream>
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

void printallinklist(Node* head){
    Node*temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
}
Node* InsetTail(int valu , Node* &head , Node* &tail){
    //aghar node empty ho to
    if(head == NULL && tail == NULL){
        //create a node
        Node* newnode = new Node(valu);
        head = newnode;
        tail = newnode;
    }
    else{
    //node empty nhi hoga
        Node* newnode = new Node(valu);
        tail->next = newnode;
        tail = newnode;
    }   
    return head;
}

Node* sumLinkdlist(Node* &head1 , Node* &tail1 , Node* &head2 , Node* &tail2){
    int carry = 0;
    Node* head3 = NULL;
    Node* tail3 = NULL;

    while(head1 != NULL || head2 != NULL || carry){
        int sum = carry;
        if(head1 != NULL){
            sum += head1->data;
            head1 = head1->next;
        }
        if(head2 != NULL){
            sum += head2->data;
            head2 = head2->next;
        }
        carry = sum / 10;
        int digit = sum % 10;
        InsetTail(digit, head3, tail3);
    }
    return head3;
}
int main(){

    //create l1 linkdlist
    Node* head1 = NULL;
    Node* tail1 = NULL;
    InsetTail(1, head1, tail1);
    InsetTail(2, head1, tail1);
    InsetTail(3, head1, tail1);

    //create l2 linkdlist
    Node* head2 = NULL;
    Node* tail2 = NULL;
    InsetTail(5, head2, tail2);
    InsetTail(6, head2, tail2);
    InsetTail(4, head2, tail2);

    // add linked lists
    Node* ans = sumLinkdlist(head1, tail1, head2, tail2);

    // print answer
    printallinklist(ans);
}