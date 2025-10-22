#include<iostream>
using namespace std;
int main(){
    int a = 28 , b = 35;
    while(a != b){
        if(a > b){
            a = a - b;
        }

        else{
            b = b - a;
        }
    }
        cout<<a;
}