// // 2906. Construct Product Matrix
// // Example 1:
// // Input: arr = [[1,2],[3,4]]
// // Output: [[24,12],[8,6]]
// // Explanation: result[0][0] = arr[0][1] * arr[1][0] * arr[1][1] = 2 * 3 * 4 = 24
// // result[0][1] = arr[0][0] * arr[1][0] * arr[1][1] = 1 * 3 * 4 = 12
// // result[1][0] = arr[0][0] * arr[0][1] * arr[1][1] = 1 * 2 * 4 = 8
// // result[1][1] = arr[0][0] * arr[0][1] * arr[1][0] = 1 * 2 * 3 = 6
// // So the answer is [[24,12],[8,6]]

// // Example 2:
// // Input: arr = [[12345],[2],[1]]
// // Output: [[2],[0],[0]]
// // Explanation: result[0][0] = arr[0][1] * arr[0][2] = 2 * 1 = 2.
// // result[0][1] = arr[0][0] * arr[0][2] = 12345 * 1 = 12345. 12345 % 12345 = 0. So result[0][1] = 0.
// // result[0][2] = arr[0][0] * arr[0][1] = 12345 * 2 = 24690. 24690 % 12345 = 0. So result[0][2] = 0.
// // So the answer is [[2],[0],[0]].

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<vector<int>> arr = {{1,2},{3,4}};

//     int row = arr.size();
//     int col = arr[0].size();
    
//     vector<vector<int>> result(row, vector<int>(col, 1));

    
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             int down = 1;
//             int left= 1;
//             int right= 1;
//             int leftdigonal= 1;
//             int rightdigonal= 1;
//             int leftupper= 1;
//             int upper= 1;
//             int rightupper = 1;
//             //Down direction
//             if(i+1<row){
//                  down = arr[i+1][j];
//             }
//             //Left side
//             if(j-1>=0){
//                  left = arr[i][j-1];
//             }
//             //Right side
//             if(j+1<col){
//                  right = arr[i][j+1];
//             }
//             //Left digonal
//             if(i+1<row && j+1<col){
//                  leftdigonal = arr[i+1][j+1];
//             }
//             //Right digonal
//             if(i+1<row && j-1>=0){
//                  rightdigonal = arr[i+1][j-1];
//             }
//             //Leftupper
//             if(i-1>=0 && j-1>=0){
//                  leftupper = arr[i-1][j-1];
//             }
//             //Upper
//             if(i-1>=0){
//                  upper = arr[i-1][j];
//             }
//             //Rightupper
//             if(i-1>=0 && j+1<col){
//                   rightupper = arr[i-1][j+1];
//             }

//             int product = down*left*right*leftdigonal*rightdigonal*leftupper*upper*rightupper;
//             result[i][j] = product;
//         }
//     }
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             cout<<result[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }


//Optimal apporach
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>> arr = {{1,2},{3,4}};
    int row = arr.size();
    int col = arr[0].size();
    int MOD = 12345;
    vector<vector<int>> result(row, vector<int>(col, 1));

        long long suffix = 1;
        for(int i = row-1; i >= 0; i--) {
            for(int j = col-1; j >= 0; j--) {
                result[i][j] = suffix;
                suffix = (suffix * arr[i][j]) % MOD;
            }
        }

        long long prefix = 1;
        for(int i = 0; i < row; i++) {
            for(int j = 0; j < col; j++) {
                result[i][j] = (prefix * result[i][j]) % MOD;
                prefix = (prefix * arr[i][j]) % MOD;
            }
        }

    for(auto &row : result){
        for(auto val : row){
            cout<<val<<" ";
        }
        cout<<endl;
    }
}