// 1260. Shift 2D Grid
// Example 1:
// Input: grid = [[1,2,3],[4,5,6],[7,8,9]], k = 1
// Output: [[9,1,2],[3,4,5],[6,7,8]]
// Example 2:
// Input: grid = [[3,8,1,9],[19,7,2,5],[4,6,11,10],[12,0,21,13]], k = 4
// Output: [[12,0,21,13],[3,8,1,9],[19,7,2,5],[4,6,11,10]]
// Example 3:
// Input: grid = [[1,2,3],[4,5,6],[7,8,9]], k = 9
// Output: [[1,2,3],[4,5,6],[7,8,9]]
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {

    int m = grid.size();
    int n = grid[0].size();

    int total = m * n;
    k %= total;

    vector<vector<int>> ans(m, vector<int>(n));

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {

            int index = i * n + j;
            int newIndex = (index + k) % total;

            int newRow = newIndex / n;
            int newCol = newIndex % n;

            ans[newRow][newCol] = grid[i][j];
        }
    }

    return ans;
}

int main() {

    // Fixed Test Case
    vector<vector<int>> grid = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int k = 1;

    vector<vector<int>> ans = shiftGrid(grid, k);

    cout << "Output Grid:\n";

    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[0].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}