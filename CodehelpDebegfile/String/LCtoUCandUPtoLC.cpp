#include<iostream>
#include<cstring>
using namespace std;
// Change Lower Case to Uppercase
void LCtoUPcase(char arr[] , int size){
    for(int i=0;i<size;i++){
        if(arr[i] >= 'a' && arr[i] <= 'z'){
            arr[i] = arr[i]-'a'+'A';
        }
    }
}
void UPtoLCcase(char arr[] , int size){
        for(int i=0;i<size;i++){
        if(arr[i] >= 'A' && arr[i] <= 'Z'){
            arr[i] = arr[i]-'A'+'a';
        }
    }
}
int main(){
    char arr[50];
    cout<<"Enter Your Charcter: ";
    cin.getline(arr,50);
    LCtoUPcase(arr,50);
    cout<<arr<<endl;
    UPtoLCcase(arr,50);
    cout<<arr;

}