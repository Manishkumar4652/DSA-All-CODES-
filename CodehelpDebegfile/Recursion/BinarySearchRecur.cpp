#include<iostream>
#include<vector>
using namespace std;
int solve(int arr[] , int s , int e , int target){
    //base case
    if(s > e){
        return -1;  // condition fail
    }

    // process 
    int mid = (s+e)>>1;  // find mid element
    if(arr[mid] == target){
        return mid;
    }

    // recursive call
    // left side search
    if(arr[mid] > target){
        int recAns = solve(arr , s , mid-1 , target);
        return recAns;
    }

    // right side search
    else{
        int recAns = solve(arr , mid+1 , e , target);
        return recAns;
    }
}
int main(){
    vector<int> arr = {2,3,5,7,9};
    int n = arr.size()-1; // size of array
    int s = 0;   // starting point
    int e = n; // ending point
    int target = 7;  // target point
    int ans = solve(arr.data(), s, e, target);
    cout<< "Target index is: "<<ans;
}