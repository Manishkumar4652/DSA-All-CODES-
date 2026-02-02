// 2148. Count Elements With Strictly Smaller and Greater Elements 
// Example 1:
// Input: nums = [11,7,2,15]
// Output: 2
// Explanation: The element 7 has the element 2 strictly smaller than it and the element 11 strictly greater than it.
// Element 11 has element 7 strictly smaller than it and element 15 strictly greater than it.
// In total there are 2 elements having both a strictly smaller and a strictly greater element appear in nums.
// Example 2:
// Input: nums = [-3,3,3,90]
// Output: 2
// Explanation: The element 3 has the element -3 strictly smaller than it and the element 90 strictly greater than it.
// Since there are two elements with the value 3, in total there are 2 elements having both a strictly smaller and a strictly greater element appear in nums.
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    vector<int> arr = {11,7,2,15};
    int maxi = INT_MIN;
    int mini = INT_MAX;

    for(int i=0;i<arr.size();i++){
        maxi = max(maxi,arr[i]);
        mini = min(mini,arr[i]);

    }
    if(mini == maxi) cout<<0;
    int maxcount = 0;
    int minicount = 0;
    for(int i=0;i<arr.size();i++){
        if(arr[i] == maxi) maxcount++;
        if(arr[i] == mini) minicount++;
    }
    cout<<arr.size()-(maxcount+minicount);
}

//For Leetcode  

class Solution {
public:
    int countElements(vector<int>& nums) {
        int maxi = INT_MIN;
        int mini = INT_MAX;

        for (int i = 0; i < nums.size(); i++) {
            maxi = max(maxi, nums[i]);
            mini = min(mini, nums[i]);
        }
        if(mini == maxi) return 0;
        int maxcount = 0;
        int minicount = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == maxi)
                maxcount++;
            if (nums[i] == mini)
                minicount++;
        }

        return nums.size() - (maxcount + minicount);
    }
};