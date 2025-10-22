#include<iostream>
using namespace std;
int main(){
    int a = 28;
    int b = 35;
    int temp1 = a;
    int temp2 = b;
    while(temp1 != temp2){
        if(temp1 > temp2){
            temp1 = temp1 - temp2;
        }

        else{
            temp2 = temp2 - temp1;
        }
    }
        // cout<<a<<endl;
        // cout<<b<<endl;
        // cout<<temp1<<endl;
        int lcm = (a * b)/temp1;
        cout<<lcm;
       


}