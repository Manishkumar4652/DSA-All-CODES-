// 263. Ugly Number
// Example 1:
// Input: n = 6
// Output: true
// Explanation: 6 = 2 × 3
// Example 2:
// Input: n = 1
// Output: true
// Explanation: 1 has no prime factors.
// Example 3:
// Input: n = 14
// Output: false
// Explanation: 14 is not ugly since it includes the prime factor 7.
#include<iostream>
using namespace std;
bool solve(int n){

    if(n <= 0)  return false;

    while(n%2 == 0) n=n/2;     // 14 % 2 == 0 → n = 7
    while(n%3 == 0) n=n/3;     // 7 % 3 != 0
    while(n%5 == 0) n=n/5;     // 7 % 5 != 0
        return n == 1;         // n == 1 ? ❌
         
}
int main(){
    int n = 14;
    bool ans = solve(n);
    if(ans) cout<<"true";
    else cout<<"false";
}