#include<iostream>
using namespace std;
int fabbonaciS(int a){
    //Base case
    if(a == 0) return 0;
    if(a == 1) return 1;

    int fab1 = fabbonaciS(a - 1);
    int fab2 = fabbonaciS(a - 2);

    int ans = fab1 + fab2;
}
int main(){
    cout<<fabbonaciS(5);
}