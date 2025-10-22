#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int ReverseArry(char arr[] , int size){
    int s = 0;
    int e = strlen(arr)-1;

    while(s <= e){
        swap(arr[s] , arr[e]);
        s++;
        e--;
    }
}
int main(){
    char arr[50];
    cin.getline(arr,50);
    ReverseArry(arr,50);
    cout<<arr;
}