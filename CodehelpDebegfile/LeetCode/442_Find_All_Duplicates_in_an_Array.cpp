// 442. Find All Duplicates in an Array
// Visiting method
// Input: nums = [4,3,2,7,8,2,3,1]
// Output: [2,3]
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr = {4,3,2,7,8,2,3,1};
    vector<int> ans;

    for(int i=0;i<arr.size();i++){
        int index = abs(arr[i])-1;

        if(arr[index]<0){
            ans.push_back(abs(arr[i]));
        }
        else{
            arr[index] = -arr[index];
        }
    }
        for(auto a:ans){
            cout<<a;
        }
}