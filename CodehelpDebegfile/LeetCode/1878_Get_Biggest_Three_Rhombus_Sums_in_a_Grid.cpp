// 1878. Get Biggest Three Rhombus Sums in a Grid
// Note that the rhombus can have an area of 0, which is depicted by the purple rhombus in the bottom right corner.
// Return the biggest three distinct rhombus sums in the grid in descending order. If there are less than three distinct values, return all of them.
// Example 1:
// Input: grid = [[3,4,5,1,3],[3,3,4,2,3],[20,30,200,40,10],[1,5,5,4,1],[4,3,2,2,5]]
// Output: [228,216,211]
// Explanation: The rhombus shapes for the three biggest distinct rhombus sums are depicted above.
// - Blue: 20 + 3 + 200 + 5 = 228
// - Red: 200 + 2 + 10 + 4 = 216
// - Green: 5 + 200 + 4 + 2 = 211
// Example 2:
// Input: grid = [[1,2,3],[4,5,6],[7,8,9]]
// Output: [20,9,8]
// Explanation: The rhombus shapes for the three biggest distinct rhombus sums are depicted above.
// - Blue: 4 + 2 + 6 + 8 = 20
// - Red: 9 (area 0 rhombus in the bottom right corner)
// - Green: 8 (area 0 rhombus in the bottom middle)
// Example 3:
// Input: grid = [[7,7,7]]
// Output: [7]
// Explanation: All three possible rhombus sums are the same, so return [7].
#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

vector<int> getBiggestThree(vector<vector<int>>& grid) {

    int row = grid.size();
    int col = grid[0].size();

    set<int> st;

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){

            // size = 0 rhombus
            st.insert(grid[i][j]);

            for(int k=1; k<row; k++){

                if(i-k<0 || i+k>=row || j-k<0 || j+k>=col)
                break;

                int sum = 0;

                int x=i-k, y=j;

                // top -> right
                while(x<i && y<j+k){
                    sum += grid[x][y];
                    x++; 
                    y++;
                }

                // right -> bottom
                while(x<i+k && y>j){
                    sum += grid[x][y];
                    x++; 
                    y--;
                }

                // bottom -> left
                while(x>i && y>j-k){
                    sum += grid[x][y];
                    x--; 
                    y--;
                }

                // left -> top
                while(x>i-k && y<j){
                    sum += grid[x][y];
                    x--; 
                    y++;
                }

                st.insert(sum);
            }
        }
    }

    vector<int> ans;

    for(auto x : st){
        ans.push_back(x);
    }

    sort(ans.begin(), ans.end(), greater<int>());

    while(ans.size() > 3){
        ans.pop_back();
    }

    return ans;   
}

int main(){

    vector<vector<int>> grid = {{1,2,3},{4,5,6},{7,8,9}};

    vector<int> ans = getBiggestThree(grid);

    for(int x:ans)
        cout<<x<<" ";
}