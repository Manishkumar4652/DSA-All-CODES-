// 2455. Average Value of Even Numbers That Are Divisible by Three
// Example 1:
// Input: nums = [1,3,6,10,12,15]
// Output: 9
// Explanation: 6 and 12 are even numbers that are divisible by 3. (6 + 12) / 2 = 9.
// Example 2:
// Input: nums = [1,2,4,7,10]
// Output: 0
// Explanation: There is no single number that satisfies the requirement, so return 0.

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr = {9,3,8,4,2,5,3,8,6,1};
    int sum = 0;
    int count = 0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]%2 == 0 && arr[i]%3 == 0){
            sum = (sum + arr[i]);
            count++;
        }
    }
    if(count == 0)  cout<<0;
    cout<<sum/count;
}
