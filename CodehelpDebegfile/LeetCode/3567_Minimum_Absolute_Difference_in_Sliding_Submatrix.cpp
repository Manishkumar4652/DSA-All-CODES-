// 3567. Minimum Absolute Difference in Sliding Submatrix
// Example 1:
// Input: grid = [[1,8],[3,-2]], k = 2
// Output: [[2]]
// Explanation:
// There is only one possible k x k submatrix: [[1, 8], [3, -2]].
// Distinct values in the submatrix are [1, 8, 3, -2].
// The minimum absolute difference in the submatrix is |1 - 3| = 2. Thus, the answer is [[2]].
// Example 2:
// Input: grid = [[3,-1]], k = 1
// Output: [[0,0]]
// Explanation:
// Both k x k submatrix has only one distinct element.
// Thus, the answer is [[0, 0]].
// Example 3:
// Input: grid = [[1,-2,3],[2,3,5]], k = 2
// Output: [[1,2]]
// Explanation:
// There are two possible k × k submatrix:
// Starting at (0, 0): [[1, -2], [2, 3]].
// Distinct values in the submatrix are [1, -2, 2, 3].
// The minimum absolute difference in the submatrix is |1 - 2| = 1.
// Starting at (0, 1): [[-2, 3], [3, 5]].
// Distinct values in the submatrix are [-2, 3, 5].
// The minimum absolute difference in the submatrix is |3 - 5| = 2.
// Thus, the answer is [[1, 2]].
#include<iostream>
#include<vector>
#include<set>
#include<climits>
#include<algorithm>
using namespace std;

int main(){
    vector<vector<int>> arr = {{1,-2,3},{2,3,5}};
    int k = 2;

    int row = arr.size();
    int col = arr[0].size();

    vector<vector<int>> result(row-k+1, vector<int>(col-k+1));

    for(int i = 0; i <= row - k; i++){
        for(int j = 0; j <= col - k; j++){

            set<int> val;

            for(int r = i; r < i + k; r++){
                for(int c = j; c < j + k; c++){
                    val.insert(arr[r][c]);
                }
            }

            vector<int> ans(val.begin(), val.end());
            int n = ans.size();

            if(n <= 1){
                result[i][j] = 0;
                continue;
            }

            int mindigit = INT_MAX;

            for(int x = 0; x < n - 1; x++){
                mindigit = min(mindigit, abs(ans[x] - ans[x+1]));
            }

            result[i][j] = mindigit;
        }
    }

    // print result
    for(auto &row : result){
        for(auto &val : row){
            cout << val << " ";
        }
        cout << endl;
    }
}