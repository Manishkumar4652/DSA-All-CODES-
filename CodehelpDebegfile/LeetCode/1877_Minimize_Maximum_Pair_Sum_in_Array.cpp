// 1877. Minimize Maximum Pair Sum in Array
// Example 1:
// Input: nums = [3,5,2,3]
// Output: 7
// Explanation: The elements can be paired up into pairs (3,3) and (5,2).
// The maximum pair sum is max(3+3, 5+2) = max(6, 7) = 7.
// Example 2:
// Input: nums = [3,5,4,2,4,6]
// Output: 8
// Explanation: The elements can be paired up into pairs (3,5), (4,4), and (6,2).
// The maximum pair sum is max(3+5, 4+4, 6+2) = max(8, 8, 8) = 8.

#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr = {3,5,2,3};
    sort(arr.begin(),arr.end());
   // int maxi = INT_MIN;
   int maxi = -1;
    int i=0;
    int j=arr.size()-1;
    while(i<j){
        int sum = arr[i]+arr[j];
       // maxi = max(maxi , sum);
        if(sum > maxi){
            maxi = sum;
        }
        i++;
        j--;
    }
    cout<<maxi;
}