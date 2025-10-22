#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    int j=1;
    int count = 0;
    while(j<=n){
        if(n % j == 0){
            count++;
        }
        j++;    
        }
        if(count == 2){
            cout<<"Yes";
        }

        else{
            cout<<"No";
        }
    
}
