#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int Palindromic(char arr[] , int size){
    int s = 0;
    int e = strlen(arr)-1;

    while(s <= e){
        if(arr[s] != arr[e]){
            cout<<"Not a Plindrom"; break;
            s++;
            e--;
        }
        else{
            cout<<"Yes a Palindrom"; break;
        }
    }
}
int main(){
    char arr[50];
    cout<<"Entert a Charcter: ";
    cin.getline(arr,50);
    Palindromic(arr,50);
    cout<<arr;
}