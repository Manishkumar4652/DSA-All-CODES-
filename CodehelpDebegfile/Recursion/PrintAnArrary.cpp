#include<iostream>
using namespace std;
int PrintA(int arr[] , int size , int index){
    //Base Case
    if(index >= size) return 0;

    cout<<arr[index]<<" ";

    PrintA(arr , size , index+1);
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    cout<<PrintA(arr , 8 , 0);
}