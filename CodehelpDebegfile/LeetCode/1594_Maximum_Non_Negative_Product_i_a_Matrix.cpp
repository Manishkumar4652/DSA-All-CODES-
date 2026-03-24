// 1594. Maximum Non Negative Product in a Matrix
// Input: grid = [[1,-2,1],[1,-2,1],[1,-2,1]]
// Output: 8
// Explanation: Maximum non-negative product is shown (1 * 1 * -2 * -4 * 1 = 8).
#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int solve(vector<vector<int>> &arr , int product , int row){
    // base case
    if(row == arr.size()){
        return product;
    }

    // maximum product
    int ans = INT_MIN;

    // loop for each column
    for(int col = 0; col < arr[row].size(); col++){
        int reAns = solve(arr , product * arr[row][col] , row + 1);
        ans = max(ans , reAns);
    }

    return ans;
}

int main(){
    vector<vector<int>> arr = {{1,-2,1},
                               {1,-2,1},
                               {1,-2,1}};

    int product = 1;
    int row = 0;

    int an = solve(arr , product , row);
    cout << an;
}