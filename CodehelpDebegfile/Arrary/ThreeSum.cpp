// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     vector<int> arr;
//     arr.push_back(-1);   //-1,0,1,2,-1,-4
//     arr.push_back(0);
//     arr.push_back(1);
//     arr.push_back(2);
//     arr.push_back(-1);
//     arr.push_back(-4);
//     //arr.push_back(2);
//     int size = arr.size();
//     for(int i=0;i<size;i++){
//         if(i>0 && arr[i] == arr[i-1]){  // ye for loop isleye lgaya hai 
//                                           // taki duplicate Number print na ho
//             continue;
//         }
//         for(int j=i+1;j<size;j++){
//             if(j>i+1 && arr[j] == arr[j-1]){  // ye for loop isleye lgaya hai 
//                                               // taki duplicate Number print na ho
//                  continue;
//         }
//             for(int k=j+1;k<size;k++){
//                 if(k>j+1 && arr[k] == arr[k-1]){  // ye for loop isleye lgaya hai 
//                                                   // taki duplicate Number print na ho
//                    continue;
//         }
//                 int first = arr[i];
//                 int second = arr[j];
//                 int third = arr[k];
//                 int sum = first + second + third;
//                 if(sum == 0){
//                     cout<<"["<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<"]";
//                 }
//             }
//         }
//     }
// }




// Method 2
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr = {-1,0,1,2,-1,-4}; //-1,0,1,2,-1,-4
    sort(arr.begin() , arr.end());
    int n = arr.size();

    for(int i=0;i<n-2;i++){

        // To avoid Triplet
        if(i > 0 && arr[i] == arr[i-1]) continue;

        int j = i + 1;
        int k = n - 1;

        while(j < k){
            int sum = arr[i] + arr[j] + arr[k];

            if(sum ==0){
                cout<<"["<<arr[i]<<","<<arr[j]<<","<<arr[k]<<"]";
                j++;
                k--;
                // Skip duplicate Value
                while(j < k && arr[k] == arr[k+1]) k--;
                while(j < k && arr[j] == arr[j-1]) j++;
            }

            else if(sum > 0){
                k--;
            }
            else{
                j++;
            }

        }
    }

}