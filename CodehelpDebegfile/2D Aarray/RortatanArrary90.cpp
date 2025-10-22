// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     int arr[][4] = {{1,2,4,2}
//                    ,{4,5,6,2}
//                    ,{7,8,9,2}
//                    ,{3,6,4,8}};
//     // Tarmspose Matrix
//     for(int i=0;i<4;i++){
//         for(int j=0;j<i;j++){
//             swap(arr[i][j] , arr[j][i]);
//         }
//             cout<<endl;
//     }
//     // Reverse each eliment 
//     for(int i=0;i<4;i++){
//         int start = 0;
//         int end = 3;

//     while(start < end){
//             swap(arr[i][start] , arr[i][end]);
//             start++;
//             end--;
        
//         }
//     }   
//     // Print final output
//     for(int i=0;i<4;i++){
//     for(int j=0;j<4;j++){
//       cout<<arr[i][j]<<" ";
//     }
//       cout<<endl;
//     }

// }                   



#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
   vector<vector<int>> arr = {{1,2,4,2}
                             ,{4,5,6,2}
                             ,{7,8,9,2}
                             ,{3,6,4,8}};
    int size = arr.size();
    // Transpose Matrix
    for(int i=0;i<size;i++){
        for(int j=0;j<i;j++){
            swap(arr[i][j] , arr[j][i]);
        }
    } 
    // Row wise reverse
    for(int i=0;i<size;i++){
        reverse(arr[i].begin() , arr[i].end());
    }
        for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
        cout<<arr[i][j]<<" ";
    }
        cout<<endl;
}
}