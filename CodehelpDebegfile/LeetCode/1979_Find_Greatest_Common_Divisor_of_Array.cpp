// 1979. Find Greatest Common Divisor of Array
// Example 1:
// Input: nums = [2,5,6,9,10]
// Output: 2
// Explanation:
// The smallest number in nums is 2.
// The largest number in nums is 10.
// The greatest common divisor of 2 and 10 is 2.
// Example 2:
// Input: nums = [7,5,6,8,3]
// Output: 1
// Explanation:
// The smallest number in nums is 3.
// The largest number in nums is 8.
// The greatest common divisor of 3 and 8 is 1.
// Example 3:
// Input: nums = [3,3]
// Output: 3
// Explanation:
// The smallest number in nums is 3.
// The largest number in nums is 3.
// The greatest common divisor of 3 and 3 is 3.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
    int gcd(int a, int b){
        while (b != 0){
            int rem = a % b;
            a = b;
            b = rem;
        }
        return a;
    }
int main(){
    vector<int> nums = {2, 5, 6, 9, 10};

    int mini = *min_element(nums.begin(), nums.end());
    int maxi = *max_element(nums.begin(), nums.end());

    cout<<gcd(mini, maxi);
}