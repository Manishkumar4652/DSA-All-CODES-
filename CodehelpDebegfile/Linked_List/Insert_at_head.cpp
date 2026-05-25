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
Node* InsetstHead(int valu , Node*head , Node*tail){
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
        newnode->next = head;
        head = newnode;
    }   
    return head;
}
int main(){
    Node*head = NULL;
    Node*tail = NULL;

    head = InsetstHead(1,head,tail);
    head = InsetstHead(2,head,tail);
    head = InsetstHead(3,head,tail);
    head = InsetstHead(4,head,tail);
    head = InsetstHead(5,head,tail);
    head = InsetstHead(6,head,tail);
    head = InsetstHead(7,head,tail);

    printallinklist(head);
}