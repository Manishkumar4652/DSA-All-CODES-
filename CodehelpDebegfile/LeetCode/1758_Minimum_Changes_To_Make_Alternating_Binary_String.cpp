// 1758. Minimum Changes To Make Alternating Binary String
// Example 1:
// Input: s = "0100"
// Output: 1
// Explanation: If you change the last character to '1', s will be "0101", which is alternating.
// Example 2:
// Input: s = "10"
// Output: 0
// Explanation: s is already alternating.
// Example 3:
// Input: s = "1111"
// Output: 2
// Explanation: You need two operations to reach "0101" or "1010".
#include<iostream>
using namespace std;

int main(){
    string s = "1111";

    int n = s.size();
    int change1 = 0;
    int change2 = 0;

    for(int i=0;i<n;i++){

        // pattern 0101
        if(i % 2 == 0){
            if(s[i] != '0') change1++;
        }
        else{
            if(s[i] != '1') change1++;
        }
        // pattern 1010
        if(i % 2 == 0){
            if(s[i] != '1') change2++;
        }
        else{
            if(s[i] != '0') change2++;
        }
    }
    cout << min(change1, change2);
}