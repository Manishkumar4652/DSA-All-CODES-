// 856. Score of Parentheses
// Given a balanced parentheses string s, return the score of the string.
// The score of a balanced parentheses string is based on the following rule:
// "()" has score 1.
// AB has score A + B, where A and B are balanced parentheses strings.
// (A) has score 2 * A, where A is a balanced parentheses string.
// Example 1:
// Input: s = "()"
// Output: 1
// Example 2:
// Input: s = "(())"
// Output: 2
// Example 3:
// Input: s = "()()"
// Output: 2
// Constraints:
// 2 <= s.length <= 50
// s consists of only '(' and ')'.
// s is a balanced parentheses string.
#include <iostream>
#include <string>
#include <stack>
#include <algorithm>

class Solution {
public:
    int scoreOfParentheses(std::string s) {
        std::stack<int> st;
        st.push(0); // Base score for the outer level

        for (char c : s) {
            if (c == '(') {
                st.push(0); // Entering a new nested level
            } else {
                int innerScore = st.top();
                st.pop();
                int currentScore = (innerScore == 0) ? 1 : 2 * innerScore;
                st.top() += currentScore; // Add to the parent level score
            }
        }

        return st.top();
    }
};

int main() {
    Solution sol;
    std::string s = "(())";
    std::cout << "Score: " << sol.scoreOfParentheses(s) << std::endl;
    return 0;
}
