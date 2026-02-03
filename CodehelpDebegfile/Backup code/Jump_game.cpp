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



//For Leetcode 

class Solution {
public:
    bool solve(vector<int>& nums, int index) {
        // base case
        if (index == nums.size()) {
            return true;
        }

        if (index >= nums.size()) {
            return false;
        }

        if (nums[index] == 0) {
            return false;
        }

        // process
        int reAns = false;

        for (int jump = 1; jump <= nums[index]; jump++) {
            reAns = reAns || solve(nums, index + jump);
            if (reAns)
                return true;
        }

        return false;
    }
    bool canJump(vector<int>& nums) {
        int index = 0;
        int ans = solve(nums, index);
        return ans;
    }
};