// 3345. Smallest Divisible Digit Product I
// Example 1:
// Input: n = 10, t = 2
// Output: 10
// Explanation:
// The digit product of 10 is 0, which is divisible by 2, making it the smallest number greater than or equal to 10 that satisfies the condition.
// Example 2:
// Input: n = 15, t = 3
// Output: 16
// Explanation:
// The digit product of 16 is 6, which is divisible by 3, making it the smallest number greater than or equal to 15 that satisfies the condition.
#include <iostream>
using namespace std;

int digitProduct(int num) {
    int product = 1;

    while (num > 0) {
        int digit = num % 10;
        product *= digit;
        num /= 10;
    }

    return product;
}

int main() {
    int n = 15;
    int t = 3;

    while (true) {
        int product = digitProduct(n);

        if (product % t == 0) {
            cout << n << endl;
            break;
        }

        n++;
    }

    return 0;
}