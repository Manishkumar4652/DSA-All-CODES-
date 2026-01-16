// 1295. Find Numbers with Even Number of Digits
// Example 1:
// Input: nums = [12,345,2,6,7896]
// Output: 2
// Explanation: 
// 12 contains 2 digits (even number of digits). 
// 345 contains 3 digits (odd number of digits). 
// 2 contains 1 digit (odd number of digits). 
// 6 contains 1 digit (odd number of digits). 
// 7896 contains 4 digits (even number of digits). 
// Therefore only 12 and 7896 contain an even number of digits.

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr = {12,345,2,6,7896};
    int digit = 0;
    int ans = 0;
    for(int i=0;i<arr.size();i++){
        int count = 0;
        while(arr[i] > 0){
            digit = arr[i]%10;
            count++;
            arr[i] = arr[i]/10;
        }
            if(!(count&1)){
                ans++;
            }
    }
        cout<<ans;
}