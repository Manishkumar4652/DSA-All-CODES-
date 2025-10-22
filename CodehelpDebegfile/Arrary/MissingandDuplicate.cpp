#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main(){
    // Vsiting Method
    vector<int> arr = {2,2,2,2};
    int n = arr.size();

    for(int i=0;i<n;i++){
        int index = abs(arr[i]) - 1;

        if(arr[index] > 0){
            arr[index] *= -1; 
        }
            
    }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<",";
        }
            cout<<endl;
                                 
        for(int i=0;i<n;i++){
            if(arr[i] > 0){
                cout<<(i+1)<<" ";
            }
        }



}



// #include <iostream>
// #include <vector>
// #include <cmath>
// using namespace std;

// int main() {
//     vector<int> arr = {2, 2, 2, 2};
//     int n = arr.size();

//     // Step 1: Visiting / Marking
//     for (int i = 0; i < n; i++) {
//         int index = abs(arr[i]) - 1;
//         if (arr[index] > 0) {
//             arr[index] *= -1;
//         }
//     }

//     // Step 2: Print 1-based positions that were NOT visited
//     for (int i = 0; i < n; i++) {
//         if (arr[i] > 0) {
//             cout << (i + 1) << " ";
//         }
//     }

//     return 0;
// }
