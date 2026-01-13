// 3726. Remove Zeros in Decimal Representation
// Example 1:
// Input: n = 1020030
// Output: 123
// Explanation:
// After removing all zeros from 1020030, we get 123.
// Example 2:
// Input: n = 1
// Output: 1
// Explanation:
// 1 has no zero in its decimal representation. Therefore, the answer is 1.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    long long n = 1;
    int digit = 0;
    int resum = 0;
    while(n > 0){
        digit = n%10;
        if(digit > 0){
            resum = (resum * 10) + digit;
        }
        n = n/10;
    }
    //reverse
    int ans = 0;
    int digits = 0;
    while(resum > 0){
        digits = resum%10;
        ans = ans * 10 + digits;
        resum = resum/10;
    }
    cout<<ans;
}