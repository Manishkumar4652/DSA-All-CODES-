// 645. Set Mismatch
// Example 1:
// Input: nums = [1,2,2,4]
// Output: [2,3]
// Example 2:
// Input: nums = [1,1]
// Output: [1,2]
// [duplicate_number, missing_number]
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr = {1,2,2,4};
    int duplicate = -1;
    int missing = -1;

        //for duplicate element
    for(int i=0;i<arr.size();i++){
        int index = abs(arr[i])-1;

        if(arr[index]<0){
            duplicate = abs(arr[i]);
        }
        
        else{
            arr[index] = -arr[index];
        }
    }
        // for missing element
    for(int i=0;i<arr.size();i++){
        if(arr[i] > 0){
            missing = i+1;
        }
    }
    cout<<"["<<duplicate<<" "<<missing<<"]";
}
