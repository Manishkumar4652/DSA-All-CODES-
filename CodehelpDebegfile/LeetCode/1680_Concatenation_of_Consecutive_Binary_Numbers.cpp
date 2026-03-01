// 1680. Concatenation of Consecutive Binary Numbers
// Example 1:
// Input: n = 1
// Output: 1
// Explanation: "1" in binary corresponds to the decimal value 1. 
// Example 2
// Input: n = 3
// Output: 27
// Explanation: In binary, 1, 2, and 3 corresponds to "1", "10", and "11".
// After concatenating them, we have "11011", which corresponds to the decimal value 27.
// Example 3:
// Input: n = 12
// Output: 505379714
// Explanation: The concatenation results in "1101110010111011110001001101010111100".
// The decimal value of that is 118505380540.
// After modulo 109 + 7, the result is 505379714.
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n = 3;
    string ans = "";

    for(int i = 1; i <= n; i++) {

        int x = i;
        string binary = "";

        while(x > 0) {
            binary = char('0' + (x % 2)) + binary;
            x = x / 2;
        }

        ans.append(binary);
    }

int decimal = 0;
for(int i=0;i<ans.size();i++) {
    decimal = decimal * 2 + (ans[i] - '0');
}
cout<<decimal;

}