// Q2. Find the Pivot Integer
// Example 1:
// Input: n = 8
// Output: 6
// Explanation: 6 is the pivot integer since: 1 + 2 + 3 + 4 + 5 + 6 = 6 + 7 + 8 = 21.
// Example 2:
// Input: n = 1
// Output: 1
// Explanation: 1 is the pivot integer since: 1 = 1.
// Example 3:
// Input: n = 4
// Output: -1
// Explanation: It can be proved that no such integer exist.
#include<iostream>
using namespace std;
int main(){
    int n = 8;
    int totalSum = (n * (n + 1)) / 2;
    int leftSum = 0;
    int pivot = -1;

    for(int x = 1; x <= n; x++) {
        leftSum += x;
        int rightSum = totalSum - leftSum + x;

        if(leftSum == rightSum) {
            pivot = x;
            break;
        }
    }

    cout << pivot;
    return 0;
}
