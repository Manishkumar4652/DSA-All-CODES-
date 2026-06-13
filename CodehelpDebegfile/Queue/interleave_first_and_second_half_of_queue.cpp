// interleave first and second half of queue 
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void InterLeave(vector<int> &v , vector<int> &ans){

    int n = v.size();
    int halfs = n/2;

    for(int i=0;i<halfs;i++){
        int first = i;
        int second = i+halfs;

        ans.push_back(v[first]);
        ans.push_back(v[second]);
    }
}
int main(){
    vector<int> v;
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);

    while(!q.empty()){
        v.push_back(q.front());
        q.pop();
    }

    vector<int> ans;

    InterLeave(v,ans);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}