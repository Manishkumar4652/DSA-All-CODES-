// 1524. Number of Sub-arrays With Odd Sum
// Given an array of integers arr, return the number of subarrays with an odd sum.
// Since the answer can be very large, return it modulo 109 + 7.
// Example 1:
// Input: arr = [1,3,5]
// Output: 4
// Explanation: All subarrays are [[1],[1,3],[1,3,5],[3],[3,5],[5]]
// All sub-arrays sum are [1,4,9,3,8,5].
// Odd sums are [1,9,3,5] so the answer is 4.
// Example 2:
// Input: arr = [2,4,6]
// Output: 0
// Explanation: All subarrays are [[2],[2,4],[2,4,6],[4],[4,6],[6]]
// All sub-arrays sum are [2,6,12,4,10,6].
// All sub-arrays have even sum and the answer is 0.
// Example 3:
// Input: arr = [1,2,3,4,5,6,7]
// Output: 16
// Constraints:
// 1 <= arr.length <= 105
// 1 <= arr[i] <= 100
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        const int MOD = 1e9 + 7;
        int even_count = 1; // Empty prefix sum (0) is even
        int odd_count = 0;
        int current_sum = 0;
        int total_subarrays = 0;
        
        for (int num : arr) {
            current_sum += num;
            if (current_sum % 2 != 0) {
                total_subarrays = (total_subarrays + even_count) % MOD;
                odd_count++;
            } else {
                total_subarrays = (total_subarrays + odd_count) % MOD;
                even_count++;
            }
        }
        
        return total_subarrays;
    }
};

int main() {
    Solution sol;
    
    // Single Test Case (Example 1)
    vector<int> arr = {1, 3, 5};
    
    int result = sol.numOfSubarrays(arr);
    cout << "Output: " << result << endl;
    
    return 0;
}
