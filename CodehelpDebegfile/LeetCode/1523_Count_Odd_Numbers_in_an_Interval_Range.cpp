// 1523. Count Odd Numbers in an Interval Range
// Example 1:
// Input: low = 3, high = 7
// Output: 3
// Explanation: The odd numbers between 3 and 7 are [3,5,7].
// Example 2:
// Input: low = 8, high = 10
// Output: 1
// Explanation: The odd numbers between 8 and 10 are [9].
#include<iostream>
using namespace std;
int main(){
    int low = 3;
    int high = 7;
    int count = 0;

    for(int i=low;i<=high;i++){
        if(i&1){
            count++;
        }
    }
    cout<<count;
}