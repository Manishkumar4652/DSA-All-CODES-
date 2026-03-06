// 1784. Check if Binary String Has at Most One Segment of Ones
// Example 1:
// Input: s = "1001"
// Output: false
// Explanation: The ones do not form a contiguous segment.
// Example 2:
// Input: s = "110"
// Output: true
#include<iostream>
using namespace std;
int main(){
    string s = "1001";
    int n = s.size();

    for(int i=0;i<n-1;i++){
        if(s[i] == '0' && s[i+1] == '1'){
            cout<<"false";
        }
    }
    cout<<"true";
}