// 3010. Divide an Array Into Subarrays With Minimum Cost I
// Example 1:
// Input: nums = [1,2,3,12]
// Output: 6
// Explanation: The best possible way to form 3 subarrays is: [1], [2], and [3,12] at a total cost of 1 + 2 + 3 = 6.
// The other possible ways to form 3 subarrays are:
// - [1], [2,3], and [12] at a total cost of 1 + 2 + 12 = 15.
// - [1,2], [3], and [12] at a total cost of 1 + 3 + 12 = 16.
// Example 2:
// Input: nums = [5,4,3]
// Output: 12
// Explanation: The best possible way to form 3 subarrays is: [5], [4], and [3] at a total cost of 5 + 4 + 3 = 12.
// It can be shown that 12 is the minimum cost achievable.
// Example 3:
// Input: nums = [10,3,1,1]
// Output: 12
// Explanation: The best possible way to form 3 subarrays is: [10,3], [1], and [1] at a total cost of 10 + 1 + 1 = 12.
// It can be shown that 12 is the minimum cost achievable.
// #include<iostream>
// #include<vector>
// #include<climits>
// using namespace std;
// int main(){
//     vector<int> arr = {1,2,3,12};
//     int mini = INT_MAX;

//     for(int i=1;i<arr.size();i++){
//         for(int j=i+1;j<arr.size();j++){

//             int sum = arr[0]+arr[i]+arr[j];
//             mini = min(mini,sum);
//         }
//     }
//     cout<<mini;
// }
#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    vector<int> arr = {5,4,3};

    int mini1 = INT_MAX, mini2 = INT_MAX;
    int idx1 = -1;

    // find minimum for second subarray
    for(int i = 1; i < arr.size() - 1; i++){
        if(arr[i] < mini1){
            mini1 = arr[i];
            idx1 = i;
        }
    }

    // find minimum for third subarray (after idx1)
    for(int i = idx1 + 1; i < arr.size(); i++){
        mini2 = min(mini2, arr[i]);
    }

    cout << arr[0] + mini1 + mini2 << endl;
}
