// Input:matrix = [["1","0","1","0","0"],
//                 ["1","0","1","1","1"],
//                 ["1","1","1","1","1"],
//                 ["1","0","0","1","0"]]
// Output: 4
#include<iostream>
#include<vector>
using namespace std;
int solve(vector<vector<int>>&arr , int i , int j , int row , int col , int&maxi){
    //base case
    if(i >= row || j >= col)  return 0;

    // Explore all dirction
    //right side
    int right = solve(arr,i,j+1,row,col,maxi);
    //digonal side
    int digonal = solve(arr,i+1,j+1,row,col,maxi);
    //down side
    int down = solve(arr,i+1,j,row,col,maxi);

    //Check
    if(arr[i][j] == 1){
        int ans = 1 + min(right , min(digonal,down));

        maxi = max(maxi , ans);
        return ans;
    }
    else{
        return 0;
    }
}
int main(){
    vector<vector<int>> arr = {
        {1,0,1,0,0},
        {1,0,1,1,1},
        {1,1,1,1,1},
        {1,0,0,1,0}
    };

    int i = 0;
    int j = 0;
    int row = arr.size();
    int col = arr[0].size();
    int maxi = 0;
    int ans = solve(arr , i , j , row , col , maxi);
    cout<<maxi*maxi;
}



class Solution {
public:
    // Helper recursive function to calculate maximum square size
    int solve(vector<vector<char>>& matrix, int i, int j, int row, int col, int &maxi) {
        
        // Base case: if index goes out of matrix
        if (i >= row || j >= col)
            return 0;

        // Explore all three directions
        int right = solve(matrix, i, j + 1, row, col, maxi);      // Right
        int diagonal = solve(matrix, i + 1, j + 1, row, col, maxi); // Diagonal
        int down = solve(matrix, i + 1, j, row, col, maxi);       // Down

        // If current cell is '1', calculate square size
        if (matrix[i][j] == '1') {
            int ans = 1 + min(right, min(diagonal, down));

            // Update maximum square size found
            maxi = max(maxi, ans);
            return ans;
        }

        // If cell is '0', no square possible
        return 0;
    }

    int maximalSquare(vector<vector<char>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();

        int maxi = 0;

        // Start recursion from top-left cell
        solve(matrix, 0, 0, row, col, maxi);

        // Return area of the largest square
        return maxi * maxi;
    }
};
