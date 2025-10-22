#include<iostream>
#include<string>
using namespace std;
int checkpalindrom(string s , int i , int j){
    int count = 0;
    while(i>=0 && j<s.length() && s[i] == s[j]){
        count++;
        i--;
        j++;
    }
    return count;
}
int main(){
    string s = "aaa";

    int count = 0;
    for(int center=0;center<s.length();center++){
        //Check Odd or Even case
        
        int oddpalindromcount = checkpalindrom(s , center, center);

        int evenpalindromcount = checkpalindrom(s ,center , center+1);

        count += oddpalindromcount + evenpalindromcount;

    }
    cout<<count;
}