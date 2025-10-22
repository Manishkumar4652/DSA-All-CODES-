// Uniq Eliment
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int arr[] = {1,2,3,2,1};
    int ans = 0;
    for(int i=0;i<5;i++){
        ans = ans ^ arr[i];
    }
        cout<<ans;
}