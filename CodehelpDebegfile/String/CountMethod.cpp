#include<iostream>
#include<cstring>
using namespace std;
int Getlength(char arr[],int size){
    int count = 0;
    while(arr[count] != '\0'){
        count++;
    }
        return count;
}
int main(){
    char arr[50];
    cin.getline(arr,50);
    cout<<Getlength(arr,50)<<endl;
    cout<<strlen(arr);

}