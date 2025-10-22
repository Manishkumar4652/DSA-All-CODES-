#include<iostream>
#include<vector>
using namespace std;
int main(){
   // vector<int> arr = {0,0,1,1,1,2,2,3,3,4};
    vector<int> arr = {1,1,2};
    int n = arr.size();
    vector<int> ans;

    int traget = 1;
    for(int i=0;i<n;i++){
        if(arr[i] != traget){
            ans.push_back(arr[i]);
        }
    }
        for(int a : ans){
            cout<<a<<" ";
        }
}