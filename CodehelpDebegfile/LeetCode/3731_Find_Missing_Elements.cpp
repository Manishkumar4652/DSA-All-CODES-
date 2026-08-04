// 3731. Find Missing Elements
// Example 1:
// Input: nums = [1,4,2,5]
// Output: [3]
// Explanation:
// The smallest integer is 1 and the largest is 5, so the full range should be [1,2,3,4,5]. Among these, only 3 is missing.
// Example 2:
// Input: nums = [7,8,6,9]
// Output: []
// Explanation:
// The smallest integer is 6 and the largest is 9, so the full range is [6,7,8,9]. All integers are already present, so no integer is missing.
// Example 3:
// Input: nums = [5,1]
// Output: [2,3,4]
// Explanation:
// The smallest integer is 1 and the largest is 5, so the full range should be [1,2,3,4,5]. The missing integers are 2, 3, and 4.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> nums = {5,1};
    int n = nums.size();

    sort(nums.begin(), nums.end());

    int start = nums[0];
    int end = nums[n-1];

    vector<int> ans;
    int index = 0;
    for(int i=start;i<=end;i++){
        if(nums[index] != i){
            ans.push_back(i);
        }
        else{
            index++;
        }
    }
    for(auto &p : ans){
        cout << p << " ";
    }
}