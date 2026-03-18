// 3070. Count Submatrices with Top-Left Element and Sum Less Than k
// Example 1:
// Input: grid = [[7,6,3],[6,6,1]], k = 18
// Output: 4
// Explanation: There are only 4 submatrices, shown in the image above, that contain the top-left element of grid, and have a sum less than or equal to 18.Example 2:
// Input: grid = [[7,2,9],[1,5,0],[2,6,6]], k = 20
// Output: 6
// Explanation: There are only 6 submatrices, shown in the image above, that contain the top-left element of grid, and have a sum less than or equal to 20.
#include<iostream> 
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> arr = {{7,2,9},{1,5,0},{2,6,6}};
    int k = 18;
    int count = 0;

    int row = arr.size();
    int col = arr[0].size();

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){

            if(i-1 >= 0) arr[i][j] += arr[i-1][j]; //col ke pichale vala add
            if(j-1 >= 0) arr[i][j] += arr[i][j-1]; // row ke pechale vala add
            if(i-1>=0 && j-1>=0) arr[i][j] -= arr[i-1][j-1]; //Digonal vala element subtract

            if(arr[i][j] <= k) count++;
            else break;
        }
    }

    cout<<count;
} 