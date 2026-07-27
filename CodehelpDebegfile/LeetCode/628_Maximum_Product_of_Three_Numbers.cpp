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
#include <climits>
#include <algorithm>
using namespace std;
int main(){
    vector<int> nums = {-100,-98,-1,2,3,4};

        sort(nums.begin(), nums.end());

        int n = nums.size();

        int product1 = nums[n-1] * nums[n-2] * nums[n-3];
        int product2 = nums[0] * nums[1] * nums[n-1];

        cout<< max(product1, product2);
}