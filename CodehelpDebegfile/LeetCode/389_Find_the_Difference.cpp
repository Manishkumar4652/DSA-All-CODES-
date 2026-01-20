// 389. Find the Difference
// Example 1:
// Input: s = "abcd", t = "abcde"
// Output: "e"
// Explanation: 'e' is the letter that was added.

// Example 2:
// Input: s = "", t = "y"
// Output: "y

//method 1
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "";
    string t = "abcde";

    if(s.empty()) cout<<t;

    for(int i=0;i<s.size();i++){
        if(t.find(s[i]) != string::npos){
            t.erase(t.find(s[i]),1);
        }
    }
    cout<<t;
}

//method 2
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "";
    string t = "t";
     
    char ans = 0;

    for(char ch : s) ans ^= ch;
    for(char ch : t) ans ^= ch;

    cout<<ans;
}