// 1727. Largest Submatrix With Rearrangements
// Example 1:
// Input: arr = [[0,0,1],[1,1,1],[1,0,1]]
// Output: 4
// Explanation: You can rearrange the columns as shown above.
// The largest submatrix of 1s, in bold, has an area of 4.
// Example 2:
// Input: arr = [[1,0,1,0,1]]
// Output: 3
// Explanation: You can rearrange the columns as shown above.
// The largest submatrix of 1s, in bold, has an area of 3.
// Example 3:
// Input: arr = [[1,1,0],[1,0,1]]
// Output: 2
// Explanation: Notice that you must rearrange entire columns, and there is no way to make a submatrix of 1s larger than an area of 2.
//T.C : (m * nlogn)
//S.C : O(m*n)
#include<iostream>
#include<vector>
#include <algorithm>
#include <set>
using namespace std;
int main(){
    vector<vector<int>> arr = {{0,0,1},{1,1,1},{1,0,1}};
        int m = arr.size();
        int n = arr[0].size();
        int result = 0;
        
        for(int row = 0; row < m; row++) {
            
            for(int col = 0; col < n; col++) {
                
                if(arr[row][col] == 1 && row > 0) {
                    arr[row][col] += arr[row-1][col];  //upper se add karte aa rhe hai
                }
                
            }
           
            vector<int> currRow = arr[row];
            sort(begin(currRow), end(currRow), greater<int>());
            for(int col = 0; col < n; col++) {
                int base   = (col+1); //iske peeche k columns me >= currRow[col] to hoga hi 1s
                int height = currRow[col];
                
                result = max(result, base*height);
            }
            
        }
        
        cout<< result;
    }