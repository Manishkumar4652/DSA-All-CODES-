// Example 1:
// Input: triangle = [[2],[3,4],[6,5,7],[4,1,8,3]]
// Output: 11
// Explanation: The triangle looks like:
//    2
//   3 4
//  6 5 7
// 4 1 8 3
// The minimum path sum from top to bottom is 2 + 3 + 5 + 1 = 11 (underlined above).

#include<iostream>
#include<vector>
using namespace std;
int solve(vector<vector<int>>&arr , int row , int col){
    //base case
    if(row == arr.size()-1){
        return arr[row][col];
    }
    // traverse left side
    int left = arr[row][col]+solve(arr , row+1 , col);

    // traverse right side
    int right = arr[row][col]+solve(arr , row+1 , col+1);

    return min(left , right);
}
int main(){
    vector<vector<int>> arr = {{2},{3,4},{6,5,7},{4,1,8,3}};
    int row = 0;
    int col = 0;
    int ans = solve(arr , row , col);
    cout<<ans;
}