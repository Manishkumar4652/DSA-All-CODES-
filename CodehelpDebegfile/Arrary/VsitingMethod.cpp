#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    // Vsiting Method
    vector<int> arr = {4,3,2,7,8,2,3,1};
    int n = arr.size();

    for(int i=0;i<n;i++){
        int index = abs(arr[i]);

        if(arr[index - 1] > 0){
            arr[index - 1] *= -1; 
        }
            
    }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<",";
        }



}