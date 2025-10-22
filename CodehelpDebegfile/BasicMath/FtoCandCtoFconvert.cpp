#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    string F;
    cout<<"Enter a Number: ";
    cin>>n;
    cout<<"Enter Your Convertor: ";
    cin>>F;
    if(F == "FtoC"){
        int c = ((n - 32)*5)/9;
        cout<<c;
    }
    else if(F == "CtoF"){
        int f = (n * 9/5)+32;
        cout<<f;
    }

}