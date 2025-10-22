// //Method 1
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = {1,0,1,0,1,1,1,0,0};
//     int totalzero = 0;
//     int totalones = 0;
//     int size = 9;
//     for(int i=0;i<size;i++){
//         if(arr[i] == 0){
//             totalzero++;
//         }

//         else if(arr[i] == 1){
//             totalones++;
//         }

//     }
//     cout<< "Total Zeros: "<<totalzero<<endl;
//     cout<<"Total Ones: "<<totalones;
// }




// Method 2

#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,0,0,1,0,1};
    int n = 0;
    int m = 5;
    // for(int i=0;i<m;i++){
        while(n < m){

            if(arr[n] == 0){
                n++;
            }

            else if(arr[m] == 1){
                m--;
            }

            else {
                swap(arr[n] , arr[m]);
                n++ , m--;
            }
        }
            for(int i=0;i<6;i++){
                cout<<arr[i];
            }
    }
//}