// 2033. Minimum Operations to Make a Uni-Value Grid
// Input: grid = [[2,4],[6,8]], x = 2
// Output: 4
// Explanation: We can make every element equal to 4 by doing the following: 
// - Add x to 2 once.
// - Subtract x from 6 once.
// - Subtract x from 8 twice.
// A total of 4 operations were used.
// Example 2:
// Input: grid = [[1,5],[2,3]], x = 1
// Output: 5
// Explanation: We can make every element equal to 3.
// Example 3:
// Input: grid = [[1,2],[3,4]], x = 2
// Output: -1
// Explanation: It is impossible to make every element equal.
#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main(){
    vector<vector<int>> grid = {{2,4},{6,8}};
    int n = grid.size();
    int m = grid[0].size();
    vector<int> arrange;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            arrange.push_back(grid[i][j]);
        }
    }
    int a = arrange.size();
    sort(arrange.begin(),arrange.end());
    
    int mid = a/2;
    int target = arrange[mid];

    for(int k=0;k<a;k++){
        if(target > arrange[k]){
            
        }
    }
}