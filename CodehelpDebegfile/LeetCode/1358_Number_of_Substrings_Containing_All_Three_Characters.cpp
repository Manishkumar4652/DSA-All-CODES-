// 1358. Number of Substrings Containing All Three Characters
// Example 1:
// Input: s = "abcabc"
// Output: 10
// Explanation: The substrings containing at least one occurrence of the characters a, b and c are "abc", "abca", "abcab", "abcabc", "bca", "bcab", "bcabc", "cab", "cabc" and "abc" (again). 
// Example 2:
// Input: s = "aaacb"
// Output: 3
// Explanation: The substrings containing at least one occurrence of the characters a, b and c are "aaacb", "aacb" and "acb". 
// Example 3:
// Input: s = "abc"
// Output: 1

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "abcabc";
    int n = s.length();

    // all substrings of length >= 3
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int len = 3; i + len <= n; len++) {
            string word =  s.substr(i, len);
           // cout<<word<<" ";
    if (word.find('a') != string::npos &&
    word.find('b') != string::npos &&
    word.find('c') != string::npos){
        count++;
    }
        }
    }
    cout<<count;

    return 0;
}