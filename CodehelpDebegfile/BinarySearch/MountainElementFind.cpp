#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr = {10,20,30,40,50,25,15};
    int n = arr.size();
    int s = 0;
    int e = n - 1;
    int ans = -1;

    while(s <= e){
        int mid = (s+e)/2;
        if(arr[mid] < arr[mid+1]){
            s = mid + 1;
        }
        else{
            ans = mid;
            e = mid - 1;
        }
    }
        cout<<arr[ans];
}