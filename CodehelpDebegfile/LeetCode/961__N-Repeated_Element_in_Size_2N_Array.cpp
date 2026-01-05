// 961. N-Repeated Element in Size 2N Array

// nums.length == 2 * n.
// nums contains n + 1 unique elements.
// Exactly one element of nums is repeated n times.
// Return the element that is repeated n times.

// Example 1:
// Input: nums = [1,2,3,3]
// Output: 3

// Example 2:
// Input: nums = [2,1,2,5,3,2]
// Output: 2

// Example 3:
// Input: nums = [5,1,5,2,5,3,5,4]
// Output: 5
#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> arr = {5,1,5,2,5,3,5,4};
    sort(arr.begin() , arr.end());
    for(int i=1;i<arr.size();i++){
        if(arr[i] == arr[i-1]){
            cout<<arr[i];
        }
    }
}