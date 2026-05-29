// 3300. Minimum Element After Replacement With Digit Sum
// Example 1:
// Input: nums = [10,12,13,14]
// Output: 1
// Explanation:
// nums becomes [1, 3, 4, 5] after all replacements, with minimum element 1.
// Example 2:
// Input: nums = [1,2,3,4]
// Output: 1
// Explanation:
// nums becomes [1, 2, 3, 4] after all replacements, with minimum element 1.
// Example 3:
// Input: nums = [999,19,199]
// Output: 10
// Explanation:
// nums becomes [27, 10, 19] after all replacements, with minimum element 10.
#include<iostream>
#include<vector>
#include<algorithm>
#include <climits>
using namespace std;
int main(){
    vector<int> nums = {10,12,13,14};
    int minx = INT_MAX;
    
    for(int i=0;i<nums.size();i++){
        int sum = 0;
        int n = nums[i];
        while(n > 0){
            int digit = n%10;
            sum += digit;
            n /= 10;
        }
        if(sum < minx){
            minx = sum;
        }
    }
    cout<<minx;
}