#include<iostream>
#include<vector>
using namespace std;
bool solve(vector<int> arr , int index){
    // base case
    if(index == arr.size()){
        return true;
    }

    if(index >= arr.size()){
        return false;
    }

    if(arr[index] == 0){
        return false;
    }

    // process 
    int reAns = false;

    for(int jump=1;jump<=arr[index];jump++){

        return reAns || solve(arr , jump+index);
    }
}
int main(){
    vector<int> arr = {2,3,1,1,4};  //Yes
    //vector<int> arr = {2,0,1,0,4};  //No
    int index = 0;
    int ans = solve(arr , index);
    if(ans){
        cout<<"Yes achive last index";
    }
    else{
        cout<<"No achive last index";
    }
}