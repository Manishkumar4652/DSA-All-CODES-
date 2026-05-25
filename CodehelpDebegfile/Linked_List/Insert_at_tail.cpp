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
int main(){
    Node*head = NULL;
    Node*tail = NULL;

    InsetTail(1,head,tail);
    InsetTail(2,head,tail);
    InsetTail(3,head,tail);
    InsetTail(4,head,tail);
    InsetTail(5,head,tail);
    InsetTail(6,head,tail);
    InsetTail(7,head,tail);

    printallinklist(head);
}