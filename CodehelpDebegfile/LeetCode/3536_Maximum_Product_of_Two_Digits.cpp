// 3536. Maximum Product of Two Digits
// Example 1:
// Input: n = 31
// Output: 3
// Explanation:
// The digits of n are [3, 1].
// The possible products of any two digits are: 3 * 1 = 3.
// The maximum product is 3.
// Example 2:
// Input: n = 22
// Output: 4
// Explanation:
// The digits of n are [2, 2].
// The possible products of any two digits are: 2 * 2 = 4.
// The maximum product is 4.
// Example 3:
// Input: n = 124
// Output: 8
// Explanation:
// The digits of n are [1, 2, 4].
// The possible products of any two digits are: 1 * 2 = 2, 1 * 4 = 4, 2 * 4 = 8.
// The maximum product is 8.
#include<iostream>
#include <algorithm>
using namespace std;
int main(){
    int n = 124;
    string digit = to_string(n);
    sort(digit.begin(), digit.end());
    int maxproduct = (digit[digit.size()-1] - '0') * (digit[digit.size()-2] - '0');
    cout<<maxproduct;
}