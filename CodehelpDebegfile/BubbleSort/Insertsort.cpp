#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr = {5,4,3,2,1};
    int n = arr.size();
    int i = 1;
    for(int i=0;i<n;i++){
        int j = i - 1;
        int key = arr[i];
    
    while(j>=0 && arr[j] > key){
        arr[j+1] = arr[j];
        j--;
    }
       arr[j+1] = key;
}
    for(int a : arr){
        cout<<a<<" ";
    }
}