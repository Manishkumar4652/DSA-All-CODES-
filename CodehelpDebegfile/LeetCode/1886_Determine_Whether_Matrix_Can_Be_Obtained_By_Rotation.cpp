// 1886. Determine Whether Matrix Can Be Obtained By Rotation
// Example 1:
// Input: mat = [[0,1],[1,0]], target = [[1,0],[0,1]]
// Output: true
// Explanation: We can rotate mat 90 degrees clockwise to make mat equal target.
// Example 2:
// Input: mat = [[0,1],[1,1]], target = [[1,0],[0,1]]
// Output: false
// Explanation: It is impossible to make mat equal to target by rotating mat.
// Example 3:
// Input: mat = [[0,0,0],[0,1,0],[1,1,1]], target = [[1,1,1],[0,1,0],[0,0,0]]
// Output: true
// Explanation: We can rotate mat 90 degrees clockwise two times to make mat equal target.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<vector<int>> arr = {{0,0,0},
                               {0,1,0},
                               {1,1,1}};
    vector<vector<int>> target = {{1,1,1},{0,1,0},{0,0,0}};
    int row = arr.size();
    int col = arr[0].size();

    for(int k=0;k<row+1;k++){

        // check
        if(arr == target){
            cout<<"True";
            return 0;
        }

    // rotate 90° clockwise
        // transpose
        for(int i=0;i<row;i++){
            for(int j=i;j<col;j++){
                swap(arr[i][j], arr[j][i]);
            }
        }

        // reverse rows
        for(int i=0;i<row;i++){
            reverse(arr[i].begin(), arr[i].end());
        }
    }

    cout<<"False";
}