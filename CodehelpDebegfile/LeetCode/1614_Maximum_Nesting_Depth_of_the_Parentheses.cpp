// 1614. Maximum Nesting Depth of the Parentheses
// Given a valid parentheses string s, return the nesting depth of s. The nesting depth is the maximum number of nested parentheses.
// Example 1:
// Input: s = "(1+(2*3)+((8)/4))+1"
// Output: 3
// Explanation:
// Digit 8 is inside of 3 nested parentheses in the string.
// Example 2:
// Input: s = "(1)+((2))+(((3)))"
// Output: 3
// Explanation:
// Digit 3 is inside of 3 nested parentheses in the string.
// Example 3:
// Input: s = "()(())((()()))"
// Output: 3
// Constraints:
// 1 <= s.length <= 100
#include <iostream>
#include <climits>
using namespace std;
int main(){
    string s = "(1)+((2))+(((3)))";
    int current_depth = 0;
    int max_depth = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(') {
            current_depth++;
            max_depth = max(max_depth, current_depth);
        } 
        else if (s[i] == ')') {
            current_depth--;
        }
    }

    cout<< max_depth;        

}