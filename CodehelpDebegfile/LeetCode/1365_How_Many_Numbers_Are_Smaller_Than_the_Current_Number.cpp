// //1365. How Many Numbers Are Smaller Than the Current Number
// Example 1:

// Input: nums = [8,1,2,2,3]
// Output: [4,0,1,1,3]
// Explanation: 
// For nums[0]=8 there exist four smaller numbers than it (1, 2, 2 and 3). 
// For nums[1]=1 does not exist any smaller number than it.
// For nums[2]=2 there exist one smaller number than it (1). 
// For nums[3]=2 there exist one smaller number than it (1). 
// For nums[4]=3 there exist three smaller numbers than it (1, 2 and 2).

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr = {8,1,2,2,3};
    vector<int> ans(arr.size());
    for(int i=0;i<arr.size();i++){
        int count = 0;
        for(int j=0;j<arr.size();j++){
            if(arr[i] > arr[j]){
                count++;
            }
        }
            ans[i] = count;
    }
        for(auto a : ans){
            cout<<a<<" ";
        }
}