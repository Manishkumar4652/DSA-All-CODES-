#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr = {50,60,70,10,20,30,40};
    int n = arr.size();

    int s = 0;
    int e = n -1;
    int ans = -1;

    while(s <= e){
        int mid = (s+e)/2;

        if(arr[mid] > arr[mid+1]){
            cout<<arr[mid]<<" ";
        }

        if(arr[mid] < arr[s]){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }
        return -1;
}