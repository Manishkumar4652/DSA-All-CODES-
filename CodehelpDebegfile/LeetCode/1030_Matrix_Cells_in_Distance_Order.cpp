// 1030. Matrix Cells in Distance Order
// Example 1:
// Input: rows = 1, cols = 2, rCenter = 0, cCenter = 0
// Output: [[0,0],[0,1]]
// Explanation: The distances from (0, 0) to other cells are: [0,1]
// Example 2:
// Input: rows = 2, cols = 2, rCenter = 0, cCenter = 1
// Output: [[0,1],[0,0],[1,1],[1,0]]
// Explanation: The distances from (0, 1) to other cells are: [0,1,1,2]
// The answer [[0,1],[1,1],[0,0],[1,0]] would also be accepted as correct.
// Example 3:
// Input: rows = 2, cols = 3, rCenter = 1, cCenter = 2
// Output: [[1,2],[0,2],[1,1],[0,1],[1,0],[0,0]]
// Explanation: The distances from (1, 2) to other cells are: [0,1,1,2,2,3]
// There are other answers that would also be accepted as correct, such as [[1,2],[1,1],[0,2],[1,0],[0,1],[0,0]].

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int rows = 2;
    int cols = 3;
    int rCenter = 1;
    int cCenter = 2;

    vector<vector<int>> ans;

    // Store all cells
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            ans.push_back({i, j});
        }
    }

    // Sort according to Manhattan Distance
    sort(ans.begin(), ans.end(), [&](vector<int> &a, vector<int> &b) {
        int dist1 = abs(a[0] - rCenter) + abs(a[1] - cCenter);
        int dist2 = abs(b[0] - rCenter) + abs(b[1] - cCenter);
        return dist1 < dist2;
    });

    // Print Answer
    for (auto &cell : ans) {
        cout << "[" << cell[0] << "," << cell[1] << "] ";
    }

    return 0;
}