// Q2. Smallest Integer Divisible by K
// Example 1:
// Input: k = 1
// Output: 1
// Explanation: The smallest answer is n = 1, which has length 1.
// Example 2:
// Input: k = 2
// Output: -1
// Explanation: There is no such positive integer n divisible by 2.
// Example 3:
// Input: k = 3
// Output: 3
// Explanation: The smallest answer is n = 111, which has length 3.
#include<iostream>
using namespace std;
int main(){
    int k = 7;
    long long remainder = 1 % k;
    
    for(int i=1; i<=40; i++){
        if(remainder == 0){
            cout << i << endl;
            return 0;
        }
        remainder = (remainder * 10 + 1) % k;
    }
    cout << -1 << endl;
    return 0;
}