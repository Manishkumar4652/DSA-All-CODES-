#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num; 
    int original = num;
    int rev = 0;
    while (num > 0){
      int digits = num%10;
      rev = rev * 10 + digits; 
      num = num/10;
      
    }
    if(rev == original) cout<< "Yes";
    else cout<<"No";
}