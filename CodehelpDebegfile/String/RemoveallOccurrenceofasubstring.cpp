#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "ababcab";
    string part = "ab";
    while(s.find(part) != string::npos){  // iska matlab string me part mila hai
        s.erase(s.find(part) , part.length());  // npos means -1
    }
        cout<<s;
}