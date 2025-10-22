#include<iostream>
using namespace std;
int main(){
int m;
cin>>m;
int n;
cin>>n;
for(int i=1;i<=m;i++){
    for(int j=1;j<=n;j++){ 
        if(i==j or (i+j)==m+1) {
       cout<<"*"<<"";}
       else cout<<" ";
    }cout<<endl;
}    

}