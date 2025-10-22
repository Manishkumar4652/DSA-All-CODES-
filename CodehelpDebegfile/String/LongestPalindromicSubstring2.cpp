
// Given a string s, return the longest palindromic substring in s.

// Example 1:
// Input: s = "babad"
// Output: "bab"
// Explanation: "aba" is also a valid answer.
// Example 2:
// Input: s = "cbbd"
// Output: "bb"

// 5. Longest Palindromic Substring
// #include<iostream>
// #include<string>
// using namespace std;
// bool ispalindrom(string &s , int start ,int end){
//     while(start < end){
//         if(s[start] != s[end]){
//             return false;
//         }
//         start++;
//         end--;
//     }
//         return true;
// }
// int main(){
//     string s = "cbbd";
//     string ans = "";
//     for(int i=0;i<s.length();i++){
//         for(int j=i;j<s.length();j++){
//             if(ispalindrom(s , i , j)){
//                 string sub = s.substr(i , j-i+1);
//                 if(sub.length() > ans.length()){
//                     ans = sub;
//                 }
//             }
//         }
//     }
//     cout<<ans;
//     return 0;
// }

#include<iostream>
#include<string>
using namespace std;
string checkpalindrom(string s , int i , int j){
    while(i>=0 && j<s.length() && s[i] == s[j]){
        i--;
        j++;
    }
    return s.substr(i+1 , j-i-1);
}
int main(){
    string s = "cbbd";
    string ans = "";

    for(int center=0;center<s.length();center++){
        //Check Odd or Even case
        
        string oddpalindromcount = checkpalindrom(s , center, center);

        string evenpalindromcount = checkpalindrom(s ,center , center+1);

        if(oddpalindromcount.size() > ans.size()){
            ans = oddpalindromcount;
        }
        if(evenpalindromcount.size() > ans.size()){
            ans = evenpalindromcount;
        }
    }
    cout<<ans;
}
