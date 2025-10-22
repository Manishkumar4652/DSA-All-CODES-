#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr = {0,1,2,4,5,6,7,8,9};
    int n = arr.size();
    int s = 0;
    int e = n - 1;
    int ans = n;

    while(s <= e){
        int mid = (s+e)/2;
        if(arr[mid] == mid){
            s = mid + 1;
        }
        else if(arr[mid] == mid + 1){
            ans = mid;
            e = mid - 1;
        }
    }
        cout<<ans<<" ";   
        
}