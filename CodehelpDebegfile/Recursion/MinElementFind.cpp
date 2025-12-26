#include<iostream>
#include<climits>
using namespace std;
int PrintA(int arr[] , int size , int index){
    //Base Case
    if(size-1 == index){
        return arr[index];
    }
    // Recursive call
    int mina =  PrintA(arr , size , index+1);

    if( mina > arr[index]){
          return arr[index];
    }
    else{
        return mina;
    }

}
int main(){
    int arr[] = {3,4,2,6,5,8,7,9};
    int size = 8;
    int index = 0;
    int minium = PrintA(arr , size , index);
        cout<<"Minium number is "<<minium;
}