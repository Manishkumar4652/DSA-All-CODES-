// 3507. Minimum Pair Removal to Sort Array I
// Example 1:
// Input: nums = [5,2,3,1]
// Output: 2
// Explanation:
// The pair (3,1) has the minimum sum of 4. After replacement, nums = [5,2,4].
// The pair (2,4) has the minimum sum of 6. After replacement, nums = [5,6].
// The array nums became non-decreasing in two operations.

// Example 2:
// Input: nums = [1,2,2]
// Output: 0
// Explanation:
// The array nums is already sorted.
#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int shiftLeft(vector<int>&nums,int idx){
    for(int i=idx;i<nums.size()-1;i++){
        nums[i] = nums[i+1];
    }
    nums.pop_back();
}
int mergpair(vector<int>&nums){
    int minSum = INT_MAX;
    int minIndex = -1;
    for(int i=0;i<nums.size()-1;i++){
        int sum = nums[i] + nums[i+1];
        if(sum < minSum){
            minSum = sum;
            minIndex = i;
        }
    }
    nums[minIndex] = minSum;
    shiftLeft(nums,minIndex+1);
}
bool isSafe(vector<int>&nums){
    for(int i=0;i<nums.size()-1;i++){
        if(nums[i] > nums[i+1])  return false;  
    }
    return true;
}
int main(){
    vector<int> nums = {5,2,3,1};
    int result = 0;
    while(!isSafe(nums)){
        mergpair(nums);
        result++;
    }
    cout<<result;
}