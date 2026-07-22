// 219. Contains Duplicate II
// Example 1:
// Input: nums = [1,2,3,1], k = 3
// Output: true
// Example 2:
// Input: nums = [1,0,1,1], k = 1
// Output: true
// Example 3:
// Input: nums = [1,2,3,1,2,3], k = 2
// Output: false
#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;
int main(){
    vector<int> nums = {1,2,3,1};
    int k = 3;
    int  n = nums.size();

    unordered_map<int, int> mp;

    for (int i = 0; i < nums.size(); i++) {

        if (mp.find(nums[i]) != mp.end()) {

            if (i - mp[nums[i]] <= k) {
                cout<< "true";
            }
        }

        mp[nums[i]] = i;
    }

    cout<< "false";
}