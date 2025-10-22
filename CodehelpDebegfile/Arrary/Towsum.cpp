// #include<iostream>
// #include<cmath>
// using namespace std;
// int main(){
//     int arr[] = {1,2,3,4,5,6};
//      int targat = 11;
//     for(int i=0;i<6;i++){
//         for(int j=i+1;i<6;i++){
//             int first = arr[i];
//             int second = arr[j];
//             int sum = first + second;
//             if(sum == targat){
//                 cout<<sum<<endl;
//                 cout<<arr[i]<<"+"<<arr[j];
//             }    
//         }
//     }
// }




#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr = {1,3,5,7};
    int n = arr.size();
    int i = 0;
    int j = i + 1;
    int target = 12;
    int sum;
    while(i < n-1){
        sum = arr[i] + arr[j];
        if(sum == target){
            cout<<"["<<arr[i]<<","<<arr[j]<<"]";
        }

        if(j < n){
            j++;
        }
        else{
            i++;
        }
    }
}