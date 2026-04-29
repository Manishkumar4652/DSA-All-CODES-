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
    int x = 2;
        int m = grid.size();
        int n = grid[0].size();

        vector<int> vec;
        //O(m*n)
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                vec.push_back(grid[i][j]);
            }
        }

        int L = vec.size(); //m*n

        //sort(begin(vec), end(vec)); //O(LlogL)
        nth_element(begin(vec), begin(vec) + L/2, end(vec)); //O(L)
        int target = vec[L/2];
        int result = 0;
        for(int &num : vec) { //O(m*n)
            if(num%x != target%x) {
                cout<< -1;
            }

            result += abs(target-num)/x;
        }

        cout<< result;
    }