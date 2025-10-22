#include<iostream>
using namespace std;
int main(){
    int n = 5;
    for(int row=1;row<=n;row++){
        for(int col=1;col<=row-1;col++){
            cout<<"  ";
        }
        for(int col=1;col<=2*(n-row+1);col++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int row=1;row<=n;row++){
        for(int col=1;col<=n-row;col++){
            cout<<"  ";
        }
        for(int col=1;col<=2*row;col++){
            cout<<"* ";
        }
        cout<<endl;
    }

    
}