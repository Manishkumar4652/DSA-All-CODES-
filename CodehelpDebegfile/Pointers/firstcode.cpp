#include<iostream>
using namespace std;
int main(){
    int a = 4;
    cout<<&a<<endl;
    int b = 5;
    int *ptr = &b; 
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<&ptr<<endl;
    cout<<&ptr+1;
}