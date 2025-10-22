#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    // Row print
    for(int row=1;row<=n;row++){
        // Space print
        int b = row - 1;
        for(int col=1;col<=b;col++){
            cout<<"  ";
        }
        // Star print
        for(int col=1;col<=((2*n)-(2*row-1));col++){
            cout<<"* ";
        }
        cout<<endl;
    }
}