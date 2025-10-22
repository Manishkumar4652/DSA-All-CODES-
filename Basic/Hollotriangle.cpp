#include<iostream>
using namespace std;
int main(){
int m;
cin>>m;
int n;
cin>>n;
for(int i=1;i<=m;i++){
    for(int j=1;j<=n;j++){ 
        if(i==n || i==1 || j==1 || j==n) {
       cout<<"*"<<" ";}
       else cout<<"  ";
    }cout<<endl;
}    

}