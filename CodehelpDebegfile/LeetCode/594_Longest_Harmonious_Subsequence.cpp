// 594. Longest Harmonious Subsequence
// We define a harmonious array as an array where the difference between its maximum value and its minimum value is exactly 1.
// Given an integer array nums, return the length of its longest harmonious subsequence among all its possible subsequences.
// Example 1:
// Input: nums = [1,3,2,2,5,2,3,7]
// Output: 5
// Explanation:
// The longest harmonious subsequence is [3,2,2,2,3].
// Example 2:
// Input: nums = [1,2,3,4]
// Output: 2
// Explanation:
// The longest harmonious subsequences are [1,2], [2,3], and [3,4], all of which have a length of 2.
// Example 3:
// Input: nums = [1,1,1,1]
// Output: 0
// Explanation:
// No harmonic subsequence exists.
// Constraints:
// 1 <= nums.length <= 2 * 104
// -109 <= nums[i] <= 109
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> nums = {1,3,2,2,5,2,3,7};
    int n = nums.size();

    sort(nums.begin(), nums.end());

    int ans = 0;

    for(int i = 0; i < n; i++){
        int count1 = 0;
        int count2 = 0;

        for(int j = 0; j < n; j++){
            if(nums[j] == nums[i]){
                count1++;
            }

            if(nums[j] == nums[i] + 1){
                count2++;
            }
        }

        if(count2 > 0){
            ans = max(ans, count1 + count2);
        }
    }

    cout << ans;

}