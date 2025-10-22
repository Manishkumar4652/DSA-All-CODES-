#include<iostream>
using namespace std;
int main(){
    int num = 123;
    int sum = 0;
    while (num > 0)
    {
       int digits = num%10;
       sum += digits;
       num = num/10;
    }
        cout<<sum;
    
}