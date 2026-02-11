// 1252. Cells with Odd Values in a Matrix
// Example 1:
// Input: m = 2, n = 3, indices = [[0,1],[1,1]]
// Output: 6
// Explanation: Initial matrix = [[0,0,0],[0,0,0]].
// After applying first increment it becomes [[1,2,1],[0,1,0]].
// The final matrix is [[1,3,1],[1,3,1]], which contains 6 odd numbers.
// Example 2:
// Input: m = 2, n = 2, indices = [[1,1],[0,0]]
// Output: 0
// Explanation: Final matrix = [[2,2],[2,2]]. There are no odd numbers in the final matrix.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> arr = {{0,1},{1,1}};
    int m = 2;
    int n = 3;
    vector<vector<int>> ans(m,vector<int> (n,0));
    for(int i=0;i<arr.size();i++){
        // row ke liye
        for(int j=0;j<n;j++){
            ans[arr[i][0]][j]++;
        }
        for(int j=0;j<m;j++){
            ans[j][arr[i][1]]++;
        }
    }
    int count = 0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(ans[i][j]%2 != 0){
                count++;
            }
        }
    }
    cout<<count;
    
}