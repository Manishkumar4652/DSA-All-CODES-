#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,-3,-2,-4};
    int size = sizeof(arr)/4;
    int negative = 0;
    int positive = 0;
    for(int i=0;i<size;i++){
        if(arr[i] > 0){
            positive +=  arr[i];
        }

        else if(arr[i] < 0){
            negative += arr[i];
        }
    }
        cout<<positive<<" "<<negative;
}