#include<iostream>
#include<stack>
#include<vector>
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

int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    int value = 105;

    InsertBottom(st , value);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}