#include<iostream>
using namespace std;
int main(){
    int arr[] = {9,2,5,6,4};
    int sum = 0;
    int size = 5;
    for(int i=0;i<size;i++){
        sum = sum + arr[i];
    }
        int avg = sum/size;
        cout<<avg;
}