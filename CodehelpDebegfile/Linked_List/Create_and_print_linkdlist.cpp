#include<iostream>
using namespace std;
int main(){

class Node{
public:
    int data;
    Node* next;

    Node(int valu){
        data = valu;
        next = NULL;
    }
};

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

    Node* temp = l1;

    while(temp != NULL){
        cout<<temp->data;
        temp = temp->next;
    }
}