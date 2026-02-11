// 73. Set Matrix Zeroes
// Example 1:
// Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
// Output: [[1,0,1],[0,0,0],[1,0,1]]
// Example 2:
// Input: matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]
// Output: [[0,0,0,0],[0,4,5,0],[0,3,1,0]]
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> arr = {{1,1,1},{1,0,1},{1,1,1}};
    vector<vector<int>> temp;
    temp = arr;
    int m = arr.size();
    int n = arr[0].size();

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j] == 0){
                for(int k=0;k<n;k++){
                    temp[i][k] = 0;
                }        
                for(int k=0;k<m;k++){
                    temp[k][j] = 0;
                }                    
            }
        }
    }
    for(int q=0;q<m;q++){
        for(int w=0;w<n;w++){
            cout<<temp[q][w]<<" ";
        }
        cout<<endl;
    }
}