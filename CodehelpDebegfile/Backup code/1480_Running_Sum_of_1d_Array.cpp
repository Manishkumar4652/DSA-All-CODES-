// 1480. Running Sum of 1d Array
// Easy
// Topics
// premium lock icon
// Companies
// Hint
// Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).
// Return the running sum of nums.
// Example 1:
// Input: nums = [1,2,3,4]
// Output: [1,3,6,10]
// Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].
// Example 2:
// Input: nums = [1,1,1,1,1]
// Output: [1,2,3,4,5]
// Explanation: Running sum is obtained as follows: [1, 1+1, 1+1+1, 1+1+1+1, 1+1+1+1+1].
// Example 3:
// Input: nums = [3,1,2,10,1]
// Output: [3,4,6,16,17]


// 1480. Running Sum of 1d Array
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr = {1,2,3,4};
    vector<int> ans;
    int sum = 0;

    for(int i=0;i<arr.size();i++){
        sum = sum + arr[i];
        ans.push_back(sum);
    }
        for(int a: ans){
            cout<<a<<" ";
        }
}


class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {

        // Vector to store the running sum result
        vector<int> result;

        // Variable to keep track of cumulative sum
        int sum = 0;

        // Traverse the input array
        for (int i = 0; i < nums.size(); i++) {

            // Add current element to sum
            sum = sum + nums[i];

            // Store the current running sum
            result.push_back(sum);
        }

        // Return the final running sum array
        return result;
    }
};
