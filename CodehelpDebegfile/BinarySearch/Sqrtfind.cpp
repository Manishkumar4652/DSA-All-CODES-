#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
   // vector<int> arr;
    //int n = arr.size();
    int target = 16;
    int s = 0;
    int e = target;
    int ans;

    while(s <= e){
        long long mid = s+(e-s)/2;
        long long product = mid * mid;

        if(target == product){
            cout<<mid;
        }
        if(target < product){
            e = mid - 1;
        }
        else{
            ans = mid;
            s = mid + 1;
        }
    }
        
}