#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr = {-1,-1,-2,-2,-3};
    int n = arr.size();
    int cf = 1;
    int maxfrq = 1;
    int mode = arr[0];

    sort(arr.begin() , arr.end());

    for(int i=1;i<n-1;i++){
        if(arr[i] == arr[i-1]){
            cf++;
        }

        else{
            cf = 1;
        }

        if(cf > maxfrq){
            maxfrq = cf;
            mode = arr[i];
        }
    }
        cout<<mode;
}