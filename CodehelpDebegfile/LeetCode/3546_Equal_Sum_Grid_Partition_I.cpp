// 3546. Equal Sum Grid Partition I
// Example 1:
// Input: grid = [[1,4],[2,3]]
// Output: true
// Explanation:
// A horizontal cut between row 0 and row 1 results in two non-empty sections, each with a sum of 5. Thus, the answer is true.

// Example 2:
// Input: grid = [[1,3],[2,4]]
// Output: false
// Explanation:
// No horizontal or vertical cut results in two non-empty sections with equal sums. Thus, the answer is false.

 
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> arr = {{1,4},{2,3}};

    int row = arr.size();
    int col = arr[0].size();
    int sum1 = 0;
    int sum2 = 0;
    int sum3 = 0;
    int sum4 = 0;
    //for rows
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(i < row/2){
                sum1 += arr[i][j];
            }
            else{
                sum2 += arr[i][j];
            }
        }
    }
    cout<<sum1<<" "<< sum2;
    if(sum2 == sum1) cout<<"true";

    // for cols
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(i < col/2){
                sum3 += arr[i][j];
            }
            else{
                sum4 += arr[i][j];
            }
        }
    }
    cout<<sum3<<" "<< sum4;
    if(sum3 == sum4) cout<<"true";
}


//optimal apporoch
// class Solution {
// public:
//     typedef long long ll;
//     bool canPartitionGrid(vector<vector<int>>& grid) {
//         int m = grid.size();
//         int n = grid[0].size();

//         vector<ll> rowSum(m, 0);
//         vector<ll> colSum(n, 0);

//         ll total = 0;
//         for(int i = 0; i < m; i++) {
//             for(int j = 0; j < n; j++) {
//                 total += grid[i][j];
//                 //row = i
//                 rowSum[i] += grid[i][j];
//                 //col = j
//                 colSum[j] += grid[i][j];
//             }
//         }

//         if(total % 2 != 0) {
//             return false;
//         }

//         //Horizontal split
//         ll upper = 0;
//         for(int i = 0; i < m-1; i++) {
//             upper += rowSum[i];
//             if(upper == total - upper) {
//                 return true;
//             }
//         }

//         //Vertical split
//         ll left = 0;
//         for(int j = 0; j < n-1; j++) {
//             left += colSum[j];
//             if(left == total - left) {
//                 return true;
//             }
//         }

//         return false;

//     }
// };
