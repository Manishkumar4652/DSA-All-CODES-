// 3348. Smallest Divisible Digit Product II
// Example 1:
// Input: num = "1234", t = 256
// Output: "1488"
// Explanation:
// The smallest zero-free number that is greater than 1234 and has the product of its digits divisible by 256 is 1488, with the product of its digits equal to 256.
// Example 2:
// Input: num = "12355", t = 50
// Output: "12355"
// Explanation:
// 12355 is already zero-free and has the product of its digits divisible by 50, with the product of its digits equal to 150.
// Example 3:
// Input: num = "11111", t = 26
// Output: "-1"
// Explanation:
// No number greater than 11111 has the product of its digits divisible by 26.
#include<iostream>
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

int main(){    
    string num = "1234";
    int t = 256;

    long long x = stoll(num);

        while (true) {
        int product = digitProduct(x);

        if (product == t) {
            cout << x << endl;
            break;
        }

        x++;
    }

    return 0;

}