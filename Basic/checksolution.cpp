#include<iostream>
using namespace std;
int main(){
int m;
cin>>m;
int n;
cin>>n;
for(int i=1;i<=m;i++){
    // method n-i+1
    for(int j=1;j<=n-i+1;j++){  
       cout<<i<<" ";
    }cout<<endl;
}    

}