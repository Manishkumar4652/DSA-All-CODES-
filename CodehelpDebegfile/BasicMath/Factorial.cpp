#include<iostream>
using namespace std;
int main(){
    long long num;
    cin>>num;
    long long fact = 1;
    if(num == 0 || num == 1){
        cout<<1;
    }
    else{
    for(int i=2;i<=num;i++){
        fact = fact * i;
    }
}
        cout<<fact;
}