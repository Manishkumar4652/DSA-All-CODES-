// Input: mat = [[1,2,3],[4,5,6],[7,8,9]], target = 13
// Output: 0
// Explanation: One possible choice is to:
// - Choose 1 from the first row.
// - Choose 5 from the second row.
// - Choose 7 from the third row.
// The sum of the chosen elements is 13, which equals the target, so the absolute difference is 0.

#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int solve(vector<vector<int>> arr , int target , int sum , int row){
    // base case
    if(row == arr.size()){
        return abs(target-sum);
    }

    // minimum element give each column
    int ans = INT_MAX;

    // Loop for each col
    for(int col=0;col<arr[row].size();col++){

        int reAns = solve(arr , target , sum+arr[row][col] , row+1);
        // minimum path
        ans = min(ans , reAns);
    }
        return ans;

}
int main(){
    vector<vector<int>> arr = {{1,2,3},
                               {4,5,6},
                               {7,8,9}};
    int target = 13;
    int sum = 0;
    int row = 0;
    int an = solve(arr , target , sum , row);
    cout<<an;
}