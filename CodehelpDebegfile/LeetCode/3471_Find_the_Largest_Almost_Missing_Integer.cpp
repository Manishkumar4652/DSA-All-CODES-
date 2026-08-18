// 3471. Find the Largest Almost Missing Integer
// Example 1:
// Input: nums = [3,9,2,1,7], k = 3
// Output: 7
// Explanation:
// 1 appears in 2 subarrays of size 3: [9, 2, 1] and [2, 1, 7].
// 2 appears in 3 subarrays of size 3: [3, 9, 2], [9, 2, 1], [2, 1, 7].
// 3 appears in 1 subarray of size 3: [3, 9, 2].
// 7 appears in 1 subarray of size 3: [2, 1, 7].
// 9 appears in 2 subarrays of size 3: [3, 9, 2], and [9, 2, 1].
// We return 7 since it is the largest integer that appears in exactly one subarray of size k.
// Example 2:
// Input: nums = [3,9,7,2,1,7], k = 4
// Output: 3
// Explanation:
// 1 appears in 2 subarrays of size 4: [9, 7, 2, 1], [7, 2, 1, 7].
// 2 appears in 3 subarrays of size 4: [3, 9, 7, 2], [9, 7, 2, 1], [7, 2, 1, 7].
// 3 appears in 1 subarray of size 4: [3, 9, 7, 2].
// 7 appears in 3 subarrays of size 4: [3, 9, 7, 2], [9, 7, 2, 1], [7, 2, 1, 7].
// 9 appears in 2 subarrays of size 4: [3, 9, 7, 2], [9, 7, 2, 1].
// We return 3 since it is the largest and only integer that appears in exactly one subarray of size k.
// Example 3:
// Input: nums = [0,0], k = 1
// Output: -1
// Explanation:
// There is no integer that appears in only one subarray of size 1.
#include <iostream>
#include <vector>
#include <unordered_map>
#include <climits>

using namespace std;

int main() {
    vector<int> nums = {3, 9, 2, 1, 7};
    int k = 3;

    unordered_map<int, int> mp;
    int n = nums.size();

    for (int i = 0; i <= n - k; i++) {
        for (int j = i; j < i + k; j++) {
            mp[nums[j]]++;
        }
    }
    int maxi = INT_MIN;
    bool flag = false;
    for (auto &p : mp) {
        if(p.second == 1){
            flag = true;
            maxi = max(maxi, p.first);
        }
    }
    
    if(!flag){
        cout<<-1;
    }
    else{
        cout<<maxi;
    }

    return 0;
}