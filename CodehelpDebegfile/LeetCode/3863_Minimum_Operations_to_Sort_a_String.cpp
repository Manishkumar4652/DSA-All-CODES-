// 3863. Minimum Operations to Sort a String
// You are given a string s consisting of lowercase English letters.
// In one operation, you can select any substring of s that is not the entire string and sort it in non-descending alphabetical order.
// Return the minimum number of operations required to make s sorted in non-descending order. If it is not possible, return -1.
// Example 1:
// Input: s = "dog"
// Output: 1
// Explanation:​​​​​​​
// Sort substring "og" to "go".
// Now, s = "dgo", which is sorted in ascending order. Thus, the answer is 1.
// Example 2:
// Input: s = "card"
// Output: 2
// Explanation:
// Sort substring "car" to "acr", so s = "acrd".
// Sort substring "rd" to "dr", making s = "acdr", which is sorted in ascending order. Thus, the answer is 2.
// Example 3:
// Input: s = "gf"
// Output: -1
// Explanation:
// It is impossible to sort s under the given constraints. Thus, the answer is -1.
// Constraints:
// 1 <= s.length <= 105
// s consists of only lowercase English letters.
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int minOperations(string s) {
    int n = s.size();
    
    // Check if already sorted
    bool sorted = true;
    for (int i = 1; i < n; i++) {
        if (s[i] < s[i - 1]) {
            sorted = false;
            break;
        }
    }
    if (sorted) return 0;
    
    // If length is 2 and not sorted, it's impossible
    if (n == 2) return -1;
    
    char mn = s[0], mx = s[0];
    for (int i = 1; i < n; i++) {
        mn = min(mn, s[i]);
        mx = max(mx, s[i]);
    }
    
    // 1 operation if min is at the start or max is at the end
    if (s[0] == mn || s[n - 1] == mx) {
        return 1;
    }
    
    // 2 operations if min or max is in the middle
    for (int i = 1; i < n - 1; i++) {
        if (s[i] == mn || s[i] == mx) {
            return 2;
        }
    }
    
    // Otherwise 3 operations
    return 3;
}

int main() {
    string s = "card";
    cout << minOperations(s) << endl;
    return 0;
}
