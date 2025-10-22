#include<iostream>
using namespace std;
int reverseNumber(int num){
        int sum = 0;
    int rev = 0;
    while (num > 0){
      int digits = num%10;
      rev = rev * 10 + digits; 
      num = num/10;
      
    }
    return rev;
}

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int pal = reverseNumber(num);    
    if(num==pal) cout<<"Number is a Palindrom: "<<endl<<pal;
    else cout<<"Number is not a Palindrom: "<<endl<<num;
}