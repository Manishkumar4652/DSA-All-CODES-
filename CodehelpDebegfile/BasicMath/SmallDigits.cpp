#include<iostream>
#include<climits>
using namespace std;
int main(){
    int num=5423;
    int smallest = INT_MAX;
    while(num > 0){
        int digits = num%10;
        if(digits < smallest){
            smallest = digits;
        }
            num = num/10;
    } 
        cout<< smallest;
}