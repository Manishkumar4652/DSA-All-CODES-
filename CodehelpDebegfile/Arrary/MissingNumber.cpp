#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    // Find Missing Number
    vector<int> arr = {0,1,2,3,5,6,8};
    sort(arr.begin() , arr.end());
    int n = arr.size();

    for(int i=0;i<n;i++){
        if(arr[i] == i){
        }
        else{
            cout<<i;
        
        }
    }

      //  cout<<n;  // -> iska matlab hai ki jab hamari range [0,2] hogi tab


    // //METHOD 2
    // int n = arr.size();
    // // XOR of all Element
    // int ans = 0;
    // for(int i=0;i<n;i++){
    //     ans = ans ^ arr[i];
    // }

    // //XOR of all n Element [0 , n]
    // for(int i=0;i<=n;i++){
    //     ans = ans ^ i;
    // }
    //     cout<<ans;

}