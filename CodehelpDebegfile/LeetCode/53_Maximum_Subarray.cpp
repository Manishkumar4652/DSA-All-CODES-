// 53. Maximum Subarray
// Example 1:
// Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
// Output: 6
// Explanation: The subarray [4,-1,2,1] has the largest sum 6.

// Example 2:
// Input: nums = [1]
// Output: 1
// Explanation: The subarray [1] has the largest sum 1.

// Example 3:
// Input: nums = [5,4,-1,7,8]
// Output: 23
// Explanation: The subarray [5,4,-1,7,8] has the largest sum 23.

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};
//     int maxsum = 0;
//     for(int i=0;i<arr.size();i++){
//         int currntsum = 0;
//         for(int j=i;j<arr.size();j++){
//             currntsum = currntsum+arr[j];
//             maxsum = max(currntsum,maxsum);
//         }
//     }
//         cout<<maxsum;
// }


//Kadancs algorithm
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};
    int maxsum = INT_MIN;
    int currntsum = 0;
    for(int i=0;i<arr.size();i++){
            currntsum = currntsum+arr[i];
            maxsum = max(currntsum,maxsum);

            if(currntsum < 0) currntsum = 0;        
    }
        cout<<maxsum;
}