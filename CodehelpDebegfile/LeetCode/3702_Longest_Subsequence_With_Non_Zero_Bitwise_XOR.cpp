// 3702. Longest Subsequence With Non-Zero Bitwise XOR
// Example 1:
// Input: nums = [1,2,3]
// Output: 2
// Explanation:
// One longest subsequence is [2, 3]. The bitwise XOR is computed as 2 XOR 3 = 1, which is non-zero.
// Example 2:
// Input: nums = [2,3,4]
// Output: 3
// Explanation:
// The longest subsequence is [2, 3, 4]. The bitwise XOR is computed as 2 XOR 3 XOR 4 = 5, which is non-zero.
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> nums = {1, 2, 3};
    int n = nums.size();
    int xorr = 0;
    bool hasNonZero = false;

    for (int num : nums){
        xorr ^= num;

        if (num != 0){
            hasNonZero = true;
        }
    }

    // Saare elements 0 hain
    if (!hasNonZero){
        cout<< 0;
    }

    // Complete array ka XOR non-zero hai
    if (xorr != 0){
        cout<< n;
    }

    // Complete array ka XOR 0 hai
    cout<< n - 1;
}