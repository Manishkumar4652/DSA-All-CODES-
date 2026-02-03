// 29. Divide Two Integers
// Example 1:
// Input: dividend = 10, divisor = 3
// Output: 3
// Explanation: 10/3 = 3.33333.. which is truncated to 3.
// Example 2:
// Input: dividend = 7, divisor = -3
// Output: -2
// Explanation: 7/-3 = -2.33333.. which is truncated to -2.
#include<iostream>
using namespace std;
int main(){
    int dividend = 7;
    int divisor = -3;
    bool sign = false;
    int ans = 0;


    if(divisor < 0){
        sign = true;
    }

    while(dividend > abs(divisor)){
        dividend -= abs(divisor);
        ans++;
    }
    if(sign){
        ans *= -1;
    }
    cout<<ans;  


}


// For Leetcode

class Solution {
public:
    int divide(int dividend, int divisor) {
        bool sign = false;
        int ans = 0;

        if (divisor < 0) {
            sign = true;
        }

        while (dividend > abs(divisor)) {
            dividend -= abs(divisor);
            ans++;
        }
        if (sign) {
            ans *= -1;
        }
        return ans;
    }
};