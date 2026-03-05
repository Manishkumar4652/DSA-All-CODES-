// 1582. Special Positions in a Binary Matrix
// Example 1:
// Input: mat = [[1,0,0],[0,0,1],[1,0,0]]
// Output: 1
// Explanation: (1, 2) is a special position because mat[1][2] == 1 and all other elements in row 1 and column 2 are 0.
// Example 2:
// Input: mat = [[1,0,0],[0,1,0],[0,0,1]]
// Output: 3
// Explanation: (0, 0), (1, 1) and (2, 2) are special positions.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> arr = {{1,0,0},
                               {0,1,0},
                               {0,0,1}};
    int row = arr.size();
    int col = arr[0].size();

    vector<int> sumofrow(row,0);
    vector<int> sumofcol(col,0);

    for(int i=0;i<row;i++){
        int rowsum = 0;
        for(int j=0;j<col;j++){
            rowsum += arr[i][j];
        }
        sumofrow[i] += rowsum;
    }

    for(int i=0;i<col;i++){
        int colsum = 0;
        for(int j=0;j<row;j++){
            colsum += arr[j][i];
        }
        sumofcol[i] += colsum;
    }
    int count = 0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j] == 1 && sumofrow[i] == 1 && sumofcol[j] == 1){
                count++;
            }
        }
    }
    cout<<count;
}