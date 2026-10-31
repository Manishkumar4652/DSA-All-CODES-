// 3665. Twisted Mirror Path Count
// Given an m x n binary grid grid where:
// grid[i][j] == 0 represents an empty cell, and
// grid[i][j] == 1 represents a mirror.
// A robot starts at the top-left corner of the grid (0, 0) and wants to reach the bottom-right corner (m - 1, n - 1). It can move only right or down. If the robot attempts to move into a mirror cell, it is reflected before entering that cell:
// If it tries to move right into a mirror, it is turned down and moved into the cell directly below the mirror.
// If it tries to move down into a mirror, it is turned right and moved into the cell directly to the right of the mirror.
// If this reflection would cause the robot to move outside the grid boundaries, the path is considered invalid and should not be counted.
// Return the number of unique valid paths from (0, 0) to (m - 1, n - 1).
// Since the answer may be very large, return it modulo 109 + 7.
// Note: If a reflection moves the robot into a mirror cell, the robot is immediately reflected again based on the direction it used to enter that mirror: if it entered while moving right, it will be turned down; if it entered while moving down, it will be turned right. This process will continue until either the last cell is reached, the robot moves out of bounds or the robot moves to a non-mirror cell.
// Example 1:
// Input: grid = [[0,1,0],[0,0,1],[1,0,0]]
// Output: 5
// Explanation:
// Number	Full Path
// 1	(0, 0) → (0, 1) [M] → (1, 1) → (1, 2) [M] → (2, 2)
// 2	(0, 0) → (0, 1) [M] → (1, 1) → (2, 1) → (2, 2)
// 3	(0, 0) → (1, 0) → (1, 1) → (1, 2) [M] → (2, 2)
// 4	(0, 0) → (1, 0) → (1, 1) → (2, 1) → (2, 2)
// 5	(0, 0) → (1, 0) → (2, 0) [M] → (2, 1) → (2, 2)
// [M] indicates the robot attempted to enter a mirror cell and instead reflected.
// Example 2:
// Input: grid = [[0,0],[0,0]]
// Output: 2
// Explanation:
// Number	Full Path
// 1	(0, 0) → (0, 1) → (1, 1)
// 2	(0, 0) → (1, 0) → (1, 1)
// Example 3:
// Input: grid = [[0,1,1],[1,1,0]]
// Output: 1
// Explanation:
// Number	Full Path
// 1	(0, 0) → (0, 1) [M] → (1, 1) [M] → (1, 2)
// (0, 0) → (1, 0) [M] → (1, 1) [M] → (2, 1) goes out of bounds, so it is invalid.
// Constraints:
// m == grid.length
// n == grid[i].length
// 2 <= m, n <= 500
// grid[i][j] is either 0 or 1.
// grid[0][0] == grid[m - 1][n - 1] == 0
#include <iostream>
#include <vector>

using namespace std;

class Solution {
private:
    int m, n;
    const int MOD = 1e9 + 7;
    vector<vector<vector<int>>> memo;

    pair<pair<int, int>, int> getNextState(int r, int c, int dir, const vector<vector<int>>& grid) {
        int nr = r;
        int nc = c;
        int cur_dir = dir;

        if (cur_dir == 0) nc++;
        else nr++;

        while (true) {
            if (nr < 0 || nr >= m || nc < 0 || nc >= n) {
                return {{-1, -1}, -1};
            }

            if (grid[nr][nc] == 0) {
                return {{nr, nc}, cur_dir};
            }

            if (cur_dir == 0) {
                nr++;
            } else {
                nc++;
            }
            cur_dir = 1 - cur_dir; 
        }
    }

    int dp(int r, int c, const vector<vector<int>>& grid) {
        if (r == m - 1 && c == n - 1) {
            return 1;
        }

        long long total_paths = 0;

        auto next_right = getNextState(r, c, 0, grid);
        if (next_right.second != -1) {
            int nr = next_right.first.first;
            int nc = next_right.first.second;
            int ndir = next_right.second;

            if (memo[nr][nc][ndir] == -1) {
                memo[nr][nc][ndir] = dp(nr, nc, grid);
            }
            total_paths = (total_paths + memo[nr][nc][ndir]) % MOD;
        }

        auto next_down = getNextState(r, c, 1, grid);
        if (next_down.second != -1) {
            int nr = next_down.first.first;
            int nc = next_down.first.second;
            int ndir = next_down.second;

            if (memo[nr][nc][ndir] == -1) {
                memo[nr][nc][ndir] = dp(nr, nc, grid);
            }
            total_paths = (total_paths + memo[nr][nc][ndir]) % MOD;
        }

        return total_paths;
    }

public:
    int uniquePaths(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();
        
        if (grid[0][0] == 1) return 0;
        
        memo.assign(m, vector<vector<int>>(n, vector<int>(2, -1)));
        
        return dp(0, 0, grid);
    }
};

int main() {
    Solution solver;
    
    vector<vector<int>> grid = {
        {0, 1, 0},
        {0, 0, 1},
        {1, 0, 0}
    };

    int result = solver.uniquePaths(grid);
    
    cout << "Total unique paths: " << result << endl;

    return 0;
}
