#include<iostream>
using namespace std;
int main(){
    // ye vala case shi nhi lga mere ko
    int num = 16;
        if(num == 0){
        cout<< "No";
    }
    if((num & (num-1)) == 0){
        cout<< "Yes";
    }
    else{
        cout<< "No";
    }
    }
