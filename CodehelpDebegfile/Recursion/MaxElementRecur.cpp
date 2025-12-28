#include<iostream>
#include<algorithm>
using namespace std;
int PrintA(int arr[] , int size , int index){
    //Base Case
    if(size-1 == index){
        return arr[index];
    }
    // Recursive call
    int maxi =  PrintA(arr , size , index+1);

    // Return maximum number
    return max(arr[index] , maxi);

}
int main(){
    int arr[] = {3,4,2,6,5,8,7,9};
    int size = 8;
    int index = 0;
    int maxium = PrintA(arr , size , index);

    cout<<"maximun number is: "<<maxium;
}