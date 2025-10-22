#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin,s);  // Input lene ke liye ysa karna padta hai
    cout<<s<<endl;
    s.push_back('j');
    cout<<s<<endl;
    s.pop_back();
    cout<<s<<endl;
    cout<<s.length();
}