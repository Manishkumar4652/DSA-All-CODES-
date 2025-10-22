#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr = {1,2,3,5,4};
    int n = arr.size();

    for(int i=0;i<n;i++){
        if(arr[i] > arr[i+1]){
            cout<<i;
            break;
        }
    }

}

