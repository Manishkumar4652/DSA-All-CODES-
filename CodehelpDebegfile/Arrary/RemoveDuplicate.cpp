#include<iostream>
#include<vector>
using namespace std;
int main(){
   // vector<int> arr = {0,0,1,1,1,2,2,3,3,4};
    vector<int> arr = {1,1,2};
    int n = arr.size();
    vector<int> brr;
    brr.push_back(arr[0]);
    for(int i=1;i<n;i++){
        if(arr[i] != arr[i-1]){
            // cout<<arr[i]<<" "; 
            brr.push_back(arr[i]);
        }
    }
        for(int a : brr){
            cout<<a<<" ";
        }

}