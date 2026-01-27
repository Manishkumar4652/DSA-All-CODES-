// 3190. Find Minimum Operations to Make All Elements Divisible by ThrExample 1:
// Input: nums = [1,2,3,4]
// Output: 3
// Explanation:
// All array elements can be made divisible by 3 using 3 operations:
// Subtract 1 from 1.
// Add 1 to 2.
// Subtract 1 from 4.
// Example 2:
// Input: nums = [3,6,9]
// Output: 0
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr = {1,2,3,4};
    int count = 0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]%3 != 0){
            count++;
        }
    }
    cout<<count;
}