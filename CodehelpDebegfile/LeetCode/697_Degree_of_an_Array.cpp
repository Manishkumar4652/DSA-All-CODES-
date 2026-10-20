// 697. Degree of an Array
// Given a non-empty array of non-negative integers nums, the degree of this array is defined as the maximum frequency of any one of its elements.
// Your task is to find the smallest possible length of a (contiguous) subarray of nums, that has the same degree as nums
// Example 1:
// Input: nums = [1,2,2,3,1]
// Output: 2
// Explanation: 
// The input array has a degree of 2 because both elements 1 and 2 appear twice.
// Of the subarrays that have the same degree:
// [1, 2, 2, 3, 1], [1, 2, 2, 3], [2, 2, 3, 1], [1, 2, 2], [2, 2, 3], [2, 2]
// The shortest length is 2. So return 2.
// Example 2:
// Input: nums = [1,2,2,3,1,4,2]
// Output: 6
// Explanation: 
// The degree is 3 because the element 2 is repeated 3 times.
// So [2,2,3,1,4,2] is the shortest subarray, therefore returning 6.
// Constraints:
// 1 <= nums.length <= 50,000
#include<iostream>
#include<vector>
#include <climits>
#include <unordered_map>
using namespace std;
int main(){
    vector<int> nums = {1,2,2,3,1,4,2};
    int n = nums.size();
        unordered_map<int, int> freq;
        unordered_map<int, int> first;
        unordered_map<int, int> last;

        int maxi = 0;

        for (int i = 0; i < n; i++) {
            int x = nums[i];

            freq[x]++;

            if (freq[x] == 1) {
                first[x] = i;
            }

            last[x] = i;

            maxi = max(maxi, freq[x]);
        }

        int ans = n;

        for (auto it : freq) {
            if (it.second == maxi) {
                int len = last[it.first] - first[it.first] + 1;
                ans = min(ans, len);
            }
        }

        cout<< ans;
}