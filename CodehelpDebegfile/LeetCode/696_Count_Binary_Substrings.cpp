// 696. Count Binary Substrings
// Example 1:
// Input: s = "00110011"
// Output: 6
// Explanation: There are 6 substrings that have equal number of consecutive 1's and 0's: "0011", "01", "1100", "10", "0011", and "01".
// Notice that some of these substrings repeat and are counted the number of times they occur.
// Also, "00110011" is not a valid substring because all the 0's (and 1's) are not grouped together.
// Example 2:
// Input: s = "10101"
// Output: 4
// Explanation: There are 4 substrings: "10", "01", "10", "01" that have equal number of consecutive 1's and 0's.
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s = "00110011";
    int curr = 1;
    int prev = 0;
    int ans = 0;

    for(int i=1;i<s.size();i++){

        if(s[i] == s[i-1]){
            curr++;
        }
        
        else{
            ans = ans + min(prev,curr);
            prev = curr;
            curr = 1;
        }
    }
    ans = ans + min(prev,curr);
    cout<<ans;
}
