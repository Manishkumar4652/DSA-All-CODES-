// 28. Find the Index of the First Occurrence in a String
// Example 1:
// Input: haystack = "sadbutsad", 
// Output: 0
// Explanation: "sad" occurs at index 0 and 6.
// The first occurrence is at index 0, so we return 0.
// Example 2:
// Input: haystack = "leetcode", needle = "leeto"
// Output: -1
// Explanation: "leeto" did not occur in "leetcode", so we return -1.

#include<iostream>
#include<string>
using namespace std;
int main(){
    string haystack = "sadbutsad";
    string needle = "sad";
    int n = haystack.size();
    int m = needle.size();
    for (int i = 0; i <= n - m; i++) {
        int j = 0;
        while (j < m && haystack[i + j] == needle[j]) {
            j++;
        }
        if (j == m) {
            return i;
        }
    }
    return -1;
}