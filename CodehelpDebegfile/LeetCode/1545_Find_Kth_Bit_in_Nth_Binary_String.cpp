// 1545. Find Kth Bit in Nth Binary String
// Example 1:
// Input: n = 3, k = 1
// Output: "0"
// Explanation: S3 is "0111001".
// The 1st bit is "0".
// Example 2:
// Input: n = 4, k = 11
// Output: "1"
// Explanation: S4 is "011100110110001".
// The 11th bit is "1".
#include<iostream>
using namespace std;

char findKthBit(int n, int k) {
    
    // Base case
    if(n == 1) return '0';
    
    int length = (1 << n) - 1;        // 2^n - 1
    int mid = (length / 2) + 1;       // Middle position
    
    if(k == mid) 
        return '1';
    
    else if(k < mid) 
        return findKthBit(n - 1, k);
    
    else {
        // Mirror position
        char ch = findKthBit(n - 1, length - k + 1);
        
        // Invert the bit
        return (ch == '0') ? '1' : '0';
    }
}

int main() {
    int n = 3;
    int k = 1;

    cout << findKthBit(n, k);
    
    return 0;
}