// 3411. Maximum Subarray With Equal Products
// You are given an array of positive integers nums.
// An array arr is called product equivalent if prod(arr) == lcm(arr) * gcd(arr), where:
// prod(arr) is the product of all elements of arr.
// gcd(arr) is the GCD of all elements of arr.
// lcm(arr) is the LCM of all elements of arr.
// Return the length of the longest product equivalent subarray of nums.
// Example 1:
// Input: nums = [1,2,1,2,1,1,1]
// Output: 5
// Explanation: 
// The longest product equivalent subarray is [1, 2, 1, 1, 1], where prod([1, 2, 1, 1, 1]) = 2, gcd([1, 2, 1, 1, 1]) = 1, and lcm([1, 2, 1, 1, 1]) = 2.
// Example 2:
// Input: nums = [2,3,4,5,6]
// Output: 3
// Explanation: 
// The longest product equivalent subarray is [3, 4, 5].
// Example 3:
// Input: nums = [1,2,3,1,4,5,1]
// Output: 5
// Constraints:
// 2 <= nums.length <= 100
// 1 <= nums[i] <= 10
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
    long long getGcd(long long a, long long b) {
        while (b != 0) {
            long long temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    long long getLcm(long long a, long long b) {
        return (a / getGcd(a, b)) * b;
    }

public:
    int maxLength(vector<int>& nums) {
        int n = nums.size();
        long long totalLcm = 1;
        long long maxVal = 1;
        
        for (int x : nums) {
            totalLcm = getLcm(totalLcm, x);
            maxVal = max(maxVal, (long long)x);
        }
        
        long long maxBound = totalLcm * maxVal;
        int ans = 1;

        for (int i = 0; i < n; ++i) {
            long long prod = 1;
            long long g = 0;
            long long l = 1;
            
            for (int j = i; j < n; ++j) {
                long long x = nums[j];
                
                // Overflow se bachne ke liye pehle check karein
                if (prod > maxBound / x) {
                    break;
                }
                prod *= x;
                
                g = (g == 0) ? x : getGcd(g, x);
                l = getLcm(l, x);

                if (prod == l * g) {
                    ans = max(ans, j - i + 1);
                }
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;
    
    // Single test case
    vector<int> nums = {1, 2, 1, 2, 1, 1, 1};
    
    cout << "Output: " << sol.maxLength(nums) << endl;
    
    return 0;
}