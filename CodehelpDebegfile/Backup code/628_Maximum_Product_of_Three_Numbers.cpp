// 628. Maximum Product of Three Numbers
// Example 1:
// Input: nums = [1,2,3]
// Output: 6
// Example 2:
// Input: nums = [1,2,3,4]
// Output: 24
// Example 3:
// Input: nums = [-1,-2,-3]
// Output: -6
#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> nums = {-1,-2,-3};
    int n = nums.size();
    sort(nums.begin(),nums.end());

    int product1 = ((nums[n-1]*nums[n-2])*nums[n-3]);
    int product2 = ((nums[0]*nums[1])*nums[2]);

    if(product1 < 0 && product2 < 0){
        if(product1 < product2){
            cout<<product1;
        }
        else{
            cout<<product2;
        }
    }
    if(product1 > 0 && product2 > 0){
        if(product1 > product2){
            cout<<product1;
        }
        else{
            cout<<product2;
        }
    }


    //cout<<nums[n-1]<<" ";
}



class Solution {
public:
    int maximumProduct(vector<int>& nums) {
    int n = nums.size();
    sort(nums.begin(),nums.end());

    int product1 = ((nums[n-1]*nums[n-2])*nums[n-3]);
    int product2 = ((nums[0]*nums[1])*nums[2]);

    if(product1 < 0 && product2 < 0){
        if(product1 < product2){
            return product1;
        }
        else{
            return product2;
        }
    }
    if(product1 > 0 && product2 > 0){
        if(product1 > product2){
            return product1;
        }
        else{
            return product2;
        }
    }
    return 0; 
    
}       
};