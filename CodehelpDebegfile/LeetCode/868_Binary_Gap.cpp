// 868. Binary Gap
// Example 1:
// Input: n = 22
// Output: 2
// Explanation: 22 in binary is "10110".
// The first adjacent pair of 1's is "10110" with a distance of 2.
// The second adjacent pair of 1's is "10110" with a distance of 1.
// The answer is the largest of these two distances, which is 2.
// Note that "10110" is not a valid pair since there is a 1 separating the two 1's underlined.
// Example 2:
// Input: n = 8
// Output: 0
// Explanation: 8 in binary is "1000".
// There are not any adjacent pairs of 1's in the binary representation of 8, so we return 0.
// Example 3:
// Input: n = 5
// Output: 2
// Explanation: 5 in binary is "101".
#include<iostream>
using namespace std;
int main(){
    int n = 5;
    int curr = -1;
    int prev = -1;
    int length = 0;
    int maxlenth = 0;
    while(n > 0){
        curr = (n & 1);

        if(curr == 1){
            if(prev == 1){                 // second 1 found
                maxlenth = max(maxlenth, length + 1);
            }
            prev = 1;
            length = 0;                    // reset gap counter
        }
        
        else{                               // curr == 0
            if(prev == 1)                  // counting only after first 1
                length++;
        }

        n >>= 1;
    }

    cout << maxlenth;
}