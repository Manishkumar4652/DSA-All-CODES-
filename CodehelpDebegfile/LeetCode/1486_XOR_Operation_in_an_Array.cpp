// You are given an integer n and an integer start.
// Define an array nums where nums[i] = start + 2 * i (0-indexed) and n == nums.length.
// Return the bitwise XOR of all elements of nums.
// Example 1:
// Input: n = 5, start = 0
// Output: 8
// Explanation: Array nums is equal to [0, 2, 4, 6, 8] where (0 ^ 2 ^ 4 ^ 6 ^ 8) = 8.
// Where "^" corresponds to bitwise XOR operator.
// Example 2:
// Input: n = 4, start = 3
// Output: 8
// Explanation: Array nums is equal to [3, 5, 7, 9] where (3 ^ 5 ^ 7 ^ 9) = 8.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr = {0, 2, 4, 6, 8};
    int start = 0;
    int ans = 0;
    for(int i=0;i<arr.size();i++){
        ans = ans^(start+2*i);
    }
    cout<<ans;
}


class Solution {
public:
    int xorOperation(int n, int start) {
        // This variable will store the final XOR result
        int ans = 0;

        // Loop from 0 to n-1
        for (int i = 0; i < n; i++) {
            // Generate the current element using the formula:
            // nums[i] = start + 2*i
            int currentValue = start + 2 * i;

            // Apply XOR operation with the result
            ans = ans ^ currentValue;
        }

        // Return the final XOR value
        return ans;
    }
};
