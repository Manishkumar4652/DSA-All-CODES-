// 3827. Count Monobit Integers
// Example 1:
// Input: n = 1
// Output: 2
// Explanation:
// The integers in the range [0, 1] have binary representations "0" and "1".
// Each representation consists of identical bits. Thus, the answer is 2.
// Example 2:
// Input: n = 4
// Output: 3
// Explanation:
// The integers in the range [0, 4] include binaries "0", "1", "10", "11", and "100".
// Only 0, 1 and 3 satisfy the Monobit condition. Thus, the answer is 3.
#include<iostream>
using namespace std;
int main(){
    int n = 4;
    int count = 1;

    int k = 1;
    while((k<<1)-1 <= n){
        count++;
        k++;
    }
    cout<<count;
}

// leetcode format
class Solution {
public:
    int countMonobitIntegers(int n) {
        int count = 1; // for 0
        
        int k = 1;
        while ((1 << k) - 1 <= n) {
            count++;
            k++;
        }
        
        return count;
    }
};
