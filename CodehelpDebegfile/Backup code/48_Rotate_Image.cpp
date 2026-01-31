// 48. Rotate Image
// Example 1:
// Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
// Output: [[7,4,1],[8,5,2],[9,6,3]]
// Example 2:
// Input: matrix = [[5,1,9,11],[2,4,8,10],[13,3,6,7],[15,14,12,16]]
// Output: [[15,13,2,5],[14,3,4,1],[12,6,8,9],[16,7,10,11]]
#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    vector<vector<int>> arr = {{1,2,3},
                               {4,5,6},
                               {7,8,9}};
    // Transpose a matrix
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<i;j++){
            swap(arr[i][j] , arr[j][i]);
        }
    }
    // row wise reverse
    for(int i=0;i<arr.size();i++){
        reverse(arr[i].begin() , arr[i].end());
    }

    for(auto a: arr){
        for(auto k: a){
            cout<<k<<" ";
        }
        cout<<endl;
    }

}


class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // Transpose a matrix
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < i; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        // row wise reverse
        for (int i = 0; i < matrix.size(); i++) {
            reverse(matrix[i].begin(), matrix[i].end());
        }

    }
};