// 693. Binary Number with Alternating Bits
// Example 1:
// Input: n = 5
// Output: true
// Explanation: The binary representation of 5 is: 101
// Example 2:
// Input: n = 7
// Output: false
// Explanation: The binary representation of 7 is: 111.
// Example 3:
// Input: n = 11
// Output: false
// Explanation: The binary representation of 11 is: 1011.
#include<iostream>
using namespace std;
int main(){
    int n = 10;
    int preve = -1;
    while(n > 0){
        int curr = (n & 1);
        if(curr == preve){
            cout<<"false";
            return 0;
        }
        preve = curr;
        n >>= 1;
    }
    cout<<"true";
}