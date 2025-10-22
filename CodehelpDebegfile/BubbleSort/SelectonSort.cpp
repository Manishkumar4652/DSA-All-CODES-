#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr = {5,4,3,2,1};
    int n = arr.size();
    for(int i=0;i<n;i++){
        int minindex = i;
    

    for(int j=i+1;j<n;j++){
        if(arr[j] < arr[minindex]){
            minindex = j;
        }
    }
    swap(arr[i] , arr[minindex]);

    }
        for(int a : arr){
            cout<<a<<" ";
        }
}