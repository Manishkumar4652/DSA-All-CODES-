#include<iostream>
using namespace std;
int PrintA(int arr[] , int size , int target , int index){
    //Base Case
    if(target== arr[index]){

        cout<<"Index Number is : "<<index<<endl;
        cout<<"And Element is  : "<<arr[index];
        return 0;
    }


    PrintA(arr , size , target , index+1);
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int target = 6;
    int index = 0;
    cout<<PrintA(arr , 8 , target , index);
}