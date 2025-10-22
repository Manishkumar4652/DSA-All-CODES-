#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    int last = arr[5-1];
    for(int i=4;i>0;i--){

            arr[i] = arr[i-1];
        }
        arr[0] = last;
        
        for(int i=0;i<5;i++){
            cout<<arr[i];
    }
     
}
