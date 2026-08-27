// 2904. Shortest and Lexicographically Smallest Beautiful String
// Example 1:
// Input: s = "100011001", k = 3
// Output: "11001"
// Explanation: There are 7 beautiful substrings in this example:
// 1. The substring "100011001".
// 2. The substring "100011001".
// 3. The substring "100011001".
// 4. The substring "100011001".
// 5. The substring "100011001".
// 6. The substring "100011001".
// 7. The substring "100011001".
// The length of the shortest beautiful substring is 5.
// The lexicographically smallest beautiful substring with length 5 is the substring "11001".
// Example 2:
// Input: s = "1011", k = 2
// Output: "11"
// Explanation: There are 3 beautiful substrings in this example:
// 1. The substring "1011".
// 2. The substring "1011".
// 3. The substring "1011".
// The length of the shortest beautiful substring is 2.
// The lexicographically smallest beautiful substring with length 2 is the substring "11".
// Example 3:
// Input: s = "000", k = 1
// Output: ""
// Explanation: There are no beautiful substrings in this example.
#include <iostream>
#include <climits>
using namespace std;

int main() {
    string s = "100011001";
    int k = 3;
    int n = s.size();

    int iind = -1;
    int jind = -1;
    int mini = INT_MAX;
    string ans = "";

    for (int i = 0; i < n; i++) {
        int count = 0;  // Har new i ke liye reset

        for (int j = i; j < n; j++) {  // j = i se start
            if (s[j] == '1') {
                count++;
            }

            if (count == k) {
                int len = j - i + 1;

                string curr = s.substr(i, len);

                // Shortest ya same length me lexicographically smallest
                if (len < mini || (len == mini && curr < ans)) {
                    mini = len;
                    ans = curr;
                    iind = i;
                    jind = j;
                }

                break; // i se aage k ones mil gaye
            }
        }
    }

    cout << ans;

    return 0;
}