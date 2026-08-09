// 463. Island Perimeter
// Example 1:
// Input: grid = [[0,1,0,0],[1,1,1,0],[0,1,0,0],[1,1,0,0]]
// Output: 16
// Explanation: The perimeter is the 16 yellow stripes in the image above.
// Example 2:
// Input: grid = [[1]]
// Output: 4
// Example 3:
// Input: grid = [[1,0]]
// Output: 4
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> grid = {{0,1,0,0},{1,1,1,0},{0,1,0,0},{1,1,0,0}};

    int n = grid.size();
    int m = grid[0].size();

    int perimeter = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]==1){
                perimeter += 4;

                if(i>0 && grid[i-1][j]==1) perimeter--;
                if(i<n-1 && grid[i+1][j]==1) perimeter--;
                if(j>0 && grid[i][j-1]==1) perimeter--;
                if(j<m-1 && grid[i][j+1]==1) perimeter--;

                }
        }
    }
    cout<<perimeter<<" ";
}