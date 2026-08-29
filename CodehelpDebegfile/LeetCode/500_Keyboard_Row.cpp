// 500. Keyboard Row
// Example 1:
// Input: words = ["Hello","Alaska","Dad","Peace"]
// Output: ["Alaska","Dad"]
// Explanation:
// Both "a" and "A" are in the 2nd row of the American keyboard due to case insensitivity.
// Example 2:
// Input: words = ["omk"]
// Output: []
// Example 3:
// Input: words = ["adsdf","sfd"]
// Output: ["adsdf","sfd"]
#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;

int main() {
    vector<string> words = {"Hello", "Alaska", "Dad", "Peace"};
    vector<string> ans;

    for (string word : words) {
        int row = 0;

        for (char c : word) {
            char ch = tolower(c);

            if (string("qwertyuiop").find(ch) != string::npos) {
                if (row == 0 || row == 1) {
                    row = 1;
                }
                else {
                    row = -1;
                    break;
                }
            }
            else if (string("asdfghjkl").find(ch) != string::npos) {
                if (row == 0 || row == 2) {
                    row = 2;
                }
                else {
                    row = -1;
                    break;
                }
            }
            else if (string("zxcvbnm").find(ch) != string::npos) {
                if (row == 0 || row == 3) {
                    row = 3;
                }
                else {
                    row = -1;
                    break;
                }
            }
        }

        if (row != -1) {
            ans.push_back(word);
        }
    }

    for (string word : ans) {
        cout << word << " ";
    }

    return 0;
}