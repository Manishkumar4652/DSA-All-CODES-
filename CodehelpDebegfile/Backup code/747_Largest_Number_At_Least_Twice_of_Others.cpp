// 747. Largest Number At Least Twice of Others
// Example 1:
// Input: nums = [3,6,1,0]
// Output: 1
// Explanation: 6 is the largest integer.
// For every other number in the array x, 6 is at least twice as big as x.
// The index of value 6 is 1, so we return 1.
// Example 2:
// Input: nums = [1,2,3,4]
// Output: -1
// Explanation: 4 is less than twice the value of 3, so we return -1.
#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> nums = {3,6,1,0};

    int maxi = 0;

    // largest element ka index
    for(int i = 1; i < nums.size(); i++) {
        if(nums[i] > nums[maxi]) {
            maxi = i;
        }
    }

    int largest = nums[maxi];

    // condition check
    for(int i = 0; i < nums.size(); i++) {
        if(i != maxi && largest < 2 * nums[i]) {
            cout << -1;
            return 0;
        }
    }

    cout << maxi;
}






class Solution {
public:
    int dominantIndex(vector<int>& nums) {
    int maxi = 0;

    // largest element ka index
    for(int i = 1; i < nums.size(); i++) {
        if(nums[i] > nums[maxi]) {
            maxi = i;
        }
    }

    int largest = nums[maxi];

    // condition check
    for(int i = 0; i < nums.size(); i++) {
        if(i != maxi && largest < 2 * nums[i]) {
            return -1;
            return 0;
        }
    }

    return maxi;        
    }
};