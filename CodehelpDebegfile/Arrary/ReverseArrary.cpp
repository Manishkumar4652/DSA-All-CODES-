// // Method 1 
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = {1,2,3,4,5,6};
//     for(int i=5;i>=0;i--){
//         cout<<arr[i]<<" ";
//     }
// }


//Method 2

#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6};
    int i = 0;
    int j = 6-1;
    while(i < j){
        swap(arr[i] , arr[j]);
        i++;
        j--;
    }
        for(int k = 0; k < 6; k++){
        cout << arr[k] << " ";
    }
}