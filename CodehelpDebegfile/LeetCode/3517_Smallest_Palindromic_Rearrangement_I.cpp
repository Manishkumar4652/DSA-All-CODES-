// 3517. Smallest Palindromic Rearrangement I
// Example 1:
// Input: s = "z"
// Output: "z"
// Explanation:
// A string of only one character is already the lexicographically smallest palindrome.
// Example 2:
// Input: s = "babab"
// Output: "abbba"
// Explanation:
// Rearranging "babab" → "abbba" gives the smallest lexicographic palindrome.
// Example 3:
// Input: s = "daccad"
// Output: "acddca"
// Explanation:
// Rearranging "daccad" → "acddca" gives the smallest lexicographic palindrome.

#include<iostream>
#include<unordered_map>
#include <algorithm>
using namespace std;
int main(){
    string s = "babab";
    int n = s.size();

    if(n == 1){
        cout<<s;
    }

    if(n%2 == 0){
        string part = s.substr(0, n/2);
        sort(part.begin(), part.end());
        
        string firsts = part;

        sort(part.rbegin(), part.rend());

        cout<<firsts+part;
    }

        else if(n%2 != 0){
        char schar = s[n/2];
        string part = s.substr(0, n/2);
        sort(part.begin(), part.end());
        
        string firsts = part;

        sort(part.rbegin(), part.rend());

        cout<<firsts+string(1, schar)+part;
    }
}