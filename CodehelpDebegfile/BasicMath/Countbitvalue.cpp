#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    int count = 0;
    // while(n!=0){
        int lastbit = (n & 1);
        // if(lastbit == 1){
        //     count++;
        //     n>>1;
        //}
            cout<<lastbit;

    // }
}