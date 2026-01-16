// 507. Perfect Number
// Example 1:
// Input: num = 28
// Output: true
// Explanation: 28 = 1 + 2 + 4 + 7 + 14
// 1, 2, 4, 7, and 14 are all divisors of 28.

// Example 2:
// Input: num = 7
// Output: false
#include<iostream>
using namespace std;
int main(){
    int n = 28;
    int sum = 0;
    for(int i=2;i<=(n/2)+1;i=i+2){
        if(n%i == 0){
            sum = sum+i;
        }
    }
    cout<<sum+1<<endl;
    if(sum+1 == n){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}