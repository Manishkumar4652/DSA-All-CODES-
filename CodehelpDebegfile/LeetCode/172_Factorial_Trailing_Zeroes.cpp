// 172. Factorial Trailing Zeroes
// Example 1:
// Input: n = 3
// Output: 0
// Explanation: 3! = 6, no trailing zero.
// Example 2:
// Input: n = 5
// Output: 1
// Explanation: 5! = 120, one trailing zero.
// Example 3:
// Input: n = 0
// Output: 0

// For Leetcode

// #include<iostream>
// using namespace std;
// int main(){
//     int n = 5;
//     int count = 0;

//     while(n > 0){
//         n /= 5;
//         count += n;
//     }
//     cout<<count;
// }


#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // vector to store digits of factorial
    vector<int> fact;
    fact.push_back(1);  // 0! and 1! = 1

    for (int i = 2; i <= n; i++) {
        int carry = 0;

        for (int j = 0; j < fact.size(); j++) {
            int prod = fact[j] * i + carry;
            fact[j] = prod % 10;
            carry = prod / 10;
        }

        while (carry) {
            fact.push_back(carry % 10);
            carry /= 10;
        }
    }

    cout << n << "! = ";
    for (int i = fact.size() - 1; i >= 0; i--) {
        cout << fact[i];
    }

    return 0;
}
