// 3212. Count Submatrices With Equal Frequency of X and Y
// Example 1:
// Input: grid = [["X","Y","."],["Y",".","."]]
// Output: 3
// Explanation:
// Example 2:
// Input: grid = [["X","X"],["X","Y"]]
// Output: 0
// Explanation:
// No submatrix has an equal frequency of 'X' and 'Y'.
// Example 3:
// Input: grid = [[".","."],[".","."]]
// Output: 0
// Explanation:
// No submatrix has at least one 'X'.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> arr = {{'X','Y','.'},{'Y','.','.'}};

    int count = 0;

    int row = arr.size();
    int col = arr[0].size();

    vector<vector<int>> countsumX(row,vector<int>(col,0));
    vector<vector<int>> countsumY(row,vector<int>(col,0));

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){

            countsumX[i][j] = (arr[i][j] == 'X');
            countsumY[i][j] = (arr[i][j] == 'Y');

            if(i-1 >= 0) countsumX[i][j] += countsumX[i-1][j]; //col ke pichale vala add
            if(i-1 >= 0) countsumY[i][j] += countsumY[i-1][j]; //col ke pichale vala add
            
            if(j-1 >= 0) countsumX[i][j] += countsumX[i][j-1]; // row ke pechale vala add
            if(j-1 >= 0) countsumY[i][j] += countsumY[i][j-1]; // row ke pechale vala add

            if(i-1>=0 && j-1>=0) countsumX[i][j] -= countsumX[i-1][j-1]; //Digonal vala element subtract
            if(i-1>=0 && j-1>=0) countsumY[i][j] -= countsumY[i-1][j-1]; //Digonal vala element subtract

            if(countsumX[i][j] == countsumY[i][j]) count++;
        
        }
    }
 
        cout<<count;
    }