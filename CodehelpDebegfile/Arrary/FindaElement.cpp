#include<iostream>
using namespace std;
int main(){
    int arr[] = {5,7,3,4,8,2,9};
    int find = 2;
    int size = 7;
    for(int i=0;i<size;i++){
        if(arr[i] == find){
            cout<<i;
        }
    }
}