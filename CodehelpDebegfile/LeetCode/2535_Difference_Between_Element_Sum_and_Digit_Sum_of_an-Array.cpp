// 2535. Difference Between Element Sum and Digit Sum of an Array
// Example 1:
// Input: nums = [1,15,6,3]
// Output: 9
// Explanation: 
// The element sum1 of nums is 1 + 15 + 6 + 3 = 25.
// The digit sum1 of nums is 1 + 1 + 5 + 6 + 3 = 16.
// The absolute difference between the element sum1 and digit sum1 is |25 - 16| = 9.

// Example 2:
// Input: nums = [1,2,3,4]
// Output: 0
// Explanation:
// The element sum1 of nums is 1 + 2 + 3 + 4 = 10.
// The digit sum1 of nums is 1 + 2 + 3 + 4 = 10.
// The absolute difference between the element sum1 and digit sum1 is |10 - 10| = 0.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr = {1,15,6,3};
    int n = arr.size();
    int sum1 = 0;
    int sum2 = 0;
    for(int i=0;i<n;i++){
        sum1 = sum1 + arr[i];
    }
  //  cout<<sum1;

    int digit = 0;
    for(int j=0;j<n;j++){
        while(arr[j] > 0){
        digit = arr[j]%10;
        sum2 = sum2 + digit;
        arr[j] = arr[j]/10;
        }
    }
  //  cout<<sum2;
    cout<<abs(sum1 - sum2);
}