// 405. Convert a Number to Hexadecimal
// Example 1:
// Input: num = 26
// Output: "1a"
// Example 2:
// Input: num = -1
// Output: "ffffffff"
#include<iostream>
using namespace std;
int main(){
    int num = 26;
        // special case
        if(num == 0) {
            cout<< "0";
        }
        string hexChars = "0123456789abcdef";
        string ans = "";
        unsigned int n = num;
        while(n > 0) {
            int rem = n % 16;
            ans = hexChars[rem] + ans;
            n = n / 16;
        }
        cout<< ans;
    }