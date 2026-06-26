// 504. Base 7
// Given an integer num, return a string of its base 7 representation.
// Example 1:
// Input: num = 100
// Output: "202"
// Example 2:
// Input: num = -7
// Output: "-10"
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n = -7;
    string ans = "";
    bool flag = false;

    if(n < 0) {flag = true; n = -n;}
    while(n > 0){
        int remander = n % 7;
        ans = to_string(remander) + ans;
        n = n / 7;
    }
    if(ans == "") ans = "0";
    if(flag) ans = "-" + ans;
    cout << ans << endl;
}