// 2812. Find the Safest Path in a Grid
// Example 1:
// Input: grid = [[1,0,0],[0,0,0],[0,0,1]]
// Output: 0
// Explanation: All paths from (0, 0) to (n - 1, n - 1) go through the thieves in cells (0, 0) and (n - 1, n - 1).
// Example 2:
// Input: grid = [[0,0,1],[0,0,0],[0,0,0]]
// Output: 2
// Explanation: The path depicted in the picture above has a safeness factor of 2 since:
// - The closest cell of the path to the thief at cell (0, 2) is cell (0, 0). The distance between them is | 0 - 0 | + | 0 - 2 | = 2.
// It can be shown that there are no other paths with a higher safeness factor.
// Example 3:
// Input: grid = [[0,0,0,1],[0,0,0,0],[0,0,0,0],[1,0,0,0]]
// Output: 2
// Explanation: The path depicted in the picture above has a safeness factor of 2 since:
// - The closest cell of the path to the thief at cell (0, 3) is cell (1, 2). The distance between them is | 0 - 1 | + | 3 - 2 | = 2.
// - The closest cell of the path to the thief at cell (3, 0) is cell (3, 2). The distance between them is | 3 - 3 | + | 0 - 2 | = 2.
// It can be shown that there are no other paths with a higher safeness factor.
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    int n;
    vector<vector<int>> directions{{1,0},{-1,0},{0,-1},{0,1}};

    bool check(vector<vector<int>>& distNearestThief, int sf) {
        queue<pair<int,int>> que;
        vector<vector<bool>> visited(n, vector<bool>(n, false));

        if(distNearestThief[0][0] < sf)
            return false;

        que.push({0,0});
        visited[0][0] = true;

        while(!que.empty()) {
            pair<int,int> p = que.front();
            int curr_i = p.first;
            int curr_j = p.second;
            que.pop();

            if(curr_i == n-1 && curr_j == n-1)
                return true;

            for(auto &dir : directions) {
                int new_i = curr_i + dir[0];
                int new_j = curr_j + dir[1];

                if(new_i >= 0 && new_i < n && new_j >= 0 && new_j < n && !visited[new_i][new_j]) {
                    if(distNearestThief[new_i][new_j] < sf)
                        continue;

                    que.push({new_i, new_j});
                    visited[new_i][new_j] = true;
                }
            }
        }
        return false;
    }

    int maximumSafenessFactor(vector<vector<int>>& grid) {
        n = grid.size();

        vector<vector<int>> distNearestThief(n, vector<int>(n, -1));
        queue<pair<int,int>> que;
        vector<vector<bool>> visited(n, vector<bool>(n, false));

        // Multi-source BFS
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                if(grid[i][j] == 1) {
                    que.push({i,j});
                    visited[i][j] = true;
                }
            }
        }

        int level = 0;
        while(!que.empty()) {
            int size = que.size();

            while(size--) {
                pair<int,int> p = que.front();
                int curr_i = p.first;
                int curr_j = p.second;
                que.pop();

                distNearestThief[curr_i][curr_j] = level;

                for(auto &dir : directions) {
                    int new_i = curr_i + dir[0];
                    int new_j = curr_j + dir[1];

                    if(new_i < 0 || new_i >= n || new_j < 0 || new_j >= n || visited[new_i][new_j])
                        continue;

                    que.push({new_i, new_j});
                    visited[new_i][new_j] = true;
                }
            }
            level++;
        }

        int l = 0, r = 400, result = 0;

        while(l <= r) {
            int mid_sf = l + (r-l)/2;

            if(check(distNearestThief, mid_sf)) {
                result = mid_sf;
                l = mid_sf + 1;
            } else {
                r = mid_sf - 1;
            }
        }

        return result;
    }
};

int main() {
    // Fixed input
    vector<vector<int>> grid = {
        {0,0,1},
        {0,0,0},
        {0,0,0}
    };

    Solution obj;
    cout << "Output: " << obj.maximumSafenessFactor(grid) << endl;

    return 0;
}