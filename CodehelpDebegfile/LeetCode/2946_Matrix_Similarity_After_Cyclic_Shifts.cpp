// 2946. Matrix Similarity After Cyclic Shifts
// The following proccess happens k times:
// Even-indexed rows (0, 2, 4, ...) are cyclically shifted to the left.

// Odd-indexed rows (1, 3, 5, ...) are cyclically shifted to the right.

// Return true if the final modified matrix after k steps is identical to the original matrix, and false otherwise.

// Example 1:
// Input: mat = [[1,2,3],[4,5,6],[7,8,9]], k = 4
// Output: false
// Explanation:
// In each step left shift is applied to rows 0 and 2 (even indices), and right shift to row 1 (odd index).

// Example 2:
// Input: mat = [[1,2,1,2],[5,5,5,5],[6,3,6,3]], k = 2
// Output: true
// Explanation:

// Example 3:
// Input: mat = [[2,2],[2,2]], k = 3
// Output: true
// Explanation:
// As all the values are equal in the matrix, even after performing cyclic shifts the matrix will remain the same.
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>> arr = {{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>> result = arr;

    int row = arr.size();
    int col = arr[0].size();
    int k = 4;

    k = k % col;

    for(int step=0;step<k;step++){

        for(int i=0;i<row;i++){

            // Even index shifted to the left
            if(i%2 == 0){
                int first = arr[i][0];
                for(int j=1;j<col;j++){
                    arr[i][j-1] = arr[i][j];
                }
                arr[i][col-1] = first;
            }
            // Odd index shifted to the right
            else{
                int last = arr[i][col-1];
                for(int j=col-2;j>=0;j--){
                    arr[i][j+1] = arr[i][j];
                }
                arr[i][0] = last;
            }
        }
    }

    if(arr == result) cout<<"True";
    else cout<<"False";
}


//Optimal solution 

class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        int n = mat.size();
        int m = mat[0].size();
        for(int i = 0; i < n;i++){
            for(int j = 0; j < m; j++){
                if(mat[i][(j+k)%m] != mat[i][j]){
                    return false;
                }
            }
        }
        return true;
    }
};