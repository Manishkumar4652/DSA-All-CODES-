#include<iostream>
#include<cstring>
using namespace std;
int ReplaceX(char arr[] , int size){
    for(int i=0;i<size;i++){
        if(arr[i] == ' '){
            arr[i] = 'X';
        }
    }
}
int main(){
    char arr[50];
    cin.getline(arr,50);
    ReplaceX(arr,50);
    cout<<arr;
}