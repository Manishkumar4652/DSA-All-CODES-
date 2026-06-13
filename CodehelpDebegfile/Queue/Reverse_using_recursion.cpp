#include<iostream>
#include<queue>
using namespace std;
void usingRecurion(queue<int> &q){
    //base case
    if(q.empty()){
        return ;
    }

    //ak case mera
    int topEle = q.front();
    q.pop();

    usingRecurion(q);

    //backtracking
    q.push(topEle);
}
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    usingRecurion(q);

    //print
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}