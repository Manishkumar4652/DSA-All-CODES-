#include<iostream>
using namespace std;
int main(){
    int num = 199;
    int sum = 0;
    while(num>0){
        int digit = num%10;
        sum = sum + digit;
        num = num/10;
    }
    int su = 0;
    while(sum>0){
        int digi = sum%10;
        su = su + digi;
        sum = sum/10;
    }
    cout<<su;
}

        // if (num == 0) return 0;
        // return (num - 1) % 9 + 1;   direct formula