// 1390. Four Divisors
// Input: nums = []
// Output: 32
// Explanation: 
// 21 has 4 divisors: 1, 3, 7, 21
// 4 has 3 divisors: 1, 2, 4
// 7 has 2 divisors: 1, 7
// The answer is the sum of divisors of 21 only.
#include<iostream>
#include<vector>
using namespace std;
int main(){
   // vector<int> arr = {21,4,7};
    vector<int> arr = {21,21};
    int sum = 0;

    for(int i=0;i<arr.size();i++){
        int n = arr[i];
        int count = 0;

        for(int j=2;j<=n-1;j++){
            if(n%j == 0){
                count++;
            }
        }
            if(count == 2){
                for(int k=1;k<=n;k++){
                    if(n%k == 0){
                        sum = sum + k;
                    }
                }
            }
        }
        cout<<sum;
}