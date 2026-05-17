// 342. Power of Four
// Given an integer n, return true if it is a power of four. Otherwise, return false.
// An integer n is a power of four, if there exists an integer x such that n == 4x.
// Example 1:
// Input: n = 16
// Output: true
// Example 2:
// Input: n = 5
// Output: false
// Example 3:
// Input: n = 1
// Output: true
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n = 16;
    if(n%2!=0) cout<<"False";
    if(n%4!=0) cout<<"False";
    cout<<"True";
}

class Solution {
public:
    bool isPowerOfFour(int n) {
    if(n == 1) return true;
    if(n%2!=0) return false;
    if(n%4!=0) return false;
    return true;        
    }
};