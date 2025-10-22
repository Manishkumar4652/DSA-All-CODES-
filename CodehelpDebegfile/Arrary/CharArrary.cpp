#include<iostream>
using namespace std;
char Reversearry(char arr[],int size){
        for(int i=0;i<size;i++){
        cout<< (char)arr[i]<<" ";
    }
}


int main(){
    char arr[] = {'a','s','d','f','g','h','j','k','l','m'};
    int size = 9;
     Reversearry(arr , size);
    // cout<<a;
}