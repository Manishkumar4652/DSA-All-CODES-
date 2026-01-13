// Example 1:
// Input: s = "1112"
// Output: "1112"

// Example 2:
// Input: s = "221"
// Output: "22"

// Example 3:
// Input: s = "1"
// Output: ""
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "1112";
    int n = s.size()-1;

    while(n >= 0){
        if((s[n]-'0')%2 == 0){
            cout<<s;
            return 0;
        }
        s = s.substr(0 , n);
        n = s.size()-1;
    }
    cout<<"No";
    return 0;
}