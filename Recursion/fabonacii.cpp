#include<iostream>
using namespace std;
int fabo(int n){
    if(n==1 or n==2) return 1;
    return fabo(n-1) + fabo(n-2);
}
int main(){
    int n;
    cout<<"Enter a number ";
    cin>>n;
    cout<<fabo(n);
}