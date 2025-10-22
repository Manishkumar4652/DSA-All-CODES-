// Example 1:

// Input: s = "()"

// Output: true

// Example 2:

// Input: s = "()[]{}"

// Output: true

// Example 3:

// Input: s = "(]"

// Output: false

// Example 4:

// Input: s = "([])"

// Output: true

// Example 5:

// Input: s = "([)]"

// Output: false


#include<iostream>
using namespace std;
bool isValid(string s) {

    while((s.find("()") != string::npos) || 
    (s.find("{}") != string::npos) || 
    (s.find("[]") != string::npos)){

    if(s.find("()") != string::npos){
        s.erase(s.find("()"),2);
    }
    if(s.find("{}") != string::npos){
        s.erase(s.find("{}"),2);
    }
    if(s.find("[]") != string::npos){
        s.erase(s.find("[]"),2);
    }
}
    return s.empty();
}
int main(){

    string s = "(]";
    cout<<(isValid(s) ? "true ": "false");
    return 0;
}