// 3418. Maximum Amount of Money Robot Can Earn
// Example 1:
// Input: coins = [[0,1,-1],[1,-2,3],[2,-3,4]]
// Output: 8
// Explanation:
// An optimal path for maximum coins is:
// Start at (0, 0) with 0 coins (total coins = 0).
// Move to (0, 1), gaining 1 coin (total coins = 0 + 1 = 1).
// Move to (1, 1), where there's a robber stealing 2 coins. The robot uses one neutralization here, avoiding the robbery (total coins = 1).
// Move to (1, 2), gaining 3 coins (total coins = 1 + 3 = 4).
// Move to (2, 2), gaining 4 coins (total coins = 4 + 4 = 8).
// Example 2:
// Input: coins = [[10,10,10],[10,10,10]]
// Output: 40
// Explanation:
// An optimal path for maximum coins is:
// Start at (0, 0) with 10 coins (total coins = 10).
// Move to (0, 1), gaining 10 coins (total coins = 10 + 10 = 20).
// Move to (0, 2), gaining another 10 coins (total coins = 20 + 10 = 30).
// Move to (1, 2), gaining the final 10 coins (total coins = 30 + 10 = 40).
#include<iostream>
#include<climits>
#include<vector>
using namespace std;
    int m;
    int n;

int solve(vector<vector<int>> &arr , int i , int j , int neu){

    if(i >= m || j >= n){
        return INT_MIN;
    }

    if(i == m-1 && j == n-1){
        if(arr[i][j] < 0 && neu > 0){
            return 0;
        }
        return arr[i][j];
    }

    int down = solve(arr,i+1,j,neu);
    int right = solve(arr,i,j+1,neu);

    int best = max(down, right);

    int take = (best == INT_MIN) ? INT_MIN : arr[i][j] + best;

    int skip = INT_MIN;
    if(arr[i][j] < 0 && neu > 0){
        int skipdown = solve(arr,i+1,j,neu-1);
        int skipright = solve(arr,i,j+1,neu-1);
        skip = max(skipdown, skipright);
    }

    return max(take, skip);
}
int main(){
    vector<vector<int>> arr = {{0,1,-1},{1,-2,3},{2,-3,4}};

    m = arr.size();
    n = arr[0].size();

    cout << solve(arr , 0 , 0 , 2);
}