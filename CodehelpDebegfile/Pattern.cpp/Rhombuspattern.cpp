#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    // Row print
    for(int row=1;row<=n;row++){
        // Space print
        for(int col=1;col<=(n-row);col++){
            cout<<"  ";
        }
        //Star print
        for(int col=1;col<=n;col++){
            cout<<"* ";
        }
        cout<<endl;
    }


}        