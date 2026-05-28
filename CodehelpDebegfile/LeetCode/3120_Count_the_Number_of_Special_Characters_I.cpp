// 3120. Count the Number of Special Characters I
// Example 1:
// Input: word = "aaAbcBC"
// Output: 3
// Explanation:
// The special characters in word are 'a', 'b', and 'c'.
// Example 2:
// Input: word = "abc"
// Output: 0
// Explanation:
// No character in word appears in uppercase.
// Example 3:
// Input: word = "abBCab"
// Output: 1
// Explanation:
// The only special character in word is 'b'.
#include <iostream>
#include <string>
#include <unordered_set>
#include <cctype>

using namespace std;

int main(){
    string word = "aaAbcBC";
    unordered_set<char> lowerChars;
    unordered_set<char> upperChars;

    for (char c : word) {
        if (islower(static_cast<unsigned char>(c))) {
            lowerChars.insert(c);
        } else if (isupper(static_cast<unsigned char>(c))) {
            upperChars.insert(c);
        }
    }

    int count = 0;
    for (char c : lowerChars) {
        if (upperChars.count(static_cast<char>(toupper(static_cast<unsigned char>(c))))) {
            count++;
        }
    }

    cout << count;
    return 0;
}