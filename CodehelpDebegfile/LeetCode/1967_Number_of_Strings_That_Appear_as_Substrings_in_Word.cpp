// 1967. Number of Strings That Appear as Substrings in Word
// Example 1:
// Input: patterns = ["a","abc","bc","d"], word = "abc"
// Output: 3
// Explanation:
// - "a" appears as a substring in "abc".
// - "abc" appears as a substring in "abc".
// - "bc" appears as a substring in "abc".
// - "d" does not appear as a substring in "abc".
// 3 of the strings in patterns appear as a substring in word.
// Example 2:
// Input: patterns = ["a","b","c"], word = "aaaaabbbbb"
// Output: 2
// Explanation:
// - "a" appears as a substring in "aaaaabbbbb".
// - "b" appears as a substring in "aaaaabbbbb".
// - "c" does not appear as a substring in "aaaaabbbbb".
// 2 of the strings in patterns appear as a substring in word.
// Example 3:
// Input: patterns = ["a","a","a"], word = "ab"
// Output: 3
// Explanation: Each of the patterns appears as a substring in word "ab".

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<string> patterns = {"a","abc","bc","d"};
    string word = "abc";
    int n = patterns.size();
    int count = 0;

    for(int i=0;i<n;i++){
        if (word.find(patterns[i]) != string::npos) {
            count++;
        } 
    }
    cout<<count;
}