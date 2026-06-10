#include<iostream>
#include<stack>
using namespace std;

void InsertBottom(stack<int> &st , int value){
    //base case
    if(st.empty()){
        st.push(value);
        return;
    }

    int topelement = st.top();
    st.pop();

    //recursion
    InsertBottom(st , value);

    //backtraking
    st.push(topelement);
}

void reversStack(stack<int> &s){
    //base case
    if(s.empty()){
        return ;
    }
    //Get top element
    int topelement = s.top();
    s.pop();

    //recursion
    reversStack(s);

    //insert back while returning
    InsertBottom(s,topelement);
}
//print stack
void printStack(stack<int> st){
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
    cout<<"\n";
}

int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    reversStack(s);
    printStack(s);

    return 0;
}