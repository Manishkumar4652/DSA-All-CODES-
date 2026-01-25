// 1984. Minimum Difference Between Highest and Lowest of K Scores
// Example 1:
// Input: nums = [90], k = 1
// Output: 0
// Explanation: There is one way to pick score(s) of one student:
// - [90]. The difference between the highest and lowest score is 90 - 90 = 0.
// The minimum possible difference is 0.

// Example 2:
// Input: nums = [9,4,1,7], k = 2
// Output: 2
// Explanation: There are six ways to pick score(s) of two students:
// - [9,4,1,7]. The difference between the highest and lowest score is 9 - 4 = 5.
// - [9,4,1,7]. The difference between the highest and lowest score is 9 - 1 = 8.
// - [9,4,1,7]. The difference between the highest and lowest score is 9 - 7 = 2.
// - [9,4,1,7]. The difference between the highest and lowest score is 4 - 1 = 3.
// - [9,4,1,7]. The difference between the highest and lowest score is 7 - 4 = 3.
// - [9,4,1,7]. The difference between the highest and lowest score is 7 - 1 = 6.
// The minimum possible difference is 2.

#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    vector<int> arr = {9,4,1,7};
    sort(arr.begin(),arr.end());
    int k = 2;
    int mini = INT_MAX;
    if(k == 1){
        cout<<0;
    }
    for(int i=0;i+k-1<arr.size();i++){
        int j = i+k-1;
        int deff = arr[j]-arr[i];
        mini = min(mini,deff);
    }
    cout<<mini;
}