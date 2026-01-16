// 1464. Maximum Product of Two Elements in an Array
// Example 1:
// Input: nums = [3,4,5,2]
// Output: 12 
// Explanation: If you choose the indices i=1 and j=2 (indexed from 0), you will get the maximum value, that is, (nums[1]-1)*(nums[2]-1) = (4-1)*(5-1) = 3*4 = 12. 
// Example 2:
// Input: nums = [1,5,4,5]
// Output: 16
// Explanation: Choosing the indices i=1 and j=3 (indexed from 0), you will get the maximum value of (5-1)*(5-1) = 16.

// #include<iostream>
// #include<vector>
// #include<climits>
// using namespace std;
// int main(){
//     vector<int> arr = {3,4,5,2};
//     int sum = 0;
//     int maxi = INT_MIN;
//     for(int i=0;i<arr.size();i++){
//         for(int j=i+1;j<arr.size();j++){
//             int value = (arr[i]-1)*(arr[j]-1);
//             maxi = max(maxi , value);
//         }
//     }
//         cout<<maxi;
// }


//Method 2 Best Approch
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr = {3,4,5,2};
    sort(arr.begin(),arr.end());
    //last bigger element
    int n = arr.size()-1;
    int ans = (arr[n]-1)*(arr[n-1]-1);
    cout<<ans;
}