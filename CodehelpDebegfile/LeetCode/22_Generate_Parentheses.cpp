// 22. Generate Parentheses
// Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.
// Example 1:
// Input: n = 3
// Output: ["((()))","(()())","(())()","()(())","()()()"]
// Example 2:
// Input: n = 1
// Output: ["()"]
// Constraints:
// 1 <= n <= 8
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void backtrack(vector<string>& result, string current_string, int open_count, int close_count, int n) {
    if (current_string.length() == 2 * n) {
        result.push_back(current_string);
        return;
    }

    if (open_count < n) {
        backtrack(result, current_string + "(", open_count + 1, close_count, n);
    }

    if (close_count < open_count) {
        backtrack(result, current_string + ")", open_count, close_count + 1, n);
    }
}

vector<string> generateParenthesis(int n) {
    vector<string> result;
    backtrack(result, "", 0, 0, n);
    return result;
}

int main() {
    int n = 3;
    
    vector<string> ans = generateParenthesis(n);
    
    for (const string& s : ans) {
        cout << s << " ";
    }
    cout << endl;
    
    return 0;
}
