// 3643. Flip Square Submatrix Vertically
// Example 1:
// Input: grid = [[1,2,3,4],[5,6,7,8],[9,10,11,12],[13,14,15,16]], x = 1, y = 0, k = 3
// Output: [[1,2,3,4],[13,14,15,8],[9,10,11,12],[5,6,7,16]]
// Explanation:
// The diagram above shows the grid before and after the transformation.
// Example 2:
// ​​​​​​
// Input: grid = [[3,4,2,3],[2,3,4,2]], x = 0, y = 2, k = 2
// Output: [[3,4,4,2],[2,3,2,3]]
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> arr = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int x = 1;
    int y = 0;
    int k = 3;

    for(int j = y; j < k+y; j++) {
        int top = x;
        int bottom = x+k-1;

        while(top < bottom) {
            swap(arr[top][j], arr[bottom][j]);
            top++;
            bottom--;
        }
    }

    // print result
    for(auto row : arr) {
        for(auto val : row) {
            cout << val << " ";
        }
        cout << endl;

    }
}