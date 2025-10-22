#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr = {0,0,1,1,1,2,2,3,3,4};
    int n = arr.size();
    int i = 1;
    int j = 0;
    while(i < n){
        if(arr[i] == arr[j]){
            i++;
        }

        else{
            j++;
            arr[j] = arr[i];
            i++;
        }
    }
        cout<<j+1;
       
}



// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     vector<int> arr = {4,3,2,7,8,2,3,1};
//     int n = arr.size();
//     sort(arr.begin() , arr.end());
//     int i = 1;
//     int j = 0;
    // while(i < n){
    //     if(arr[i] == arr[j]){
    //         i++;
    //     }

    //     else{
    //         j++;
    //         arr[j] = arr[i];
    //         i++;
    //     }
    // }
    //     for(int i=0;i<n;i++){
    //         cout<<arr[i]<<" ";
    //     }

    //     int ans = 0; 
    //     for(int i=0;i<n;i++){
    //       ans = ans ^ arr[i];
    //    }

    //     for(int i=0;i<=n;i++){
    //         ans = ans ^ i;
    //     }

    //     for(int i=0;i<n;i++){
    //         cout<<ans;
    //     }


       
//}