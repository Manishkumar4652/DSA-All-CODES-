#include<iostream>
using namespace std;
int main(){
        int arr[4];
        int size = 4;
        for(int i=0;i<size;i++){
            cout<<"Enter your "<<i+1<<" Number: "<<endl;
            cin>>arr[i];
        }
        cout<<"Your Arrary Number is This: "<<endl;
        for(int j=0;j<size;j++){
            cout<<arr[j]<<",";
        }
}