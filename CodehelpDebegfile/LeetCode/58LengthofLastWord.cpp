#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "h";
    int n = s.length()-1;
    cout<<n;
    int count = 0;

    while(n>=0 && s[n] == ' '){
        n--;
    }
    while(n>=0 && s[n] != ' '){
        count++;
        n--;
    }
    cout<<count;
}