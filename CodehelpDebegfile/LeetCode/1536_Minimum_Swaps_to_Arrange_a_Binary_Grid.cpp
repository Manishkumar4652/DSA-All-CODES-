// 1536. Minimum Swaps to Arrange a Binary Grid
// Given an n x n binary grid, in one step you can choose two adjacent rows of the grid and swap them.
// A grid is said to be valid if all the cells above the main diagonal are zeros.
// Return the minimum number of steps needed to make the grid valid, or -1 if the grid cannot be valid.
// The main diagonal of a grid is the diagonal that starts at cell (1, 1) and ends at cell (n, n).
// Example 1
// Input: grid = [[0,0,1],[1,1,0],[1,0,0]]
// Output: 3
// Example 2:
// Input: grid = [[0,1,1,0],[0,1,1,0],[0,1,1,0],[0,1,1,0]]
// Output: -1
// Explanation: All rows are similar, swaps have no effect on the grid.
// Example 3:
// Input: grid = [[1,0,0],[1,1,0],[1,1,1]]
// Output: 0
#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<vector<int>> arr = {{0,0,1},
                               {1,1,0},
                               {1,0,0}};

    int n = arr.size();
    vector<int> zeros;

    // trailing zeros count
    for(int i = 0; i < n; i++){
        int count = 0;
        for(int j = n-1; j >= 0; j--){
            if(arr[i][j] == 0) count++;
            else break;
        }
        zeros.push_back(count);
    }

    int steps = 0;

    for(int i = 0; i < n; i++){

        int needed = n - i - 1;

        int j = i;

        // suitable row dhundo
        while(j < n && zeros[j] < needed) j++;

        if(j == n){
            cout << -1;
            return 0;
        }

        // us row ko upar lao (adjacent swaps)
        while(j > i){
            swap(zeros[j], zeros[j-1]);
            steps++;
            j--;
        }
    }

    cout << steps;
}