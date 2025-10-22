#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr = {2,5,9,6,9,3,8,1,4,7};
    int n = arr.size();
    int i = 0;
    int j = 1;
    // find duplicate number
    while(i < n){
        if(arr[i] == arr[j]){
            cout<<arr[i];
            break;
        }

        else{
            if(j < n-1){
                j++;
            }
            else{
                i++;
                j=i+1;
            }
        }
    }
}