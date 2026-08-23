// 3622. Check Divisibility by Digit Sum and Product
// Example 1:
// Input: n = 99
// Output: true
// Explanation:
// Since 99 is divisible by the sum (9 + 9 = 18) plus product (9 * 9 = 81) of its digits (total 99), the output is true.
// Example 2:
// Input: n = 23
// Output: false
// Explanation:
// Since 23 is not divisible by the sum (2 + 3 = 5) plus product (2 * 3 = 6) of its digits (total 11), the output is false.
#include<iostream>
using namespace std;
int main(){
    int n = 99;
    int original = n;
    int sum = 0;
    int product = 1;
    
    while(n > 0){
        int digit = n % 10;
        sum += digit;
        product *= digit;
        n /= 10;
    }
    int value = sum + product;

    if(original % value == 0) cout<<"true";
    else cout<<"false";
}