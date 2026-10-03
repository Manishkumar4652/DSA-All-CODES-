// 32. Longest Valid Parentheses
// Given a string containing just the characters '(' and ')', return the length of the longest valid (well-formed) parentheses substring.
// Example 1:
// Input: s = "(()"
// Output: 2
// Explanation: The longest valid parentheses substring is "()".
// Example 2:
// Input: s = ")()())"
// Output: 4
// Explanation: The longest valid parentheses substring is "()()".
// Example 3:
// Input: s = ""
// Output: 0
// Constraints:
// 0 <= s.length <= 3 * 104
// s[i] is '(', or ')'.
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int longestValidParentheses(string s) {
    int n = s.length();
    int open  = 0;
    int close = 0;
    int result = 0;

    for(int i = 0; i < n; i++) {
        if(s[i] == '(') open++;
        else close++;

        if(open == close) {
            result = max(result, open+close);
        } else if(close > open) {
            open  = 0;
            close = 0;
        }
    }

    open  = 0;
    close = 0;
    for(int i = n-1; i >= 0; i--) {
        if(s[i] == '(') open++;
        else close++;

        if(open == close) {
            result = max(result, open+close);
        } else if(open > close) {
            open  = 0;
            close = 0;
        }
    }

    return result;
}

int main() {
    string s = ")()())";
    cout << "Longest Valid Parentheses Length: " << longestValidParentheses(s) << endl;
    return 0;
}
