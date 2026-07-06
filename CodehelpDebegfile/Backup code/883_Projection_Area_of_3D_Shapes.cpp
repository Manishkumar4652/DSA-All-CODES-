// 883. Projection Area of 3D Shapes
// Example 1:
// Input: grid = [[1,2],[3,4]]
// Output: 17
// Explanation: Here are the three projections ("shadows") of the shape made with each axis-aligned plane.
// Example 2:
// Input: grid = [[2]]
// Output: 5
// Example 3:
// Input: grid = [[1,0],[0,2]]
// Output: 8
// 883. Projection Area of 3D Shapes

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    vector<vector<int>> grid = {
        {1,2},
        {3,4}
    };

    int ans = 0;
    int m = grid.size();
    int n = grid[0].size();

    // Top Projection (xy-plane)
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(grid[i][j] > 0)
                ans++;
        }
    }

    // Front Projection (yz-plane)
    for(int i = 0; i < m; i++) {
        int maxi = 0;
        for(int j = 0; j < n; j++) {
            maxi = max(maxi, grid[i][j]);
        }
        ans += maxi;
    }

    // Side Projection (zx-plane)
    for(int i = 0; i < n; i++) {
        int maxi = 0;
        for(int j = 0; j < m; j++) {
            maxi = max(maxi, grid[j][i]);
        }
        ans += maxi;
    }

    cout << ans;

    return 0;
}