// 3498. Reverse Degree of a String
// For each character, multiply its position in the reversed alphabet ('a' = 26, 'b' = 25, ..., 'z' = 1) with its position in the string (1-indexed).
// Sum these products for all characters in the string.
// Return the reverse degree of s.

// Example 1:
// Input: s = "abc"
// Output: 148
#include<iostream>
using namespace std;
int main(){
    string s = "zaza";
    int sum  = 0;
    for(int i=0;i<s.length();i++){
        sum = sum + (123-int(s[i])) * (i+1);
    }
        cout<<sum;

}