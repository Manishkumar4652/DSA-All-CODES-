#include<iostream>
#include<vector>
using namespace std;
void merg(int arr[] , int s , int e , int mid){
    //creat a copy of left and right sorted array

    int leftArraylenght = mid - s + 1;
    int rightArraylenght = e - mid;

    int  *arr1 = new int[leftArraylenght];
    int  *arr2 = new int[rightArraylenght];

    // data insert in dynamic copy
    int mainArrayIndex = s;
    for(int i=0;i<leftArraylenght;i++){
        arr1[i] = arr[mainArrayIndex]    ;
        mainArrayIndex++;
    }

    mainArrayIndex = mid + 1;
    for(int i=0;i<rightArraylenght;i++){
        arr2[i] = arr[mainArrayIndex] ;
        mainArrayIndex++;
    }

    //mergsort logic into the original array
    int i=0;  //arr1
    int j=0;  //arr2

    mainArrayIndex = s;
    while(i<leftArraylenght && j<rightArraylenght){
        if(arr1[i] < arr2[j]){
            arr[mainArrayIndex] = arr1[i];
            i++;
            mainArrayIndex++;
        }
        else{
            arr[mainArrayIndex] = arr2[j];
            j++;
            mainArrayIndex++;
        }
    }

    //copy logic
    while(i < leftArraylenght){
        arr[mainArrayIndex] = arr1[i];
        i++;
        mainArrayIndex++;
    }

    while(j < rightArraylenght){
        arr[mainArrayIndex] = arr2[j];
        j++;
        mainArrayIndex++;
    }

    delete[] arr1;
    delete[] arr2;

}
void mergsort(int arr[] , int s , int e){
    //base case
    if(s >= e){
        return;
    }
    int mid = (s+e)/2;

    //left part ko solve
    mergsort(arr , s , mid);

    //right part ko solve
    mergsort(arr , mid+1 , e);

    merg(arr , s , e ,mid);
}
int main(){
    int arr[] = {6,2,4,3,1,5};
    int size = 6;
    int start = 0;
    int end = size-1;

    mergsort(arr , start , end);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}