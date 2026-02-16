// 1380. Lucky Numbers in a Matrix
// Example 1:
// Input: matrix = [[3,7,8],[9,11,13],[15,16,17]]
// Output: [15]
// Explanation: 15 is the only lucky number since it is the minimum in its row and the maximum in its column.
// Example 2:
// Input: matrix = [[1,10,4,2],[9,3,8,7],[15,16,17,12]]
// Output: [12]
// Explanation: 12 is the only lucky number since it is the minimum in its row and the maximum in its column.
// Example 3:
// Input: matrix = [[7,8],[1,2]]
// Output: [7]
// Explanation: 7 is the only lucky number since it is the minimum in its row and the maximum in its column.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> arr = {{3,7,8},{9,11,13},{15,16,17}};
    int row = arr.size();
    int col = arr[0].size();
    int i = 0;
    int j = 0;
    //find min in row
    for(int i=0;i<col;){}
}